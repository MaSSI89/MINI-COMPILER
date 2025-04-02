/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"

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

#line 89 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_mc_code = 3,                    /* mc_code  */
  YYSYMBOL_mc_data = 4,                    /* mc_data  */
  YYSYMBOL_mc_start = 5,                   /* mc_start  */
  YYSYMBOL_mc_endp = 6,                    /* mc_endp  */
  YYSYMBOL_mc_aff = 7,                     /* mc_aff  */
  YYSYMBOL_mc_pvg = 8,                     /* mc_pvg  */
  YYSYMBOL_mc_or = 9,                      /* mc_or  */
  YYSYMBOL_mc_and = 10,                    /* mc_and  */
  YYSYMBOL_mc_sup = 11,                    /* mc_sup  */
  YYSYMBOL_mc_inf = 12,                    /* mc_inf  */
  YYSYMBOL_mc_supeg = 13,                  /* mc_supeg  */
  YYSYMBOL_mc_infeg = 14,                  /* mc_infeg  */
  YYSYMBOL_mc_egal = 15,                   /* mc_egal  */
  YYSYMBOL_mc_diff = 16,                   /* mc_diff  */
  YYSYMBOL_mc_plus = 17,                   /* mc_plus  */
  YYSYMBOL_mc_moins = 18,                  /* mc_moins  */
  YYSYMBOL_mc_mult = 19,                   /* mc_mult  */
  YYSYMBOL_mc_div = 20,                    /* mc_div  */
  YYSYMBOL_mc_adresse = 21,                /* mc_adresse  */
  YYSYMBOL_mc_affectation = 22,            /* mc_affectation  */
  YYSYMBOL_mc_crocheto = 23,               /* mc_crocheto  */
  YYSYMBOL_mc_crochetf = 24,               /* mc_crochetf  */
  YYSYMBOL_mc_comment = 25,                /* mc_comment  */
  YYSYMBOL_mc_deuxp = 26,                  /* mc_deuxp  */
  YYSYMBOL_mc_vg = 27,                     /* mc_vg  */
  YYSYMBOL_mc_vector = 28,                 /* mc_vector  */
  YYSYMBOL_mc_paro = 29,                   /* mc_paro  */
  YYSYMBOL_mc_parf = 30,                   /* mc_parf  */
  YYSYMBOL_mc_separateur = 31,             /* mc_separateur  */
  YYSYMBOL_mc_read = 32,                   /* mc_read  */
  YYSYMBOL_mc_display = 33,                /* mc_display  */
  YYSYMBOL_mc_if = 34,                     /* mc_if  */
  YYSYMBOL_mc_else = 35,                   /* mc_else  */
  YYSYMBOL_mc_for = 36,                    /* mc_for  */
  YYSYMBOL_INT_CONST = 37,                 /* INT_CONST  */
  YYSYMBOL_mc_ident = 38,                  /* mc_ident  */
  YYSYMBOL_mc_cst = 39,                    /* mc_cst  */
  YYSYMBOL_mc_chaine = 40,                 /* mc_chaine  */
  YYSYMBOL_mc_charactere = 41,             /* mc_charactere  */
  YYSYMBOL_mc_integ = 42,                  /* mc_integ  */
  YYSYMBOL_mc_float = 43,                  /* mc_float  */
  YYSYMBOL_mc_char = 44,                   /* mc_char  */
  YYSYMBOL_mc_string = 45,                 /* mc_string  */
  YYSYMBOL_mc_const = 46,                  /* mc_const  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_program = 48,                   /* program  */
  YYSYMBOL_49_1 = 49,                      /* $@1  */
  YYSYMBOL_DATA_SECTION = 50,              /* DATA_SECTION  */
  YYSYMBOL_DECLARATIONS = 51,              /* DECLARATIONS  */
  YYSYMBOL_DEC = 52,                       /* DEC  */
  YYSYMBOL_53_2 = 53,                      /* $@2  */
  YYSYMBOL_VAR_TYPE = 54,                  /* VAR_TYPE  */
  YYSYMBOL_LISTE_VAR = 55,                 /* LISTE_VAR  */
  YYSYMBOL_DEC_CONST = 56,                 /* DEC_CONST  */
  YYSYMBOL_DEC_VECTOR = 57,                /* DEC_VECTOR  */
  YYSYMBOL_58_3 = 58,                      /* $@3  */
  YYSYMBOL_VALEURS = 59,                   /* VALEURS  */
  YYSYMBOL_CODE_SECTION = 60,              /* CODE_SECTION  */
  YYSYMBOL_INSTRUCTIONS = 61,              /* INSTRUCTIONS  */
  YYSYMBOL_COMMENT = 62,                   /* COMMENT  */
  YYSYMBOL_INSTRUCTION = 63,               /* INSTRUCTION  */
  YYSYMBOL_INSTRUCTION_AFFECTATION = 64,   /* INSTRUCTION_AFFECTATION  */
  YYSYMBOL_EXPRESSION = 65,                /* EXPRESSION  */
  YYSYMBOL_TERME = 66,                     /* TERME  */
  YYSYMBOL_FACTEUR = 67,                   /* FACTEUR  */
  YYSYMBOL_INSTRUCTION_LIRE = 68,          /* INSTRUCTION_LIRE  */
  YYSYMBOL_INSTRUCTION_ECRIRE = 69,        /* INSTRUCTION_ECRIRE  */
  YYSYMBOL_INSTRUCTION_CONDITION = 70,     /* INSTRUCTION_CONDITION  */
  YYSYMBOL_STRUCTURE_CONDITIONELLE = 71,   /* STRUCTURE_CONDITIONELLE  */
  YYSYMBOL_CONDITION = 72,                 /* CONDITION  */
  YYSYMBOL_OPERATEUR_COMPAR = 73,          /* OPERATEUR_COMPAR  */
  YYSYMBOL_INSTRUCTION_BOUCLE = 74,        /* INSTRUCTION_BOUCLE  */
  YYSYMBOL_BLOC_BOUCLE = 75                /* BLOC_BOUCLE  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  146

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    57,    57,    57,    75,    77,    77,    77,    78,    78,
      80,    80,    84,    85,    89,    90,    91,    92,    95,   121,
     149,   185,   185,   211,   212,   213,   214,   216,   218,   218,
     221,   224,   225,   226,   227,   228,   229,   230,   231,   234,
     269,   270,   274,   280,   281,   285,   296,   325,   328,   331,
     334,   337,   340,   347,   350,   352,   353,   356,   361,   366,
     367,   368,   369,   372,   373,   374,   375,   376,   377,   379,
     379,   381,   381
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "mc_code", "mc_data",
  "mc_start", "mc_endp", "mc_aff", "mc_pvg", "mc_or", "mc_and", "mc_sup",
  "mc_inf", "mc_supeg", "mc_infeg", "mc_egal", "mc_diff", "mc_plus",
  "mc_moins", "mc_mult", "mc_div", "mc_adresse", "mc_affectation",
  "mc_crocheto", "mc_crochetf", "mc_comment", "mc_deuxp", "mc_vg",
  "mc_vector", "mc_paro", "mc_parf", "mc_separateur", "mc_read",
  "mc_display", "mc_if", "mc_else", "mc_for", "INT_CONST", "mc_ident",
  "mc_cst", "mc_chaine", "mc_charactere", "mc_integ", "mc_float",
  "mc_char", "mc_string", "mc_const", "$accept", "program", "$@1",
  "DATA_SECTION", "DECLARATIONS", "DEC", "$@2", "VAR_TYPE", "LISTE_VAR",
  "DEC_CONST", "DEC_VECTOR", "$@3", "VALEURS", "CODE_SECTION",
  "INSTRUCTIONS", "COMMENT", "INSTRUCTION", "INSTRUCTION_AFFECTATION",
  "EXPRESSION", "TERME", "FACTEUR", "INSTRUCTION_LIRE",
  "INSTRUCTION_ECRIRE", "INSTRUCTION_CONDITION", "STRUCTURE_CONDITIONELLE",
  "CONDITION", "OPERATEUR_COMPAR", "INSTRUCTION_BOUCLE", "BLOC_BOUCLE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-118)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -118,    34,   -17,  -118,  -118,   -12,    37,    -6,    45,    24,
    -118,  -118,  -118,  -118,    39,     0,  -118,  -118,  -118,  -118,
      -6,    76,    57,    14,    29,  -118,  -118,  -118,    50,    -6,
      49,    68,    70,    73,    81,    41,    76,   -17,  -118,  -118,
    -118,    52,  -118,    76,  -118,  -118,  -118,    83,    75,    71,
      89,    78,    95,    78,  -118,   -17,   -17,  -118,  -118,   -17,
    -118,   115,    91,   111,   135,   118,   119,    51,  -118,  -118,
    -118,  -118,  -118,   109,    -4,  -118,     1,   120,    64,   108,
    -118,  -118,  -118,  -118,   140,    75,  -118,   128,   112,    78,
      53,  -118,  -118,  -118,  -118,  -118,  -118,    78,    78,    78,
      78,    78,    78,    78,   125,   113,  -118,   126,  -118,  -118,
     116,   127,   129,  -118,    -4,    -4,    12,  -118,  -118,    46,
      46,    76,   130,   121,   131,   147,  -118,    26,   124,   132,
     155,  -118,  -118,   138,   136,    92,  -118,    76,    76,   141,
      62,     8,   159,  -118,  -118,  -118
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,    30,     0,     0,     9,     0,     0,
      14,    15,    16,    17,     0,     0,     5,    10,    12,    13,
       9,    38,     0,     0,     0,     4,     6,     8,     0,     7,
       0,     0,     0,     0,     0,     0,    38,    28,    31,    32,
      33,    34,    55,    35,    70,     3,    21,     0,     0,     0,
       0,     0,     0,     0,    27,    29,    36,    37,    56,    72,
      69,     0,     0,    18,     0,     0,     0,     0,    47,    46,
      50,    49,    48,    62,    40,    43,     0,     0,     0,     0,
      25,    26,    24,    23,     0,     0,    11,     0,     0,     0,
       0,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,    20,    19,
       0,     0,     0,    51,    41,    42,    61,    44,    45,    60,
      59,    38,     0,     0,     0,     0,    52,     0,     0,     0,
       0,    54,    58,     0,     0,     0,    53,    38,    38,     0,
       0,    72,     0,    57,    71,    22
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -118,  -118,  -118,  -118,   148,    -8,  -118,    35,    84,  -118,
    -118,  -118,  -118,  -118,  -117,    -2,   -34,  -118,   -50,   -13,
     -77,  -118,  -118,  -118,   133,    38,  -118,  -118,   134
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     8,    15,    16,    28,    17,    64,    18,
      19,    61,    84,    22,    35,    36,    37,    38,    73,    74,
      75,    39,    40,    41,    42,    76,    99,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,    55,    56,    78,   127,    20,    25,    26,     4,    59,
     102,   103,   112,    27,   144,   100,   101,    90,    20,     4,
     140,    26,     9,   117,   118,     4,     6,    27,     9,    97,
      98,   104,   132,     4,     3,    57,    10,    11,    12,    13,
      14,     7,    10,    11,    12,    13,    14,    54,    21,   116,
      23,     4,    46,    57,    57,   102,   103,    57,    30,    31,
      32,   133,    33,    45,    34,    24,     4,    47,   143,    89,
      97,    98,   106,    30,    31,    32,    48,    33,    49,    34,
      67,    97,    98,   113,   114,   115,    32,     4,    68,    69,
      70,    71,    72,    55,    30,    31,    32,    50,    33,    51,
      34,     4,    52,    53,   141,    62,    55,    67,    30,    31,
      32,    65,    33,    63,    34,    68,    69,    70,    71,    72,
      91,    92,    93,    94,    95,    96,    97,    98,    80,    66,
      81,    82,    83,    77,    10,    11,    12,    13,    79,    57,
     119,   120,    85,    86,    87,    88,   105,   107,   108,   110,
     111,   121,   122,   123,   124,   131,   128,   125,   135,   126,
     129,   130,   134,   136,   137,   142,   138,   145,    29,   109,
     139,     0,     0,     0,    58,     0,     0,    60
};

static const yytype_int16 yycheck[] =
{
       2,    35,    36,    53,   121,     7,     6,    15,    25,    43,
       9,    10,    89,    15,     6,    19,    20,    67,    20,    25,
     137,    29,    28,   100,   101,    25,    38,    29,    28,    17,
      18,    30,     6,    25,     0,    37,    42,    43,    44,    45,
      46,     4,    42,    43,    44,    45,    46,     6,     3,    99,
      26,    25,    38,    55,    56,     9,    10,    59,    32,    33,
      34,    35,    36,     6,    38,    26,    25,    38,     6,    18,
      17,    18,     8,    32,    33,    34,    26,    36,    29,    38,
      29,    17,    18,    30,    97,    98,    34,    25,    37,    38,
      39,    40,    41,   127,    32,    33,    34,    29,    36,    29,
      38,    25,    29,    22,   138,    22,   140,    29,    32,    33,
      34,    40,    36,    38,    38,    37,    38,    39,    40,    41,
      11,    12,    13,    14,    15,    16,    17,    18,    37,    40,
      39,    40,    41,    38,    42,    43,    44,    45,    23,   141,
     102,   103,    31,     8,    26,    26,    26,    39,     8,    21,
      38,    26,    39,    27,    38,     8,    26,    30,    26,    30,
      39,    30,    38,     8,    26,    24,    30,     8,    20,    85,
     135,    -1,    -1,    -1,    41,    -1,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,    25,    62,    38,     4,    50,    28,
      42,    43,    44,    45,    46,    51,    52,    54,    56,    57,
      62,     3,    60,    26,    26,     6,    52,    62,    53,    51,
      32,    33,    34,    36,    38,    61,    62,    63,    64,    68,
      69,    70,    71,    74,    75,     6,    38,    38,    26,    29,
      29,    29,    29,    22,     6,    63,    63,    62,    71,    63,
      75,    58,    22,    38,    55,    40,    40,    29,    37,    38,
      39,    40,    41,    65,    66,    67,    72,    38,    65,    23,
      37,    39,    40,    41,    59,    31,     8,    26,    26,    18,
      65,    11,    12,    13,    14,    15,    16,    17,    18,    73,
      19,    20,     9,    10,    30,    26,     8,    39,     8,    55,
      21,    38,    67,    30,    66,    66,    65,    67,    67,    72,
      72,    26,    39,    27,    38,    30,    30,    61,    26,    39,
      30,     8,     6,    35,    38,    26,     8,    26,    30,    54,
      61,    63,    24,     6,     6,     8
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    49,    48,    50,    51,    51,    51,    51,    51,
      53,    52,    52,    52,    54,    54,    54,    54,    55,    55,
      56,    58,    57,    59,    59,    59,    59,    60,    61,    61,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      65,    65,    65,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    68,    69,    70,    70,    71,    71,    72,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    75
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     6,     3,     1,     2,     2,     2,     0,
       0,     5,     1,     1,     1,     1,     1,     1,     1,     3,
       6,     0,    12,     1,     1,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     4,
       1,     3,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     3,     4,     8,     7,     1,     2,    10,     7,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,    10,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* $@1: %empty  */
#line 57 "syntax.y"
         {
        // Initialize the symbol table at the start

        fflush(stdout);

        symbol_table = createSymbolTable();
}
#line 1262 "syntax.tab.c"
    break;

  case 3: /* program: $@1 COMMENT mc_ident DATA_SECTION CODE_SECTION mc_endp  */
#line 63 "syntax.y"
                                                     {
            printf("PROGRAM COMPILATION STARTED %s\n", (yyvsp[-3].str_val));
        printf("PROGRAM COMPILATION FINISHED\n");
        fflush(stdout);
        printSymbolTable(symbol_table);
        printf("Syntaxe correcte\n"); 
        printf("PROGRAM COMPILATION FINISHED\n");
        fflush(stdout);
        YYACCEPT;
}
#line 1277 "syntax.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 80 "syntax.y"
              {
        currentType = (yyvsp[0].type_val);
        printf("Type set to: %d\n", currentType);
    }
#line 1286 "syntax.tab.c"
    break;

  case 14: /* VAR_TYPE: mc_integ  */
#line 89 "syntax.y"
                   { (yyval.type_val) = TYPE_INTEGER; }
#line 1292 "syntax.tab.c"
    break;

  case 15: /* VAR_TYPE: mc_float  */
#line 90 "syntax.y"
                   { (yyval.type_val) = TYPE_FLOAT; }
#line 1298 "syntax.tab.c"
    break;

  case 16: /* VAR_TYPE: mc_char  */
#line 91 "syntax.y"
                   { (yyval.type_val) = TYPE_CHAR; }
#line 1304 "syntax.tab.c"
    break;

  case 17: /* VAR_TYPE: mc_string  */
#line 92 "syntax.y"
                    { (yyval.type_val) = TYPE_STRING; }
#line 1310 "syntax.tab.c"
    break;

  case 18: /* LISTE_VAR: mc_ident  */
#line 95 "syntax.y"
                    {
        printf("Processing single var: '%s'\n", (yyvsp[0].str_val));
        int result = insertSymbol(symbol_table, (yyvsp[0].str_val), currentType, line, column);
        
        if (result) {
            // Initialize with default value
            SymbolEntry* entry = lookupSymbol(symbol_table, (yyvsp[0].str_val));
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
        (yyval.str_val) = (yyvsp[0].str_val);
    }
#line 1341 "syntax.tab.c"
    break;

  case 19: /* LISTE_VAR: mc_ident mc_separateur LISTE_VAR  */
#line 121 "syntax.y"
                                       {
        printf("Processing list var: '%s' (before another var)\n", (yyvsp[-2].str_val));
        int result = insertSymbol(symbol_table, (yyvsp[-2].str_val), currentType, line, column);
        
        if (result) {
            // Initialize with default value
            SymbolEntry* entry = lookupSymbol(symbol_table, (yyvsp[-2].str_val));
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
        (yyval.str_val) = (yyvsp[-2].str_val);
    }
#line 1372 "syntax.tab.c"
    break;

  case 20: /* DEC_CONST: mc_const mc_deuxp mc_ident mc_affectation VALEURS mc_pvg  */
#line 149 "syntax.y"
                                                                    {
        // Insert constant with value
        printf("Inserting constant: %s with value %d\n", (yyvsp[-3].str_val), (yyvsp[-1].int_val));
        int result = insertSymbol(symbol_table, (yyvsp[-3].str_val), TYPE_CONST, line, column);
        
        if (!result) {
            fprintf(stderr, "Failed to insert constant '%s'\n", (yyvsp[-3].str_val));
        } else {
            // Get the entry and set its value
            SymbolEntry* entry = lookupSymbol(symbol_table, (yyvsp[-3].str_val));
            if (entry) {
                entry->isInitialized = 1;
                entry->isConstant = 1;  // Mark as constant
                
                // Store value based on constant type
                switch ((yyvsp[-1].int_val)) {
                    case TYPE_INTEGER:
                        entry->value.intValue = (yyvsp[-1].int_val);
                        break;
                    case TYPE_FLOAT:
                        entry->value.floatValue = (float)(yyvsp[-1].int_val);
                        break;
                    case TYPE_CHAR:
                        entry->value.charValue = (char)(yyvsp[-1].int_val);
                        break;
                    default:
                        // Handle string or other types
                        break;
                }
                
                printf("Constant %s initialized with value %d\n", (yyvsp[-3].str_val), (yyvsp[-1].int_val));
            }
        }
    }
#line 1411 "syntax.tab.c"
    break;

  case 21: /* $@3: %empty  */
#line 185 "syntax.y"
                                        {
        // Capture vector name
        printf("Processing vector declaration: %s\n", (yyvsp[0].str_val));
    }
#line 1420 "syntax.tab.c"
    break;

  case 22: /* DEC_VECTOR: mc_vector mc_deuxp mc_ident $@3 mc_crocheto mc_cst mc_vg mc_cst mc_deuxp VAR_TYPE mc_crochetf mc_pvg  */
#line 188 "syntax.y"
                                                                           {
        // Extract dimensions and type - note the updated position numbers
        printf("Vector: %s, Dimensions: [%s, %s], Type: %d\n", (yyvsp[-9].str_val), (yyvsp[-6].str_val), (yyvsp[-4].str_val), (yyvsp[-2].type_val));
        
        // Insert vector into symbol table
        if (!insertSymbol(symbol_table, (yyvsp[-9].str_val), TYPE_VECTOR, line, column)) {
            fprintf(stderr, "Failed to insert vector %s into symbol table\n", (yyvsp[-9].str_val));
        } else {
            // Get the entry we just inserted
            SymbolEntry* entry = lookupSymbol(symbol_table, (yyvsp[-9].str_val));
            if (entry) {
                // Set vector dimensions and element type - update position numbers
                entry->value.vectorInfo.rows = atoi((yyvsp[-6].str_val));
                entry->value.vectorInfo.cols = atoi((yyvsp[-4].str_val));
                entry->value.vectorInfo.elementType = (yyvsp[-2].type_val);
                printf("Vector %s added with dimensions [%d, %d] and type %d\n", 
                       (yyvsp[-9].str_val), entry->value.vectorInfo.rows, 
                       entry->value.vectorInfo.cols, 
                       entry->value.vectorInfo.elementType);
            }
        }
    }
#line 1447 "syntax.tab.c"
    break;

  case 23: /* VALEURS: mc_charactere  */
#line 211 "syntax.y"
                       { (yyval.int_val) = (yyvsp[0].char_val); }
#line 1453 "syntax.tab.c"
    break;

  case 24: /* VALEURS: mc_chaine  */
#line 212 "syntax.y"
                   { (yyval.int_val) = 0; }
#line 1459 "syntax.tab.c"
    break;

  case 25: /* VALEURS: INT_CONST  */
#line 213 "syntax.y"
                   { (yyval.int_val) = (yyvsp[0].int_val); }
#line 1465 "syntax.tab.c"
    break;

  case 26: /* VALEURS: mc_cst  */
#line 214 "syntax.y"
                { (yyval.int_val) = atoi((yyvsp[0].str_val)); }
#line 1471 "syntax.tab.c"
    break;

  case 39: /* INSTRUCTION_AFFECTATION: mc_ident mc_affectation EXPRESSION mc_pvg  */
#line 234 "syntax.y"
                                                                   {
    // Look up the variable in the symbol table
    // printf("Processing assignment: %s = expression\n", $1);
    SymbolEntry* entry = lookupSymbol(symbol_table, (yyvsp[-3].str_val));
    if (!entry) {
        fprintf(stderr, " ----------------- ---- Semantic error at line %d: Undeclared variable '%s'\n", line, (yyvsp[-3].str_val));
    } else {
        // Update the variable's value based on its type
        entry->isInitialized = 1;
        entry->isUsed = 1;
        
        switch (entry->type) {
            case TYPE_INTEGER:
                entry->value.intValue = (yyvsp[-1].int_val);
                printf("Updated variable '%s' with integer value %d\n", (yyvsp[-3].str_val), (yyvsp[-1].int_val));
                break;
            case TYPE_FLOAT:
                entry->value.floatValue = (float)(yyvsp[-1].int_val);
                printf("Updated variable '%s' with float value %f\n", (yyvsp[-3].str_val), (float)(yyvsp[-1].int_val));
                break;
            case TYPE_CHAR:
                entry->value.charValue = (char)(yyvsp[-1].int_val);
                printf("Updated variable '%s' with char value %c\n", (yyvsp[-3].str_val), (char)(yyvsp[-1].int_val));
                break;
            case TYPE_CONST:
                fprintf(stderr, "Error: Cannot assign to constant '%s' at line %d\n", (yyvsp[-3].str_val), line);
                break;
            default:
                fprintf(stderr, "Warning: Unsupported type for assignment to '%s' at line %d\n", (yyvsp[-3].str_val), line);
                break;
        }
    }
}
#line 1509 "syntax.tab.c"
    break;

  case 41: /* EXPRESSION: EXPRESSION mc_plus TERME  */
#line 270 "syntax.y"
                                     {
              (yyval.int_val) = (yyvsp[-2].int_val) + (yyvsp[0].int_val);
              printf("Addition: %d + %d = %d\n", (yyvsp[-2].int_val), (yyvsp[0].int_val), (yyval.int_val));
          }
#line 1518 "syntax.tab.c"
    break;

  case 42: /* EXPRESSION: EXPRESSION mc_moins TERME  */
#line 274 "syntax.y"
                                      {
              (yyval.int_val) = (yyvsp[-2].int_val) - (yyvsp[0].int_val);
              printf("Subtraction: %d - %d = %d\n", (yyvsp[-2].int_val), (yyvsp[0].int_val), (yyval.int_val));
          }
#line 1527 "syntax.tab.c"
    break;

  case 44: /* TERME: TERME mc_mult FACTEUR  */
#line 281 "syntax.y"
                             {
         (yyval.int_val) = (yyvsp[-2].int_val) * (yyvsp[0].int_val);
         printf("Multiplication: %d * %d = %d\n", (yyvsp[-2].int_val), (yyvsp[0].int_val), (yyval.int_val));
     }
#line 1536 "syntax.tab.c"
    break;

  case 45: /* TERME: TERME mc_div FACTEUR  */
#line 285 "syntax.y"
                            {
         if ((yyvsp[0].int_val) == 0) {
             fprintf(stderr, "------------------ Semantic error at line %d: Division by zero -----------\n", line);
             (yyval.int_val) = 0;
         } else {
             (yyval.int_val) = (yyvsp[-2].int_val) / (yyvsp[0].int_val);
             printf("Division: %d / %d = %d\n", (yyvsp[-2].int_val), (yyvsp[0].int_val), (yyval.int_val));
         }
     }
#line 1550 "syntax.tab.c"
    break;

  case 46: /* FACTEUR: mc_ident  */
#line 296 "syntax.y"
                  { 
        SymbolEntry* entry = lookupSymbol(symbol_table, (yyvsp[0].str_val));
        if (!entry) {
            fprintf(stderr, "Error: Undeclared identifier '%s' at line %d\n", (yyvsp[0].str_val), line);
            (yyval.int_val) = 0; // Default value
        } else {
            entry->isUsed = 1;
            
            // Get value based on type
            switch (entry->type) {
                case TYPE_INTEGER:
                    (yyval.int_val) = entry->value.intValue;
                    break;
                case TYPE_FLOAT:
                    (yyval.int_val) = (int)entry->value.floatValue;
                    break;
                case TYPE_CHAR:
                    (yyval.int_val) = (int)entry->value.charValue;
                    break;
                case TYPE_CONST:
                    (yyval.int_val) = entry->value.intValue; // Assuming integer constants
                    break;
                default:
                    (yyval.int_val) = 0;
                    break;
            }
            printf("Retrieved value %d from variable '%s'\n", (yyval.int_val), (yyvsp[0].str_val));
        }
    }
#line 1584 "syntax.tab.c"
    break;

  case 47: /* FACTEUR: INT_CONST  */
#line 325 "syntax.y"
                { 
        (yyval.int_val) = (yyvsp[0].int_val); // Already an int
    }
#line 1592 "syntax.tab.c"
    break;

  case 48: /* FACTEUR: mc_charactere  */
#line 328 "syntax.y"
                    { 
        (yyval.int_val) = (int)(yyvsp[0].char_val); // Convert char to int
    }
#line 1600 "syntax.tab.c"
    break;

  case 49: /* FACTEUR: mc_chaine  */
#line 331 "syntax.y"
                { 
        (yyval.int_val) = 0; // Default value for string
    }
#line 1608 "syntax.tab.c"
    break;

  case 50: /* FACTEUR: mc_cst  */
#line 334 "syntax.y"
             { 
        (yyval.int_val) = atoi((yyvsp[0].str_val)); // Convert string to int
    }
#line 1616 "syntax.tab.c"
    break;

  case 51: /* FACTEUR: mc_paro EXPRESSION mc_parf  */
#line 337 "syntax.y"
                                 { 
        (yyval.int_val) = (yyvsp[-1].int_val); // Use expression value
    }
#line 1624 "syntax.tab.c"
    break;

  case 52: /* FACTEUR: mc_paro mc_moins FACTEUR mc_parf  */
#line 340 "syntax.y"
                                       {  // Handle (-n) negative expressions
        (yyval.int_val) = -(yyvsp[-1].int_val);
        printf("Handling negative factor: (-%d) = %d\n", (yyvsp[-1].int_val), (yyval.int_val));
    }
#line 1633 "syntax.tab.c"
    break;


#line 1637 "syntax.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 384 "syntax.y"

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
