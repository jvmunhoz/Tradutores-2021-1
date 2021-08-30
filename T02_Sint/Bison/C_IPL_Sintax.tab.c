/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "C_IPL_Sintax.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "symbol_table.h"
    extern int yylex();
    extern int yylex_destroy();
    extern int yyterminate();
    extern void yyerror(const char* a);
    extern int yylineno;
    extern int column;
    extern int errors;
    extern FILE *yyin;

#line 86 "C_IPL_Sintax.tab.c"

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

#include "C_IPL_Sintax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LIST_TYPE = 3,                  /* LIST_TYPE  */
  YYSYMBOL_TYPE = 4,                       /* TYPE  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_NIL = 7,                        /* NIL  */
  YYSYMBOL_MINUS = 8,                      /* MINUS  */
  YYSYMBOL_SUMOP = 9,                      /* SUMOP  */
  YYSYMBOL_MULOP = 10,                     /* MULOP  */
  YYSYMBOL_EXCLAM = 11,                    /* EXCLAM  */
  YYSYMBOL_LOGOP = 12,                     /* LOGOP  */
  YYSYMBOL_RELOP = 13,                     /* RELOP  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_KW_IF = 15,                     /* KW_IF  */
  YYSYMBOL_KW_ELSE = 16,                   /* KW_ELSE  */
  YYSYMBOL_THEN = 17,                      /* THEN  */
  YYSYMBOL_KW_FOR = 18,                    /* KW_FOR  */
  YYSYMBOL_KW_RETURN = 19,                 /* KW_RETURN  */
  YYSYMBOL_READ = 20,                      /* READ  */
  YYSYMBOL_WRITE = 21,                     /* WRITE  */
  YYSYMBOL_STRING = 22,                    /* STRING  */
  YYSYMBOL_BIN_LISTOP = 23,                /* BIN_LISTOP  */
  YYSYMBOL_UN_LISTOP = 24,                 /* UN_LISTOP  */
  YYSYMBOL_ID = 25,                        /* ID  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* '('  */
  YYSYMBOL_28_ = 28,                       /* ')'  */
  YYSYMBOL_29_ = 29,                       /* '{'  */
  YYSYMBOL_30_ = 30,                       /* '}'  */
  YYSYMBOL_31_ = 31,                       /* ','  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_declList = 34,                  /* declList  */
  YYSYMBOL_decl = 35,                      /* decl  */
  YYSYMBOL_varDecl = 36,                   /* varDecl  */
  YYSYMBOL_typeList = 37,                  /* typeList  */
  YYSYMBOL_funDecl = 38,                   /* funDecl  */
  YYSYMBOL_params = 39,                    /* params  */
  YYSYMBOL_paramList = 40,                 /* paramList  */
  YYSYMBOL_paramTypeList = 41,             /* paramTypeList  */
  YYSYMBOL_stmt = 42,                      /* stmt  */
  YYSYMBOL_expStmt = 43,                   /* expStmt  */
  YYSYMBOL_compoundStmt = 44,              /* compoundStmt  */
  YYSYMBOL_localDecls = 45,                /* localDecls  */
  YYSYMBOL_stmtList = 46,                  /* stmtList  */
  YYSYMBOL_ifStmt = 47,                    /* ifStmt  */
  YYSYMBOL_forStmt = 48,                   /* forStmt  */
  YYSYMBOL_returnStmt = 49,                /* returnStmt  */
  YYSYMBOL_readFunc = 50,                  /* readFunc  */
  YYSYMBOL_writeFunc = 51,                 /* writeFunc  */
  YYSYMBOL_exp = 52,                       /* exp  */
  YYSYMBOL_logExp = 53,                    /* logExp  */
  YYSYMBOL_listExp = 54,                   /* listExp  */
  YYSYMBOL_relExp = 55,                    /* relExp  */
  YYSYMBOL_sumExp = 56,                    /* sumExp  */
  YYSYMBOL_mulExp = 57,                    /* mulExp  */
  YYSYMBOL_unaryListExp = 58,              /* unaryListExp  */
  YYSYMBOL_unaryListOp = 59,               /* unaryListOp  */
  YYSYMBOL_unaryExp = 60,                  /* unaryExp  */
  YYSYMBOL_factor = 61,                    /* factor  */
  YYSYMBOL_call = 62,                      /* call  */
  YYSYMBOL_args = 63,                      /* args  */
  YYSYMBOL_argList = 64,                   /* argList  */
  YYSYMBOL_constant = 65                   /* constant  */
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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if 1

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
#endif /* 1 */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2332

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  234

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
      27,    28,     2,     2,    31,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    55,    55,    60,    60,    64,    68,    68,
      72,    76,    76,    80,    80,    84,    88,    88,    88,    88,
      88,    88,    88,    92,    92,    96,   100,   100,   104,   104,
     108,   108,   112,   116,   116,   120,   124,   124,   128,   128,
     132,   132,   136,   136,   140,   140,   144,   144,   148,   148,
     152,   152,   156,   156,   160,   160,   164,   164,   164,   164,
     168,   172,   172,   176,   176,   180,   180,   180
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "LIST_TYPE", "TYPE",
  "INT", "FLOAT", "NIL", "MINUS", "SUMOP", "MULOP", "EXCLAM", "LOGOP",
  "RELOP", "ASSIGN", "KW_IF", "KW_ELSE", "THEN", "KW_FOR", "KW_RETURN",
  "READ", "WRITE", "STRING", "BIN_LISTOP", "UN_LISTOP", "ID", "';'", "'('",
  "')'", "'{'", "'}'", "','", "$accept", "program", "declList", "decl",
  "varDecl", "typeList", "funDecl", "params", "paramList", "paramTypeList",
  "stmt", "expStmt", "compoundStmt", "localDecls", "stmtList", "ifStmt",
  "forStmt", "returnStmt", "readFunc", "writeFunc", "exp", "logExp",
  "listExp", "relExp", "sumExp", "mulExp", "unaryListExp", "unaryListOp",
  "unaryExp", "factor", "call", "args", "argList", "constant", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    59,    40,    41,   123,
     125,    44
};
#endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,    28,    34,    66,   335,   448,   455,    51,   505,    79,
    -164,   513,   196,   749,     5,    86,    29,   120,   106,   189,
      87,    11,   708,   777,   141,   764,   797,   151,   643,   155,
    2190,  2205,  2210,    80,    22,   159,   167,    57,   169,   176,
     297,  2178,  1345,    12,   834,  1371,  1397,  1423,  1449,  1475,
    1501,  1527,  1553,   179,    65,    77,   268,  2298,  2217,  2225,
     336,  2232,  2237,  2244,  2252,  2184,  2259,    88,   208,  1579,
     192,   162,   245,   208,    47,   199,  1605,   290,   290,   290,
     290,   290,  2264,    -6,   214,  1631,   221,   226,    32,   220,
      90,   230,   234,  2271,   198,   680,  2306,  2279,  2286,  1865,
     208,  1657,  1683,  1709,  2291,   429,   851,   238,   161,  1890,
      12,  1735,   240,  1890,  1761,   708,   825,   571,  2044,  2052,
     350,  2032,    12,    39,    -2,    33,   676,  2061,  2069,   416,
    2078,  2086,  2095,  2103,  2024,   533,   542,   604,  2013,   502,
      12,   434,   535,   232,   674,  1911,   738,  1917,  1923,  1940,
    1946,    88,   429,   244,   246,   402,   247,   249,   877,   708,
     903,   929,   955,   981,  1007,  1033,  1059,   253,   764,  2112,
      12,    47,   254,    88,    88,    88,    88,  2120,  1952,    47,
     258,   429,   429,   429,   429,  1969,   105,   475,    88,   208,
    1085,   261,   274,   326,   764,  1111,  1787,   265,   272,  2129,
     563,   783,  2137,  2146,   278,  1975,  2158,   359,  1981,  1998,
     154,   283,  1137,   298,   299,   160,  1813,  1839,  2154,  2004,
    1865,   208,  1163,  1189,  1215,  1241,  1267,   303,  1865,    12,
    1293,   317,  1865,  1319
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,   342,   126,   164,  -164,  -164,   328,  -164,
     -97,   -96,   -20,  -111,  -163,   -75,   -74,   -65,   -58,   -49,
     -30,   585,   467,   569,   452,   427,   293,   309,   218,   -32,
      55,   -70,  -164,   137
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    26,    27,     8,    16,    17,    18,
      45,    46,    47,    25,    28,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    91,    92,    64
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    66,   106,   160,   168,   196,   151,    70,     1,     2,
     -41,   131,   111,    75,     1,     2,   114,   117,   118,   119,
     120,   173,    99,    34,   162,   163,   -41,   -53,   -53,   -53,
     -53,   216,     9,   -12,   164,   131,    40,   121,    84,   122,
     131,   165,   148,    89,   151,   -43,   174,   -53,   194,   -53,
     166,   151,   135,   136,   137,   138,   -43,    20,    34,    -9,
     103,   -43,    30,    31,    32,    33,    10,   -39,    34,   167,
     107,    40,   139,   148,   140,   -62,    12,    77,   131,   161,
     112,    40,    41,    69,    43,    30,    31,    32,   169,   -41,
     131,   -39,   172,   117,   118,   119,   120,   131,   132,    34,
      78,   198,   152,   -41,    -8,    65,   178,    43,   131,   204,
     180,    19,    40,   134,   148,   122,    22,   -40,   -64,   131,
     148,   -64,   132,   226,   160,   191,     6,   132,   173,   149,
       6,   230,   160,   -40,   -14,   233,   160,    21,   131,   148,
     197,   131,   131,   131,   131,   162,   163,   148,   -11,   148,
     148,   148,   148,   162,   163,   164,   131,   162,   163,   211,
     149,   131,   165,   164,     7,   132,   151,   164,     7,   -13,
     165,   166,   151,   152,   165,   132,    29,   132,    15,   166,
     133,   116,   220,   166,   132,    15,    67,    86,   224,   -63,
     167,   227,   -63,   149,    68,   132,    71,   131,   167,   231,
     161,   149,   167,    72,   133,    76,   132,   149,   161,   133,
     -40,   150,   161,    30,    31,    32,    33,   -15,    85,    34,
     -15,    78,    13,    14,   -40,   132,   149,    93,   132,   132,
     132,   132,    40,    41,   149,    43,   149,   149,   149,   149,
     100,   183,   150,   132,   -45,   -45,   -38,   133,   132,   101,
     117,   118,   119,   120,   102,   -45,    34,   133,   104,   133,
     -45,   130,   -61,   -45,   110,   105,   133,    87,   113,    40,
     134,   188,   122,   189,   192,   150,   193,   133,    82,   195,
     -43,    79,   199,   150,   132,   130,   205,   212,   133,   150,
     130,   -43,   147,   -38,   -43,    30,    31,    32,    33,   213,
     218,    34,   -52,   -52,   -52,   -52,   219,   133,   150,   221,
     133,   133,   133,   133,    40,    65,   150,    43,   150,   150,
     150,   150,   -52,   147,   -52,   133,   222,   223,   130,   229,
     133,   117,   118,   119,   120,    -2,   128,    34,     1,     2,
     130,    30,    31,    32,    33,   232,    11,   177,   214,    24,
      40,   134,   129,   122,     0,   117,   118,   119,   130,     0,
     128,    65,     0,    43,   185,   128,   133,   145,   183,   130,
     147,   -44,   -44,     0,    98,   134,   129,   122,     0,     0,
       0,   129,   -44,   146,     0,     0,     0,   -44,   130,   147,
     -44,   130,   130,   130,   130,     0,     0,   147,   145,   147,
     147,   147,   147,   128,     0,     0,   130,    30,    31,    32,
      33,   130,     0,    34,   146,   128,     0,     0,     0,   129,
       0,   117,   118,   119,   120,     0,    40,    41,   190,    43,
       0,   129,     0,   128,   135,   136,   137,   138,     0,     0,
      34,   134,     0,   122,   128,   145,   -41,   130,    -4,   129,
       0,    -4,    -4,    40,   139,    -5,   140,   181,    -5,    -5,
     129,   146,   -41,   128,   145,   -41,   128,   128,   128,   203,
     127,     0,   145,     0,   145,   145,   145,   209,     0,   129,
     146,   128,   129,   129,   129,   129,   128,   -40,   146,     0,
     146,   146,   146,   146,   127,   126,     0,   129,   181,   127,
       0,   144,   129,   -40,     0,    -6,   -40,    97,    -6,    -6,
     124,   -59,   -59,    -3,   -59,   -59,    -3,    -3,     0,   126,
       0,     0,   128,     0,   126,   -59,   143,     0,     0,   179,
     -59,    96,   144,   -59,   124,     0,     0,   127,   129,   124,
       0,   141,   -65,   -65,    94,   -65,   -65,   -43,   182,   127,
       0,   -66,   -66,     0,   -66,   -66,   -65,   143,   -43,     0,
       0,   -65,   126,   -43,   -65,   -66,   -43,   127,     0,     0,
     -66,     0,   141,   -66,   126,   -42,   174,   124,   127,   144,
     -65,   -65,     0,   -65,   -65,     0,   -42,     0,     0,   124,
       0,   -42,   126,     0,   -65,     0,     0,   127,   144,   -65,
     127,   127,   202,   126,   143,     0,   144,   124,   144,   144,
     208,     0,   125,   -67,   -67,   127,   -67,   -67,   186,   187,
     127,     0,   126,   143,     0,   126,   201,   -67,   123,     0,
       0,   143,   -67,   143,   207,   -67,   125,   124,   141,     0,
     126,   125,     0,   142,     0,   126,   141,    95,    30,    31,
      32,    33,    83,     0,    34,   124,   127,    88,    35,    90,
     124,    36,    37,    38,    39,     0,     0,    40,    41,    42,
      43,     0,   115,    44,   142,     0,     0,     0,     0,   125,
       0,   126,     0,   -47,   184,   175,   -47,   -47,   -45,   -45,
     108,   125,   -42,    79,     0,   123,   124,   -47,     0,   -45,
       0,     0,   -47,   -42,   -45,   -47,   -42,   123,     0,   125,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     125,   142,     0,   -27,     0,   123,   -27,   -27,   -27,   -27,
       0,     0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   125,
     142,     0,   200,   135,   136,   137,   138,     0,   142,    -7,
     206,     0,    -7,    -7,     0,   123,    90,   125,     0,     0,
       0,     0,   125,   139,    90,   140,     0,     1,     2,   -29,
     -29,   -29,   -29,   210,     0,   -29,     0,   -10,   215,   -29,
     -10,   -10,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,
     -29,   -29,   175,   -29,   -29,   -44,   -44,     0,   125,     0,
     -26,   -26,   -26,   -26,   -26,   -26,   -44,     0,   -26,     0,
       0,   -44,   -26,     0,   123,   -26,   -26,   -26,   -26,     0,
       0,   -26,   -26,   -26,   -26,     0,   -26,   -26,    -7,    -7,
      -7,    -7,    -7,    -7,   -25,     0,    -7,   -25,   -25,     0,
      -7,     0,     0,    -7,    -7,    -7,    -7,     0,     0,    -7,
      -7,    -7,    -7,     0,    -7,    -7,   -30,   -30,   -30,   -30,
       0,     0,   -30,     0,     0,     0,   -30,   109,     0,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,     0,
     -30,   -30,   -24,   -24,   -24,   -24,     0,     0,   -24,     0,
       0,     0,   -24,   -24,     0,   -24,   -24,   -24,   -24,     0,
       0,   -24,   -24,   -24,   -24,     0,   -24,   -24,   -16,   -16,
     -16,   -16,     0,     0,   -16,     0,     0,     0,   -16,   -16,
       0,   -16,   -16,   -16,   -16,     0,     0,   -16,   -16,   -16,
     -16,     0,   -16,   -16,   -17,   -17,   -17,   -17,     0,     0,
     -17,     0,     0,     0,   -17,   -17,     0,   -17,   -17,   -17,
     -17,     0,     0,   -17,   -17,   -17,   -17,     0,   -17,   -17,
     -18,   -18,   -18,   -18,     0,     0,   -18,     0,     0,     0,
     -18,   -18,     0,   -18,   -18,   -18,   -18,     0,     0,   -18,
     -18,   -18,   -18,     0,   -18,   -18,   -19,   -19,   -19,   -19,
       0,     0,   -19,     0,     0,     0,   -19,   -19,     0,   -19,
     -19,   -19,   -19,     0,     0,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,
       0,     0,   -20,   -20,     0,   -20,   -20,   -20,   -20,     0,
       0,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -21,   -21,
     -21,   -21,     0,     0,   -21,     0,     0,     0,   -21,   -21,
       0,   -21,   -21,   -21,   -21,     0,     0,   -21,   -21,   -21,
     -21,     0,   -21,   -21,   -22,   -22,   -22,   -22,     0,     0,
     -22,     0,     0,     0,   -22,   -22,     0,   -22,   -22,   -22,
     -22,     0,     0,   -22,   -22,   -22,   -22,     0,   -22,   -22,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,     0,     0,
     -33,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -33,     0,   -33,   -33,   -23,   -23,   -23,   -23,
       0,     0,   -23,     0,     0,     0,   -23,   -23,     0,   -23,
     -23,   -23,   -23,     0,     0,   -23,   -23,   -23,   -23,     0,
     -23,   -23,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
       0,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -35,   -35,
     -35,   -35,     0,     0,   -35,     0,     0,     0,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,     0,   -35,   -35,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,     0,     0,   -37,   -37,     0,   -37,   -37,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -37,     0,   -37,   -37,
     -36,   -36,   -36,   -36,     0,     0,   -36,     0,     0,     0,
     -36,   -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,     0,   -36,   -36,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,     0,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,     0,     0,   -25,   -25,   -25,   -25,     0,
     -25,   -25,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,
       0,     0,   -30,   228,     0,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -30,   -30,   -30,     0,   -30,   -30,   -31,   -31,
     -31,   -31,     0,     0,   -31,     0,     0,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,
     -31,     0,   -31,   -31,   -32,   -32,   -32,   -32,     0,     0,
     -32,     0,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -24,   -24,   -24,   -24,     0,     0,   -24,     0,     0,     0,
     -24,     0,     0,   -24,   -24,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -24,     0,   -24,   -24,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,     0,     0,   -28,     0,     0,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,     0,
     -28,   -28,   -16,   -16,   -16,   -16,     0,     0,   -16,     0,
       0,     0,   -16,     0,     0,   -16,   -16,   -16,   -16,     0,
       0,   -16,   -16,   -16,   -16,     0,   -16,   -16,   -17,   -17,
     -17,   -17,     0,     0,   -17,     0,     0,     0,   -17,     0,
       0,   -17,   -17,   -17,   -17,     0,     0,   -17,   -17,   -17,
     -17,     0,   -17,   -17,   -18,   -18,   -18,   -18,     0,     0,
     -18,     0,     0,     0,   -18,     0,     0,   -18,   -18,   -18,
     -18,     0,     0,   -18,   -18,   -18,   -18,     0,   -18,   -18,
     -19,   -19,   -19,   -19,     0,     0,   -19,     0,     0,     0,
     -19,     0,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -20,   -20,   -20,   -20,
       0,     0,   -20,     0,     0,     0,   -20,     0,     0,   -20,
     -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -20,     0,
     -20,   -20,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,
       0,     0,   -21,     0,     0,   -21,   -21,   -21,   -21,     0,
       0,   -21,   -21,   -21,   -21,     0,   -21,   -21,   -22,   -22,
     -22,   -22,     0,     0,   -22,     0,     0,     0,   -22,     0,
       0,   -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,
     -22,     0,   -22,   -22,   -33,   -33,   -33,   -33,     0,     0,
     -33,     0,     0,     0,   -33,     0,     0,   -33,   -33,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -33,     0,   -33,   -33,
     -23,   -23,   -23,   -23,     0,     0,   -23,     0,     0,     0,
     -23,     0,     0,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -23,     0,   -23,   -23,   -34,   -34,   -34,   -34,
       0,     0,   -34,     0,     0,     0,   -34,     0,     0,   -34,
     -34,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,     0,
     -34,   -34,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,
       0,     0,   -35,     0,     0,   -35,   -35,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -37,   -37,
     -37,   -37,     0,     0,   -37,     0,     0,     0,   -37,     0,
       0,   -37,   -37,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -37,     0,   -37,   -37,   -36,   -36,   -36,   -36,     0,     0,
     -36,     0,     0,     0,   -36,     0,     0,   -36,   -36,   -36,
     -36,     0,     0,   -36,   -36,   -36,   -36,     0,   -36,   -36,
     -31,   -31,   -31,   -31,     0,     0,   -31,     0,     0,     0,
     -31,     0,     0,   -31,   -31,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -31,     0,   -31,   -31,   -32,   -32,   -32,   -32,
       0,     0,   -32,     0,     0,     0,   -32,     0,     0,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,     0,
     -32,   -32,    30,    31,    32,    33,     0,     0,    34,     0,
       0,     0,    35,     0,     0,    36,    37,    38,    39,     0,
       0,    40,    41,    42,    43,     0,   115,   217,    30,    31,
      32,    33,     0,     0,    34,     0,     0,     0,    35,     0,
       0,    36,    37,    38,    39,     0,     0,    40,    41,    42,
      43,     0,   115,   225,   -25,   -25,   -25,   -25,     0,     0,
     -25,     0,     0,     0,   -25,     0,     0,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -25,   -25,   -25,     0,   -25,   -25,
      30,    31,    32,    33,     0,     0,    34,     0,     0,     0,
     153,     0,     0,   154,   155,   156,   157,     0,     0,    40,
      41,   158,    43,     0,   159,    30,    31,    32,    33,     0,
       0,    34,     0,     0,     0,    35,     0,     0,    36,    37,
      38,    39,     0,     0,    40,    41,    42,    43,     0,   115,
     -49,   -49,     0,   -49,   -49,     0,   -51,   -51,     0,   -51,
     -51,     0,   -55,   -55,   -49,   -55,   -55,     0,     0,   -49,
     -51,     0,   -49,     0,     0,   -51,   -55,     0,   -51,   -57,
     -57,   -55,   -57,   -57,   -55,   -58,   -58,     0,   -58,   -58,
       0,   -54,   -54,   -57,   -54,   -54,     0,     0,   -57,   -58,
       0,   -57,     0,     0,   -58,   -54,     0,   -58,   -50,   -50,
     -54,   -50,   -50,   -54,   -56,   -56,     0,   -56,   -56,     0,
     -46,   184,   -50,   -46,   -46,     0,     0,   -50,   -56,     0,
     -50,     0,     0,   -56,   -46,     0,   -56,   -48,   -48,   -46,
     -48,   -48,   -46,   -60,   -60,     0,   -60,   -60,   135,   136,
     137,   -48,     0,     0,     0,     0,   -48,   -60,     0,   -48,
       0,     0,   -60,   -59,   -59,   -60,   -59,   -59,   139,     0,
     140,   -59,   -59,     0,   -59,   -59,   170,   -59,     0,     0,
       0,   171,   -59,   -66,   -66,   -59,   -66,   -66,     0,   171,
     -59,   -67,   -67,     0,   -67,   -67,     0,   -66,     0,     0,
     -47,   176,   -66,   -47,   -47,   -67,     0,     0,   -49,   -49,
     -67,   -49,   -49,     0,   -47,     0,     0,   -51,   -51,   -47,
     -51,   -51,   -49,     0,     0,   -55,   -55,   -49,   -55,   -55,
       0,   -51,     0,     0,   -57,   -57,   -51,   -57,   -57,   -55,
       0,     0,   -58,   -58,   -55,   -58,   -58,     0,   -57,     0,
       0,   -54,   -54,   -57,   -54,   -54,   -58,     0,     0,   -50,
     -50,   -58,   -50,   -50,     0,   -54,     0,     0,   -56,   -56,
     -54,   -56,   -56,   -50,     0,     0,   -46,   176,   -50,   -46,
     -46,     0,   -56,     0,     0,   -48,   -48,   -56,   -48,   -48,
     -46,     0,     0,   -60,   -60,   -46,   -60,   -60,     0,   -48,
     -42,   182,     0,     0,   -48,     0,     0,   -60,     0,     0,
       0,   -42,   -60,     0,     0,     0,   -42,   -59,   -59,   -42,
     -59,   -59,    73,   -59,   -59,     0,   -59,   -59,     0,   -65,
     -65,   -59,   -65,   -65,   -59,    74,     0,   -59,     0,     0,
     -59,    74,     0,   -65,   -66,   -66,   -65,   -66,   -66,   -67,
     -67,     0,   -67,   -67,     0,     0,   -47,    81,   -66,   -47,
     -47,   -66,     0,   -67,   -49,   -49,   -67,   -49,   -49,     0,
     -47,   -51,   -51,   -47,   -51,   -51,   -55,   -55,   -49,   -55,
     -55,   -49,     0,   -57,   -57,   -51,   -57,   -57,   -51,     0,
     -55,   -58,   -58,   -55,   -58,   -58,     0,   -57,   -54,   -54,
     -57,   -54,   -54,   -50,   -50,   -58,   -50,   -50,   -58,     0,
     -56,   -56,   -54,   -56,   -56,   -54,     0,   -50,   -46,    81,
     -50,   -46,   -46,     0,   -56,   -48,   -48,   -56,   -48,   -48,
     -60,   -60,   -46,   -60,   -60,   -46,     0,    80,     0,   -48,
     -45,   -45,   -48,     0,   -60,    80,     0,   -60,   -44,   -44,
       0,   -45,     0,     0,   -45,     0,     0,     0,     0,   -44,
       0,     0,   -44
};

static const yytype_int16 yycheck[] =
{
      20,    33,    99,    99,   115,   168,    12,    37,     3,     4,
      12,    43,   109,    43,     3,     4,   113,     5,     6,     7,
       8,    23,    28,    11,    99,    99,    28,     5,     6,     7,
       8,   194,     4,    28,    99,    67,    24,    25,    68,    27,
      72,    99,    74,    73,    12,    12,    13,    25,   159,    27,
      99,    12,     5,     6,     7,     8,    23,    28,    11,    25,
      28,    28,     5,     6,     7,     8,     0,    28,    11,    99,
     100,    24,    25,   105,    27,    28,    25,    12,   110,    99,
     110,    24,    25,    26,    27,     5,     6,     7,   120,    12,
     122,    26,   122,     5,     6,     7,     8,   129,    43,    11,
      23,   171,    12,    26,    25,    25,   138,    27,   140,   179,
     140,    25,    24,    25,   146,    27,    29,    12,    28,   151,
     152,    31,    67,   220,   220,   155,     0,    72,    23,    74,
       4,   228,   228,    28,    28,   232,   232,    31,   170,   171,
     170,   173,   174,   175,   176,   220,   220,   179,    28,   181,
     182,   183,   184,   228,   228,   220,   188,   232,   232,   189,
     105,   193,   220,   228,     0,   110,    12,   232,     4,    28,
     228,   220,    12,    12,   232,   120,    25,   122,    14,   228,
      43,    26,    28,   232,   129,    21,    27,    25,    28,    28,
     220,   221,    31,   138,    27,   140,    27,   229,   228,   229,
     220,   146,   232,    27,    67,    26,   151,   152,   228,    72,
      12,    74,   232,     5,     6,     7,     8,    28,    26,    11,
      31,    23,    26,    27,    26,   170,   171,    28,   173,   174,
     175,   176,    24,    25,   179,    27,   181,   182,   183,   184,
      26,     9,   105,   188,    12,    13,    26,   110,   193,    28,
       5,     6,     7,     8,    28,    23,    11,   120,    28,   122,
      28,    43,    28,    31,    26,    31,   129,    22,    28,    24,
      25,    27,    27,    27,    27,   138,    27,   140,    60,    26,
      12,    13,    28,   146,   229,    67,    28,    26,   151,   152,
      72,    23,    74,    28,    26,     5,     6,     7,     8,    25,
      28,    11,     5,     6,     7,     8,    28,   170,   171,    26,
     173,   174,   175,   176,    24,    25,   179,    27,   181,   182,
     183,   184,    25,   105,    27,   188,    28,    28,   110,    26,
     193,     5,     6,     7,     8,     0,    43,    11,     3,     4,
     122,     5,     6,     7,     8,    28,     4,   129,    22,    21,
      24,    25,    43,    27,    -1,     5,     6,     7,   140,    -1,
      67,    25,    -1,    27,   146,    72,   229,    74,     9,   151,
     152,    12,    13,    -1,    81,    25,    67,    27,    -1,    -1,
      -1,    72,    23,    74,    -1,    -1,    -1,    28,   170,   171,
      31,   173,   174,   175,   176,    -1,    -1,   179,   105,   181,
     182,   183,   184,   110,    -1,    -1,   188,     5,     6,     7,
       8,   193,    -1,    11,   105,   122,    -1,    -1,    -1,   110,
      -1,     5,     6,     7,     8,    -1,    24,    25,    26,    27,
      -1,   122,    -1,   140,     5,     6,     7,     8,    -1,    -1,
      11,    25,    -1,    27,   151,   152,    12,   229,     0,   140,
      -1,     3,     4,    24,    25,     0,    27,    23,     3,     4,
     151,   152,    28,   170,   171,    31,   173,   174,   175,   176,
      43,    -1,   179,    -1,   181,   182,   183,   184,    -1,   170,
     171,   188,   173,   174,   175,   176,   193,    12,   179,    -1,
     181,   182,   183,   184,    67,    43,    -1,   188,    23,    72,
      -1,    74,   193,    28,    -1,     0,    31,    80,     3,     4,
      43,     9,    10,     0,    12,    13,     3,     4,    -1,    67,
      -1,    -1,   229,    -1,    72,    23,    74,    -1,    -1,    27,
      28,    79,   105,    31,    67,    -1,    -1,   110,   229,    72,
      -1,    74,     9,    10,    77,    12,    13,    12,    13,   122,
      -1,     9,    10,    -1,    12,    13,    23,   105,    23,    -1,
      -1,    28,   110,    28,    31,    23,    31,   140,    -1,    -1,
      28,    -1,   105,    31,   122,    12,    13,   110,   151,   152,
       9,    10,    -1,    12,    13,    -1,    23,    -1,    -1,   122,
      -1,    28,   140,    -1,    23,    -1,    -1,   170,   171,    28,
     173,   174,   175,   151,   152,    -1,   179,   140,   181,   182,
     183,    -1,    43,     9,    10,   188,    12,    13,   151,   152,
     193,    -1,   170,   171,    -1,   173,   174,    23,    43,    -1,
      -1,   179,    28,   181,   182,    31,    67,   170,   171,    -1,
     188,    72,    -1,    74,    -1,   193,   179,    78,     5,     6,
       7,     8,    67,    -1,    11,   188,   229,    72,    15,    74,
     193,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,   105,    -1,    -1,    -1,    -1,   110,
      -1,   229,    -1,     9,    10,     9,    12,    13,    12,    13,
     105,   122,    12,    13,    -1,   110,   229,    23,    -1,    23,
      -1,    -1,    28,    23,    28,    31,    26,   122,    -1,   140,
      -1,     3,     4,     5,     6,     7,     8,    -1,    -1,    11,
     151,   152,    -1,    15,    -1,   140,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    27,    -1,    29,    30,   170,
     171,    -1,   173,     5,     6,     7,     8,    -1,   179,     0,
     181,    -1,     3,     4,    -1,   170,   171,   188,    -1,    -1,
      -1,    -1,   193,    25,   179,    27,    -1,     3,     4,     5,
       6,     7,     8,   188,    -1,    11,    -1,     0,   193,    15,
       3,     4,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    27,     9,    29,    30,    12,    13,    -1,   229,    -1,
       3,     4,     5,     6,     7,     8,    23,    -1,    11,    -1,
      -1,    28,    15,    -1,   229,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     3,     4,
       5,     6,     7,     8,     0,    -1,    11,     3,     4,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    16,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    16,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    16,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    -1,    29,
       9,    10,    -1,    12,    13,    -1,     9,    10,    -1,    12,
      13,    -1,     9,    10,    23,    12,    13,    -1,    -1,    28,
      23,    -1,    31,    -1,    -1,    28,    23,    -1,    31,     9,
      10,    28,    12,    13,    31,     9,    10,    -1,    12,    13,
      -1,     9,    10,    23,    12,    13,    -1,    -1,    28,    23,
      -1,    31,    -1,    -1,    28,    23,    -1,    31,     9,    10,
      28,    12,    13,    31,     9,    10,    -1,    12,    13,    -1,
       9,    10,    23,    12,    13,    -1,    -1,    28,    23,    -1,
      31,    -1,    -1,    28,    23,    -1,    31,     9,    10,    28,
      12,    13,    31,     9,    10,    -1,    12,    13,     5,     6,
       7,    23,    -1,    -1,    -1,    -1,    28,    23,    -1,    31,
      -1,    -1,    28,     9,    10,    31,    12,    13,    25,    -1,
      27,     9,    10,    -1,    12,    13,    14,    23,    -1,    -1,
      -1,    27,    28,     9,    10,    23,    12,    13,    -1,    27,
      28,     9,    10,    -1,    12,    13,    -1,    23,    -1,    -1,
       9,    10,    28,    12,    13,    23,    -1,    -1,     9,    10,
      28,    12,    13,    -1,    23,    -1,    -1,     9,    10,    28,
      12,    13,    23,    -1,    -1,     9,    10,    28,    12,    13,
      -1,    23,    -1,    -1,     9,    10,    28,    12,    13,    23,
      -1,    -1,     9,    10,    28,    12,    13,    -1,    23,    -1,
      -1,     9,    10,    28,    12,    13,    23,    -1,    -1,     9,
      10,    28,    12,    13,    -1,    23,    -1,    -1,     9,    10,
      28,    12,    13,    23,    -1,    -1,     9,    10,    28,    12,
      13,    -1,    23,    -1,    -1,     9,    10,    28,    12,    13,
      23,    -1,    -1,     9,    10,    28,    12,    13,    -1,    23,
      12,    13,    -1,    -1,    28,    -1,    -1,    23,    -1,    -1,
      -1,    23,    28,    -1,    -1,    -1,    28,     9,    10,    31,
      12,    13,    14,     9,    10,    -1,    12,    13,    -1,     9,
      10,    23,    12,    13,    26,    27,    -1,    23,    -1,    -1,
      26,    27,    -1,    23,     9,    10,    26,    12,    13,     9,
      10,    -1,    12,    13,    -1,    -1,     9,    10,    23,    12,
      13,    26,    -1,    23,     9,    10,    26,    12,    13,    -1,
      23,     9,    10,    26,    12,    13,     9,    10,    23,    12,
      13,    26,    -1,     9,    10,    23,    12,    13,    26,    -1,
      23,     9,    10,    26,    12,    13,    -1,    23,     9,    10,
      26,    12,    13,     9,    10,    23,    12,    13,    26,    -1,
       9,    10,    23,    12,    13,    26,    -1,    23,     9,    10,
      26,    12,    13,    -1,    23,     9,    10,    26,    12,    13,
       9,    10,    23,    12,    13,    26,    -1,     9,    -1,    23,
      12,    13,    26,    -1,    23,     9,    -1,    26,    12,    13,
      -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    33,    34,    35,    36,    37,    38,     4,
       0,    35,    25,    26,    27,    37,    39,    40,    41,    25,
      28,    31,    29,    44,    40,    45,    36,    37,    46,    25,
       5,     6,     7,     8,    11,    15,    18,    19,    20,    21,
      24,    25,    26,    27,    30,    42,    43,    44,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    65,    25,    61,    27,    27,    26,
      52,    27,    27,    14,    27,    52,    26,    12,    23,    13,
       9,    10,    60,    53,    52,    26,    25,    22,    53,    52,
      53,    63,    64,    28,    54,    55,    56,    57,    58,    28,
      26,    28,    28,    28,    28,    31,    42,    52,    53,    16,
      26,    42,    52,    28,    42,    29,    26,     5,     6,     7,
       8,    25,    27,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    65,    25,     5,     6,     7,     8,    25,
      27,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      65,    12,    12,    15,    18,    19,    20,    21,    26,    29,
      43,    44,    47,    48,    49,    50,    51,    52,    45,    61,
      14,    27,    52,    23,    13,     9,    10,    60,    61,    27,
      52,    23,    13,     9,    10,    60,    54,    54,    27,    27,
      26,    52,    27,    27,    45,    26,    46,    52,    63,    28,
      55,    56,    57,    58,    63,    28,    55,    56,    57,    58,
      53,    52,    26,    25,    22,    53,    46,    30,    28,    28,
      28,    26,    28,    28,    28,    30,    42,    52,    16,    26,
      42,    52,    28,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    37,
      38,    39,    39,    40,    40,    41,    42,    42,    42,    42,
      42,    42,    42,    43,    43,    44,    45,    45,    46,    46,
      47,    47,    48,    49,    49,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      58,    58,    59,    59,    60,    60,    61,    61,    61,    61,
      62,    63,    63,    64,    64,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     1,
       6,     1,     0,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     4,     2,     0,     2,     0,
       5,     7,     9,     2,     3,     4,     4,     4,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     1,     1,     1,     2,     1,     3,     1,     1,     1,
       4,     1,     0,     3,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


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

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 12: /* params: %empty  */
#line 76 "C_IPL_Sintax.y"
                {}
#line 1974 "C_IPL_Sintax.tab.c"
    break;

  case 27: /* localDecls: %empty  */
#line 100 "C_IPL_Sintax.y"
                         {}
#line 1980 "C_IPL_Sintax.tab.c"
    break;

  case 29: /* stmtList: %empty  */
#line 104 "C_IPL_Sintax.y"
                    {}
#line 1986 "C_IPL_Sintax.tab.c"
    break;

  case 62: /* args: %empty  */
#line 172 "C_IPL_Sintax.y"
              {}
#line 1992 "C_IPL_Sintax.tab.c"
    break;


#line 1996 "C_IPL_Sintax.tab.c"

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
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 183 "C_IPL_Sintax.y"




int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    if(yyin){
        yyparse();
        if (errors == 0) {
            printf("\nNão foi encontrado nenhum erro. O arquivo está lexicamente correto!\n");
        } else printf("\nOpa, foram encontrados "RED"%d"REGULAR" erros no arquivo. Ele não está lexicamente correto!\n", errors);
    }
    else {
        printf("Argumento inválido ou inexistente. Tenha certeza que o caminho do arquivo passado como argumento está certo!\n");
        exit(0);
    }
    fclose(yyin);
    yylex_destroy();
    return 0;
}

