/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    mc_code = 258,                 /* mc_code  */
    mc_data = 259,                 /* mc_data  */
    mc_start = 260,                /* mc_start  */
    mc_endp = 261,                 /* mc_endp  */
    mc_aff = 262,                  /* mc_aff  */
    mc_pvg = 263,                  /* mc_pvg  */
    mc_or = 264,                   /* mc_or  */
    mc_and = 265,                  /* mc_and  */
    mc_sup = 266,                  /* mc_sup  */
    mc_inf = 267,                  /* mc_inf  */
    mc_supeg = 268,                /* mc_supeg  */
    mc_infeg = 269,                /* mc_infeg  */
    mc_egal = 270,                 /* mc_egal  */
    mc_diff = 271,                 /* mc_diff  */
    mc_plus = 272,                 /* mc_plus  */
    mc_moins = 273,                /* mc_moins  */
    mc_mult = 274,                 /* mc_mult  */
    mc_div = 275,                  /* mc_div  */
    mc_adresse = 276,              /* mc_adresse  */
    mc_affectation = 277,          /* mc_affectation  */
    mc_crocheto = 278,             /* mc_crocheto  */
    mc_crochetf = 279,             /* mc_crochetf  */
    mc_comment = 280,              /* mc_comment  */
    mc_deuxp = 281,                /* mc_deuxp  */
    mc_vg = 282,                   /* mc_vg  */
    mc_vector = 283,               /* mc_vector  */
    mc_paro = 284,                 /* mc_paro  */
    mc_parf = 285,                 /* mc_parf  */
    mc_separateur = 286,           /* mc_separateur  */
    mc_read = 287,                 /* mc_read  */
    mc_display = 288,              /* mc_display  */
    mc_if = 289,                   /* mc_if  */
    mc_else = 290,                 /* mc_else  */
    mc_for = 291,                  /* mc_for  */
    INT_CONST = 292,               /* INT_CONST  */
    mc_ident = 293,                /* mc_ident  */
    mc_cst = 294,                  /* mc_cst  */
    mc_chaine = 295,               /* mc_chaine  */
    mc_charactere = 296,           /* mc_charactere  */
    mc_integ = 297,                /* mc_integ  */
    mc_float = 298,                /* mc_float  */
    mc_char = 299,                 /* mc_char  */
    mc_string = 300,               /* mc_string  */
    mc_const = 301                 /* mc_const  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 19 "syntax.y"

    int int_val;     // For integer values
    char char_val;   // For character values
    char *str_val;   // For string values (identifiers, etc.)
    SymbolType type_val; // For type information

#line 117 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
