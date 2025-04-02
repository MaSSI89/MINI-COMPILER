%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"  // This must contain the SymbolType definition and getIntValue prototype

int yylex();
void yyerror(const char *s);
int line = 1;
int column = 1;

// Need to declare the symbol table
SymbolTable* symbol_table;

// Use the SymbolType defined in symtab.h
// No need to redefine extern here
%}

%union {
    int int_val;     // For integer values
    char char_val;   // For character values
    char *str_val;   // For string values (identifiers, etc.)
    SymbolType type_val; // For type information
}

%token mc_code mc_data mc_start mc_endp mc_aff mc_pvg
%token mc_or mc_and mc_sup mc_inf mc_supeg mc_infeg mc_egal mc_diff mc_plus mc_moins mc_mult mc_div
%token mc_adresse mc_affectation mc_crocheto mc_crochetf
%token mc_comment mc_deuxp mc_vg mc_vector mc_paro mc_parf mc_separateur
%token mc_read mc_display mc_if mc_else mc_for

// Tokens that have values
%token <int_val> INT_CONST
%token <str_val> mc_ident
%token <str_val> mc_cst
%token <str_val> mc_chaine
%token <char_val> mc_charactere

// Tokens for types
%token mc_integ
%token mc_float
%token mc_char
%token mc_string
%token mc_const

// Define types for non-terminals
%type <type_val> VAR_TYPE
%type <str_val> LISTE_VAR
%type <int_val> VALEURS
%type <int_val> EXPRESSION TERME FACTEUR

%left mc_plus mc_moins
%left mc_mult mc_div
%left mc_paro mc_parf

%%
program: {
        // Initialize the symbol table at the start

        fflush(stdout);

        symbol_table = createSymbolTable();
} COMMENT mc_ident DATA_SECTION CODE_SECTION mc_endp {
            printf("PROGRAM COMPILATION STARTED %s\n", $3);
        printf("PROGRAM COMPILATION FINISHED\n");
        fflush(stdout);
        printSymbolTable(symbol_table);
        printf("Syntaxe correcte\n"); 
        printf("PROGRAM COMPILATION FINISHED\n");
        fflush(stdout);
        YYACCEPT;
}
;

DATA_SECTION: mc_data DECLARATIONS mc_endp
;
DECLARATIONS: DEC | DECLARATIONS DEC | COMMENT DECLARATIONS
           | DECLARATIONS COMMENT |
;
DEC: VAR_TYPE {
        currentType = $1;
        printf("Type set to: %d\n", currentType);
    } mc_deuxp LISTE_VAR mc_pvg
    | DEC_CONST  // Make sure these are included properly
    | DEC_VECTOR
;

// Changed from TYPE to var_type
VAR_TYPE: mc_integ { $$ = TYPE_INTEGER; }
        | mc_float { $$ = TYPE_FLOAT; }
        | mc_char  { $$ = TYPE_CHAR; }
        | mc_string { $$ = TYPE_STRING; }
;

LISTE_VAR: mc_ident {
        printf("Processing single var: '%s'\n", $1);
        int result = insertSymbol(symbol_table, $1, currentType, line, column);
        
        if (result) {
            // Initialize with default value
            SymbolEntry* entry = lookupSymbol(symbol_table, $1);
            if (entry) {
                switch (entry->type) {
                    case TYPE_INTEGER:
                        entry->value.intValue = 0;
                        break;
                    case TYPE_FLOAT:
                        entry->value.floatValue = 0.0f;
                        break;
                    case TYPE_CHAR:
                        entry->value.charValue = '\0';
                        break;
                    // Other types...
                }
            }
        }
        
        printf("Insert result: %d\n", result);
        $$ = $1;
    }
    | mc_ident mc_separateur LISTE_VAR {
        printf("Processing list var: '%s' (before another var)\n", $1);
        int result = insertSymbol(symbol_table, $1, currentType, line, column);
        
        if (result) {
            // Initialize with default value
            SymbolEntry* entry = lookupSymbol(symbol_table, $1);
            if (entry) {
                switch (entry->type) {
                    case TYPE_INTEGER:
                        entry->value.intValue = 0;
                        break;
                    case TYPE_FLOAT:
                        entry->value.floatValue = 0.0f;
                        break;
                    case TYPE_CHAR:
                        entry->value.charValue = '\0';
                        break;
                    // Other types...
                }
            }
        }
        
        printf("Insert result: %d\n", result);
        $$ = $1;
    }
;

DEC_CONST: mc_const mc_deuxp mc_ident mc_affectation VALEURS mc_pvg {
        // Insert constant with value
        printf("Inserting constant: %s with value %d\n", $3, $5);
        int result = insertSymbol(symbol_table, $3, TYPE_CONST, line, column);
        
        if (!result) {
            fprintf(stderr, "Failed to insert constant '%s'\n", $3);
        } else {
            // Get the entry and set its value
            SymbolEntry* entry = lookupSymbol(symbol_table, $3);
            if (entry) {
                entry->isInitialized = 1;
                entry->isConstant = 1;  // Mark as constant
                
                // Store value based on constant type
                switch ($5) {
                    case TYPE_INTEGER:
                        entry->value.intValue = $5;
                        break;
                    case TYPE_FLOAT:
                        entry->value.floatValue = (float)$5;
                        break;
                    case TYPE_CHAR:
                        entry->value.charValue = (char)$5;
                        break;
                    default:
                        // Handle string or other types
                        break;
                }
                
                printf("Constant %s initialized with value %d\n", $3, $5);
            }
        }
    }
;

DEC_VECTOR: mc_vector mc_deuxp mc_ident {
        // Capture vector name
        printf("Processing vector declaration: %s\n", $3);
    } mc_crocheto mc_cst mc_vg mc_cst mc_deuxp VAR_TYPE mc_crochetf mc_pvg {
        // Extract dimensions and type - note the updated position numbers
        printf("Vector: %s, Dimensions: [%s, %s], Type: %d\n", $3, $6, $8, $10);
        
        // Insert vector into symbol table
        if (!insertSymbol(symbol_table, $3, TYPE_VECTOR, line, column)) {
            fprintf(stderr, "Failed to insert vector %s into symbol table\n", $3);
        } else {
            // Get the entry we just inserted
            SymbolEntry* entry = lookupSymbol(symbol_table, $3);
            if (entry) {
                // Set vector dimensions and element type - update position numbers
                entry->value.vectorInfo.rows = atoi($6);
                entry->value.vectorInfo.cols = atoi($8);
                entry->value.vectorInfo.elementType = $10;
                printf("Vector %s added with dimensions [%d, %d] and type %d\n", 
                       $3, entry->value.vectorInfo.rows, 
                       entry->value.vectorInfo.cols, 
                       entry->value.vectorInfo.elementType);
            }
        }
    }
;
VALEURS: mc_charactere { $$ = $1; }
       | mc_chaine { $$ = 0; }
       | INT_CONST { $$ = $1; }
       | mc_cst { $$ = atoi($1); }
;
CODE_SECTION: mc_code INSTRUCTIONS mc_endp
;
INSTRUCTIONS: INSTRUCTION | INSTRUCTIONS INSTRUCTION 
            
;
COMMENT: mc_comment
;

INSTRUCTION: INSTRUCTION_AFFECTATION
            | INSTRUCTION_LIRE
            | INSTRUCTION_ECRIRE
            | INSTRUCTION_CONDITION
            | INSTRUCTION_BOUCLE
            | COMMENT INSTRUCTION
            | INSTRUCTION COMMENT
            |
;

INSTRUCTION_AFFECTATION: mc_ident mc_affectation EXPRESSION mc_pvg {
    // Look up the variable in the symbol table
    // printf("Processing assignment: %s = expression\n", $1);
    SymbolEntry* entry = lookupSymbol(symbol_table, $1);
    if (!entry) {
        fprintf(stderr, " ----------------- ---- Semantic error at line %d: Undeclared variable '%s'\n", line, $1);
    } else {
        // Update the variable's value based on its type
        entry->isInitialized = 1;
        entry->isUsed = 1;
        
        switch (entry->type) {
            case TYPE_INTEGER:
                entry->value.intValue = $3;
                printf("Updated variable '%s' with integer value %d\n", $1, $3);
                break;
            case TYPE_FLOAT:
                entry->value.floatValue = (float)$3;
                printf("Updated variable '%s' with float value %f\n", $1, (float)$3);
                break;
            case TYPE_CHAR:
                entry->value.charValue = (char)$3;
                printf("Updated variable '%s' with char value %c\n", $1, (char)$3);
                break;
            case TYPE_CONST:
                fprintf(stderr, "Error: Cannot assign to constant '%s' at line %d\n", $1, line);
                break;
            default:
                fprintf(stderr, "Warning: Unsupported type for assignment to '%s' at line %d\n", $1, line);
                break;
        }
    }
}
;

EXPRESSION: TERME
          | EXPRESSION mc_plus TERME {
              $$ = $1 + $3;
              printf("Addition: %d + %d = %d\n", $1, $3, $$);
          }
          | EXPRESSION mc_moins TERME {
              $$ = $1 - $3;
              printf("Subtraction: %d - %d = %d\n", $1, $3, $$);
          }
;

TERME: FACTEUR
     | TERME mc_mult FACTEUR {
         $$ = $1 * $3;
         printf("Multiplication: %d * %d = %d\n", $1, $3, $$);
     }
     | TERME mc_div FACTEUR {
         if ($3 == 0) {
             fprintf(stderr, "------------------ Semantic error at line %d: Division by zero -----------\n", line);
             $$ = 0;
         } else {
             $$ = $1 / $3;
             printf("Division: %d / %d = %d\n", $1, $3, $$);
         }
     }
;

FACTEUR: mc_ident { 
        SymbolEntry* entry = lookupSymbol(symbol_table, $1);
        if (!entry) {
            fprintf(stderr, "Error: Undeclared identifier '%s' at line %d\n", $1, line);
            $$ = 0; // Default value
        } else {
            entry->isUsed = 1;
            
            // Get value based on type
            switch (entry->type) {
                case TYPE_INTEGER:
                    $$ = entry->value.intValue;
                    break;
                case TYPE_FLOAT:
                    $$ = (int)entry->value.floatValue;
                    break;
                case TYPE_CHAR:
                    $$ = (int)entry->value.charValue;
                    break;
                case TYPE_CONST:
                    $$ = entry->value.intValue; // Assuming integer constants
                    break;
                default:
                    $$ = 0;
                    break;
            }
            printf("Retrieved value %d from variable '%s'\n", $$, $1);
        }
    }
    | INT_CONST { 
        $$ = $1; // Already an int
    }
    | mc_charactere { 
        $$ = (int)$1; // Convert char to int
    }
    | mc_chaine { 
        $$ = 0; // Default value for string
    }
    | mc_cst { 
        $$ = atoi($1); // Convert string to int
    }
    | mc_paro EXPRESSION mc_parf { 
        $$ = $2; // Use expression value
    }
    | mc_paro mc_moins FACTEUR mc_parf {  // Handle (-n) negative expressions
        $$ = -$3;
        printf("Handling negative factor: (-%d) = %d\n", $3, $$);
    }
;


INSTRUCTION_LIRE: mc_read mc_paro mc_chaine mc_deuxp mc_adresse mc_ident mc_parf mc_pvg
;

INSTRUCTION_ECRIRE: mc_display mc_paro mc_chaine mc_deuxp mc_ident mc_parf mc_pvg
;
INSTRUCTION_CONDITION: STRUCTURE_CONDITIONELLE
                        | INSTRUCTION_CONDITION STRUCTURE_CONDITIONELLE
;

STRUCTURE_CONDITIONELLE: mc_if mc_paro CONDITION mc_parf mc_deuxp
                              INSTRUCTIONS 
                         mc_else mc_deuxp
                              INSTRUCTIONS
                        mc_endp
                        | mc_if mc_paro CONDITION mc_parf mc_deuxp
                              INSTRUCTIONS
                        mc_endp
;

CONDITION: CONDITION mc_and CONDITION
            | CONDITION mc_or CONDITION
            | EXPRESSION OPERATEUR_COMPAR EXPRESSION
            | EXPRESSION
;

OPERATEUR_COMPAR : mc_sup 
                    | mc_inf
                    | mc_supeg
                    | mc_infeg
                    | mc_egal
                    | mc_diff
;
INSTRUCTION_BOUCLE :  INSTRUCTION_BOUCLE BLOC_BOUCLE | BLOC_BOUCLE 
;
BLOC_BOUCLE: mc_for mc_paro mc_ident mc_deuxp mc_cst mc_deuxp mc_ident mc_parf INSTRUCTION mc_endp | INSTRUCTION
;

%%
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d column %d\n", s, line , column);
}

int main() 
{
        setbuf(stdout, NULL);
yyparse();

}
int yywrap()
{

}