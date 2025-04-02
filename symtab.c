#include "symtab.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Add this prototype at the top of the file
const char* getTypeName(SymbolType type);

// Define the global variable
SymbolType currentType;

// Create a new symbol table
SymbolTable* createSymbolTable() {
    SymbolTable* symTab = (SymbolTable*)malloc(sizeof(SymbolTable));
    if (symTab == NULL) {
        fprintf(stderr, "Memory allocation failed for symbol table\n");
        exit(1);
    }
    
    // Initialize all hash table entries to NULL
    for (int i = 0; i < TABLE_SIZE; i++) {
        symTab->hashTable[i] = NULL;
    }
    symTab->size = 0;
    return symTab;
}

// Hash function - maps first letter to 0-25 (A-Z)
unsigned int hash(const char* name) {
    printf("Hashing name: '%s'\n", name);
    
    if (name == NULL || name[0] == '\0') {
        fprintf(stderr, "Warning: Empty name passed to hash function\n");
        return 0;
    }
    
    char firstChar = toupper(name[0]);
    printf("First char: '%c' (hash index: %d)\n", firstChar, firstChar - 'A');
    
    if (firstChar >= 'A' && firstChar <= 'Z') {
        return firstChar - 'A';
    }
    
    fprintf(stderr, "Warning: Non-alphabetic first character: '%c'\n", name[0]);
    return 0;
}

// Create a new symbol entry
SymbolEntry* createEntry(const char* name, SymbolType type, int line, int column) {
    if (name == NULL) {
        fprintf(stderr, "Error: Attempt to create entry with NULL name\n");
        return NULL;
    }
    
    SymbolEntry* entry = (SymbolEntry*)malloc(sizeof(SymbolEntry));
    if (entry == NULL) {
        fprintf(stderr, "Memory allocation failed for symbol entry\n");
        exit(1);
    }
    
    entry->name = strdup(name);
    if (entry->name == NULL) {
        fprintf(stderr, "Memory allocation failed for symbol name\n");
        free(entry);
        return NULL;
    }
    
    entry->type = type;
    entry->line = line;
    entry->column = column;
    entry->isInitialized = 0;
    entry->isConstant = (type == TYPE_CONST);
    entry->isUsed = 0;
    entry->next = NULL;
    
    // Initialize value based on type
    switch (type) {
        case TYPE_INTEGER:
            entry->value.intValue = 0;
            break;
        case TYPE_FLOAT:
            entry->value.floatValue = 0.0;
            break;
        case TYPE_STRING:
            entry->value.stringValue = NULL;
            break;
        case TYPE_CHAR:
            entry->value.charValue = '\0';
            break;
        case TYPE_VECTOR:
            entry->value.vectorInfo.rows = 0;
            entry->value.vectorInfo.cols = 0;
            entry->value.vectorInfo.elementType = TYPE_INTEGER;
            break;
        default:
            break;
    }
    
    return entry;
}

// Insert a symbol into the table
int insertSymbol(SymbolTable* symTab, const char* name, SymbolType type, int line, int column) {
    printf("***INSERTING SYMBOL: '%s' (type %d) at line %d, column %d\n", 
           name, type, line, column);
    
    // Check for NULL pointers
    if (symTab == NULL || name == NULL) {
        fprintf(stderr, "Error: NULL pointer passed to insertSymbol\n");
        return 0;
    }
    
    // Check if symbol already exists
    if (lookupSymbol(symTab, name) != NULL) {
        fprintf(stderr, "------------------ ---- Error: Symbol '%s' already defined a la ligne %d, colonne %d-------------\n", name, line, column);
        return 0;
    }
    
    unsigned int index = hash(name);
    
    // Create a new entry
    SymbolEntry* entry = (SymbolEntry*)malloc(sizeof(SymbolEntry));
    if (entry == NULL) {
        fprintf(stderr, "Memory allocation failed for symbol entry\n");
        exit(1);
    }

    void initializeVariable(SymbolEntry* entry) {
        // Function body
    }

    // Initialize entry
    entry->name = strdup(name);
    entry->type = type;
    entry->line = line;
    entry->column = column;
    entry->isInitialized = 0;
    entry->isConstant = (type == TYPE_CONST);
    entry->isUsed = 0;
    
    // Initialize value based on type
    switch (type) {
        case TYPE_INTEGER:
            entry->value.intValue = 0;
            break;
        case TYPE_FLOAT:
            entry->value.floatValue = 0.0;
            break;
        case TYPE_CHAR:
            entry->value.charValue = '\0';
            break;
        case TYPE_STRING:
            entry->value.stringValue = NULL;
            break;
        case TYPE_VECTOR:
            entry->value.vectorInfo.rows = 0;
            entry->value.vectorInfo.cols = 0;
            entry->value.vectorInfo.elementType = TYPE_INTEGER;
            printf("Vector initialized: %s\n", name);
            break;
        default:
            break;
    }
    
    // Insert at the beginning of the list
    entry->next = symTab->hashTable[index];
    symTab->hashTable[index] = entry;
    symTab->size++;
    
    return 1;  // Successfully inserted
}

// Look up a symbol in the table
SymbolEntry* lookupSymbol(SymbolTable* symTab, const char* name) {
    unsigned int index = hash(name);
    SymbolEntry* current = symTab->hashTable[index];
    
    while (current != NULL) {
        if (strcmp(current->name, name) == 0) {
            return current;
        }
        current = current->next;
    }
    
    return NULL;  // Not found
}

// Print the contents of the symbol table
void printSymbolTable(SymbolTable* symTab) {
    printf("\n=== Symbol Table ===\n");
    printf("Hash  %-15s %-10s %-15s %-8s %-8s\n", 
           "Name", "Type", "Value", "Line", "Column");
    printf("------------------------------------------------------\n");
    
    for (int i = 0; i < TABLE_SIZE; i++) {
        SymbolEntry* current = symTab->hashTable[i];
        
        if (current != NULL) {
            printf("[%c]:\n", 'A' + i);
            
            while (current != NULL) {
                printf("     %-15s ", current->name);
                
                // Print type
                switch (current->type) {
                    case TYPE_INTEGER:
                        printf("%-10s ", "INTEGER");
                        printf("%-15d ", current->value.intValue);
                        break;
                    case TYPE_FLOAT:
                        printf("%-10s ", "FLOAT");
                        printf("%-15.2f ", current->value.floatValue);
                        break;
                    case TYPE_CHAR:
                        printf("%-10s ", "CHAR");
                        printf("%-15c ", current->value.charValue);
                        break;
                    case TYPE_STRING:
                        printf("%-10s ", "STRING");
                        printf("%-15s ", current->value.stringValue ? 
                               current->value.stringValue : "NULL");
                        break;
                    case TYPE_CONST:
                        printf("%-10s ", "CONST");
                        printf("%-15s ", "");  // Value depends on original type
                        break;
                    case TYPE_VECTOR:
                        printf("%-10s ", "VECTOR");
                        printf("[%d,%d:%s] ", 
                               current->value.vectorInfo.rows,
                               current->value.vectorInfo.cols,
                               getTypeName(current->value.vectorInfo.elementType));
                        break;
                    default:
                        printf("%-10s ", "UNKNOWN");
                        printf("%-15s ", "");
                }
                
                printf("%-8d %-8d\n", current->line, current->column);
                current = current->next;
            }
        }
    }
    
    printf("\nTotal symbols: %d\n", symTab->size);
}

// Free the symbol table and all its entries
void freeSymbolTable(SymbolTable* symTab) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        SymbolEntry* current = symTab->hashTable[i];
        
        while (current != NULL) {
            SymbolEntry* next = current->next;
            
            // Free allocated memory
            free(current->name);
            if (current->type == TYPE_STRING && current->value.stringValue != NULL) {
                free(current->value.stringValue);
            }
            
            free(current);
            current = next;
        }
    }
    
    free(symTab);
}

// Add this helper function
const char* getTypeName(SymbolType type) {
    switch (type) {
        case TYPE_INTEGER:
            return "INTEGER";
        case TYPE_FLOAT:
            return "FLOAT";
        case TYPE_CHAR:
            return "CHAR";
        case TYPE_STRING:
            return "STRING";
        case TYPE_CONST:
            return "CONST";
        case TYPE_VECTOR:
            return "VECTOR";
        default:
            return "UNKNOWN";
    }
}

// Add this function to your symtab.c
int getIntValue(SymbolTable* symTab, const char* name) {
    SymbolEntry* entry = lookupSymbol(symTab, name);
    if (!entry) {
        fprintf(stderr, "Warning: Undefined variable '%s' used in expression\n", name);
        return 0; // Default for undefined variables
    }
    
    if (!entry->isInitialized) {
        fprintf(stderr, "Warning: Uninitialized variable '%s' used in expression\n", name);
        return 0;
    }
    
    switch (entry->type) {
        case TYPE_INTEGER:
            return entry->value.intValue;
        case TYPE_FLOAT:
            return (int)entry->value.floatValue;
        case TYPE_CHAR:
            return (int)entry->value.charValue;
        case TYPE_CONST:
            return entry->value.intValue;  // Assuming integer constants
        default:
            fprintf(stderr, "Warning: Variable '%s' is not a numeric type\n", name);
            return 0;
    }
}