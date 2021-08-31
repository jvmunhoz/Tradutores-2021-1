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
#line 4 "Bison/C_IPL_Syntax.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #define BLUE "\033[1;34:40m"
    #define RED "\033[1;31:40m"
    #define GREEN "\033[1;32:40m"
    #define REGULAR "\033[0m"
    extern int yylex();
    extern int yylex_destroy();
    extern int yyterminate();
    extern void yyerror(const char* e);
    extern int yylineno;
    extern int column;
    extern int errors;
    extern FILE *yyin;

#line 89 "Bison/C_IPL_Syntax.tab.c"

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

#include "C_IPL_Syntax.tab.h"
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
  YYSYMBOL_ifStmt = 46,                    /* ifStmt  */
  YYSYMBOL_forStmt = 47,                   /* forStmt  */
  YYSYMBOL_returnStmt = 48,                /* returnStmt  */
  YYSYMBOL_readFunc = 49,                  /* readFunc  */
  YYSYMBOL_writeFunc = 50,                 /* writeFunc  */
  YYSYMBOL_exp = 51,                       /* exp  */
  YYSYMBOL_logExp = 52,                    /* logExp  */
  YYSYMBOL_listExp = 53,                   /* listExp  */
  YYSYMBOL_relExp = 54,                    /* relExp  */
  YYSYMBOL_sumExp = 55,                    /* sumExp  */
  YYSYMBOL_mulExp = 56,                    /* mulExp  */
  YYSYMBOL_unaryListExp = 57,              /* unaryListExp  */
  YYSYMBOL_unaryListOp = 58,               /* unaryListOp  */
  YYSYMBOL_unaryExp = 59,                  /* unaryExp  */
  YYSYMBOL_factor = 60,                    /* factor  */
  YYSYMBOL_call = 61,                      /* call  */
  YYSYMBOL_args = 62,                      /* args  */
  YYSYMBOL_argList = 63,                   /* argList  */
  YYSYMBOL_constant = 64                   /* constant  */
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

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
       0,    54,    54,    58,    58,    62,    62,    66,    70,    70,
      74,    78,    78,    82,    82,    86,    90,    90,    90,    90,
      90,    90,    90,    94,    94,    98,   102,   102,   102,   106,
     106,   110,   114,   114,   118,   122,   122,   126,   126,   130,
     130,   134,   134,   138,   138,   142,   142,   146,   146,   150,
     150,   154,   154,   158,   158,   162,   162,   162,   162,   166,
     170,   170,   174,   174,   178,   178,   178
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
  "stmt", "expStmt", "compoundStmt", "localDecls", "ifStmt", "forStmt",
  "returnStmt", "readFunc", "writeFunc", "exp", "logExp", "listExp",
  "relExp", "sumExp", "mulExp", "unaryListExp", "unaryListOp", "unaryExp",
  "factor", "call", "args", "argList", "constant", YY_NULLPTR
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

#define YYPACT_NINF (-146)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-67)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,     0,    31,    30,    98,   103,    17,   118,    24,  -146,
     127,    93,   135,     1,    32,    28,    76,    48,   121,    83,
       5,  1259,   182,    97,  1286,  2272,  2278,  2287,    56,   226,
     106,   113,    61,   123,   132,   299,  2266,  1313,   374,   206,
    1340,   136,  1367,  1394,  1421,  1448,  1475,  1502,  1529,  1556,
     142,    -5,   150,   348,  2365,  2293,  2299,   361,  2305,  2311,
    2317,  2323,   381,  2329,   486,   597,  1583,   162,   164,   233,
     597,    12,   179,   189,  1610,  1931,  1931,  1931,  1931,  1931,
    2335,    -6,   194,  1637,   188,   196,    16,   203,    23,   197,
     214,  2341,   240,   543,  2371,  2347,  2353,   729,   597,  1664,
    1691,  1718,  2359,  1938,   683,   210,    68,  1906,   374,  1745,
     218,  1906,  1772,  1259,   758,  2115,  2121,   109,  2089,   374,
      43,    47,   199,  2243,  2138,  2144,   566,  2150,  2167,  2173,
    2179,  2109,   288,  1961,  1967,   424,  1941,   374,   190,   431,
     510,  1973,  1990,   637,  1996,  2002,  2019,  2025,  1799,   486,
    1938,   220,   221,   351,   227,   229,   769,  1259,   800,   827,
     854,   881,   908,   935,   962,   235,  1826,  2196,   374,    12,
     231,   486,   486,   486,   486,  2202,  2031,    12,   236,  1938,
    1938,  1938,  1938,  2048,    78,   306,   486,   597,   989,   239,
     245,   477,  1853,  1016,  1880,   247,   255,  2208,   502,  2249,
    2225,  2231,   259,  2054,   647,   645,  2060,  2077,    77,   262,
    1043,   261,   264,    82,  1070,  2237,  2083,   729,   597,  1097,
    1124,  1151,  1178,   267,   729,   374,  1205,   271,   729,  1232
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -146,  -146,  -146,   287,   187,    13,  -146,  -146,   275,  -146,
     -96,   -87,   -19,  -109,   -50,   -47,   -45,   -33,   -32,   -24,
     -11,   592,   547,   460,   409,   284,   371,   246,   -26,   100,
    -145,  -146,   159
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    40,    41,     7,    15,    16,    17,
      42,    43,    44,    24,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      89,    90,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,   104,    63,     8,   166,     1,   149,    75,    67,     1,
     158,   109,   128,     6,    72,   112,     6,   132,   133,   134,
     135,   -38,    97,    29,   196,    -9,    14,   120,   149,   -12,
      -2,     9,   202,    14,     1,   150,    35,   136,   128,   137,
     -61,    82,    11,   128,   101,   145,    87,   160,   192,    -8,
     161,   -63,   162,    81,   -63,   149,    19,    18,    86,   -40,
      88,    25,    26,    27,   163,   164,    25,    26,    27,    28,
     171,   -38,    29,   165,   105,   -40,   -14,   145,   159,    20,
     150,    62,   128,    38,   110,    35,    36,    66,    38,   149,
     -39,   167,   106,   128,   149,   170,   -62,   120,    -4,   -62,
     128,   171,    -4,    -5,   -11,   217,   -39,    -5,   120,   176,
     221,   128,    21,   178,   114,   115,   116,   145,    -6,    12,
      13,   222,    -6,   128,   145,   -13,   120,    -3,   226,   189,
     158,    -3,   229,    64,   131,    -7,   119,   158,   129,    -7,
      65,   158,   128,   145,   195,   128,   128,   128,   128,   -15,
      68,   145,   -15,   145,   145,   145,   145,   120,    88,    69,
     128,    73,   -40,   209,   129,   128,    88,   160,    74,   129,
     161,   146,   162,    76,   160,   208,   -40,   161,   160,   162,
     213,   161,   -10,   162,   163,   164,   -10,     5,    83,    84,
       5,   163,   164,   165,   223,   163,   164,   130,   159,   128,
     165,   227,   -40,   146,   165,   159,   -25,    91,   129,   159,
     -25,   -42,   172,   179,   120,   148,    99,   129,   -40,   129,
      98,   -40,   -42,   130,   100,   102,   129,   -42,   130,   -37,
     147,   -52,   -52,   -52,   -52,   146,   108,   129,   114,   115,
     116,   117,   -60,   146,    29,   103,   111,   186,   187,   129,
     146,   -52,   -39,   -52,   190,    85,   191,    35,   131,   197,
     119,   193,   147,    76,   203,   210,   -39,   130,   129,   146,
     211,   129,   129,   129,   129,   -37,   130,   146,   130,   146,
     146,   146,   146,   215,   127,   130,   129,   216,   218,   219,
      10,   129,   220,   225,   147,    23,   130,   -64,   -64,   228,
     -64,   -64,   147,    80,   -51,   -51,   -51,   -51,   130,   147,
     127,   -64,     0,     0,     0,   127,   -64,   144,   -39,   -64,
       0,     0,   125,     0,   -51,   129,   -51,   130,   147,   179,
     130,   130,   130,   130,   -39,     0,   147,   -39,   147,   147,
     147,   147,     0,     0,     0,   130,     0,     0,   125,   144,
     130,     0,     0,   125,   127,   142,    25,    26,    27,    28,
     -42,    77,    29,    96,     0,   127,    25,    26,    27,    28,
       0,   -42,   175,     0,   -42,    35,    36,   188,    38,   114,
     115,   116,   117,   127,   130,    29,    62,   142,    38,   183,
     -58,   -58,   125,   -58,   -58,   127,   144,     0,    35,   118,
       0,   119,     0,   125,   -58,     0,     0,   -58,    71,   126,
       0,     0,     0,     0,   127,   144,     0,   127,   127,   127,
     127,   125,     0,   144,     0,   144,   144,   144,   144,   132,
     133,   134,   127,   125,   142,   126,     0,   127,     0,     0,
     126,     0,   143,   -42,   180,     0,     0,   124,     0,   136,
       0,   137,   125,   142,   -42,   125,   125,   125,   201,   -42,
       0,   142,   -42,   142,   142,   142,   207,     0,     0,     0,
     125,   127,     0,   124,   143,   125,     0,     0,   124,   126,
     141,     0,   114,   115,   116,   117,     0,    95,    29,     0,
     126,   114,   115,   116,   117,     0,     0,    29,   123,   212,
       0,    35,   131,     0,   119,     0,     0,     0,   126,   125,
      35,   131,   141,   119,   -41,   172,     0,   124,     0,   181,
     126,   143,   -44,   -44,   123,   -41,     0,     0,   124,   123,
     -41,   140,     0,   -44,     0,     0,     0,    94,   -44,   126,
     143,   -44,   126,   126,   126,   126,   124,     0,   143,     0,
     143,   143,   143,   143,     0,   -41,    77,   126,   124,   141,
       0,     0,   126,   140,     0,     0,   -41,     0,   123,   -41,
       0,   114,   115,   116,   117,     0,     0,   124,   141,   123,
     124,   124,   200,     0,     0,   122,   141,     0,   141,   141,
     206,   131,     0,   119,     0,   124,   126,   123,     0,     0,
     124,     0,    25,    26,    27,    28,     0,     0,    29,   123,
     140,   122,     0,     0,     0,     0,   122,     0,   139,     0,
       0,    35,    36,    93,    38,     0,     0,     0,   123,   140,
     121,   123,   199,     0,   124,     0,     0,   140,     0,   140,
     205,     0,   132,   133,   134,   135,   123,     0,     0,     0,
     139,   123,     0,     0,   181,   122,   121,   -43,   -43,   -41,
     180,   121,   136,   138,   137,     0,   122,    92,   -43,     0,
     -41,     0,     0,   -43,     0,   -41,   -43,     0,   -41,     0,
       0,     0,     0,     0,   122,   123,     0,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,   138,   122,   139,   -29,   107,
     121,   -29,   -29,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -29,   121,   -29,   -29,     0,   122,   139,     0,   198,     0,
       0,     0,     0,     0,   139,     0,   204,     0,     0,   121,
       0,     0,     0,   122,    25,    26,    27,    28,   122,     0,
      29,   184,   185,     0,   151,     0,     0,   152,   153,   154,
     155,     0,     0,    35,    36,   156,    38,     0,   157,     0,
     121,   138,     0,     0,     0,     0,     0,   -64,   -64,   138,
     -64,   -64,   122,   -24,   -24,   -24,   -24,   -24,   121,     0,
     -24,   -64,     0,   121,   -24,   -24,   -64,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -24,   -24,   -24,     0,   -24,   -24,
       0,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,     0,
       0,   -16,     0,     0,     0,   -16,   -16,   121,   -16,   -16,
     -16,   -16,     0,     0,   -16,   -16,   -16,   -16,     0,   -16,
     -16,   -17,   -17,   -17,   -17,   -17,     0,     0,   -17,     0,
       0,     0,   -17,   -17,     0,   -17,   -17,   -17,   -17,     0,
       0,   -17,   -17,   -17,   -17,     0,   -17,   -17,   -18,   -18,
     -18,   -18,   -18,     0,     0,   -18,     0,     0,     0,   -18,
     -18,     0,   -18,   -18,   -18,   -18,     0,     0,   -18,   -18,
     -18,   -18,     0,   -18,   -18,   -19,   -19,   -19,   -19,   -19,
       0,     0,   -19,     0,     0,     0,   -19,   -19,     0,   -19,
     -19,   -19,   -19,     0,     0,   -19,   -19,   -19,   -19,     0,
     -19,   -19,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
       0,     0,     0,   -20,   -20,     0,   -20,   -20,   -20,   -20,
       0,     0,   -20,   -20,   -20,   -20,     0,   -20,   -20,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -21,     0,     0,     0,
     -21,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,   -21,
     -21,   -21,   -21,     0,   -21,   -21,   -22,   -22,   -22,   -22,
     -22,     0,     0,   -22,     0,     0,     0,   -22,   -22,     0,
     -22,   -22,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,
       0,   -22,   -22,   -32,   -32,   -32,   -32,   -32,     0,     0,
     -32,     0,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -32,     0,   -32,   -32,
     -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,     0,
       0,   -23,   -23,     0,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -23,   -23,   -23,     0,   -23,   -23,   -33,   -33,   -33,
     -33,   -33,     0,     0,   -33,     0,     0,     0,   -33,   -33,
       0,   -33,   -33,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -33,     0,   -33,   -33,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,     0,     0,   -25,   -25,     0,   -25,   -25,
     -25,   -25,     0,     0,   -25,   -25,   -25,   -25,     0,   -25,
     -25,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,
       0,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,     0,   -34,   -34,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,     0,     0,     0,   -36,
     -36,     0,   -36,   -36,   -36,   -36,     0,     0,   -36,   -36,
     -36,   -36,     0,   -36,   -36,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,     0,     0,   -35,   -35,     0,   -35,
     -35,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,     0,
     -35,   -35,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,
       0,     0,     0,   -29,   224,     0,   -29,   -29,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,     0,   -29,   -29,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,     0,     0,
     -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,     0,     0,     0,   -31,   -31,     0,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
       0,   -31,   -31,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,     0,     0,     0,   -28,     0,     0,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -28,   -28,   -28,     0,   -28,   -28,
       1,    25,    26,    27,    28,     0,     0,    29,     0,     0,
       0,    30,     0,     0,    31,    32,    33,    34,     0,     0,
      35,    36,    37,    38,     0,   113,    39,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,     0,     0,     0,   -24,     0,
       0,   -24,   -24,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,     0,     0,     0,   -26,     0,     0,   -26,   -26,
     -26,   -26,     0,     0,   -26,   -26,   -26,   -26,     0,   -26,
     -26,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,
       0,     0,   -27,     0,     0,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -27,     0,   -27,   -27,   -16,   -16,
     -16,   -16,   -16,     0,     0,   -16,     0,     0,     0,   -16,
       0,     0,   -16,   -16,   -16,   -16,     0,     0,   -16,   -16,
     -16,   -16,     0,   -16,   -16,   -17,   -17,   -17,   -17,   -17,
       0,     0,   -17,     0,     0,     0,   -17,     0,     0,   -17,
     -17,   -17,   -17,     0,     0,   -17,   -17,   -17,   -17,     0,
     -17,   -17,   -18,   -18,   -18,   -18,   -18,     0,     0,   -18,
       0,     0,     0,   -18,     0,     0,   -18,   -18,   -18,   -18,
       0,     0,   -18,   -18,   -18,   -18,     0,   -18,   -18,   -19,
     -19,   -19,   -19,   -19,     0,     0,   -19,     0,     0,     0,
     -19,     0,     0,   -19,   -19,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -19,     0,   -19,   -19,   -20,   -20,   -20,   -20,
     -20,     0,     0,   -20,     0,     0,     0,   -20,     0,     0,
     -20,   -20,   -20,   -20,     0,     0,   -20,   -20,   -20,   -20,
       0,   -20,   -20,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,     0,     0,   -21,     0,     0,   -21,   -21,   -21,
     -21,     0,     0,   -21,   -21,   -21,   -21,     0,   -21,   -21,
     -22,   -22,   -22,   -22,   -22,     0,     0,   -22,     0,     0,
       0,   -22,     0,     0,   -22,   -22,   -22,   -22,     0,     0,
     -22,   -22,   -22,   -22,     0,   -22,   -22,   -32,   -32,   -32,
     -32,   -32,     0,     0,   -32,     0,     0,     0,   -32,     0,
       0,   -32,   -32,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -32,     0,   -32,   -32,   -23,   -23,   -23,   -23,   -23,     0,
       0,   -23,     0,     0,     0,   -23,     0,     0,   -23,   -23,
     -23,   -23,     0,     0,   -23,   -23,   -23,   -23,     0,   -23,
     -23,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,
       0,     0,   -33,     0,     0,   -33,   -33,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,     0,   -33,   -33,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,     0,     0,     0,   -34,
       0,     0,   -34,   -34,   -34,   -34,     0,     0,   -34,   -34,
     -34,   -34,     0,   -34,   -34,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,     0,     0,   -36,     0,     0,   -36,
     -36,   -36,   -36,     0,     0,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,     0,     0,   -35,     0,     0,   -35,   -35,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -35,     0,   -35,   -35,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,     0,     0,
     -30,     0,     0,   -30,   -30,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,     0,   -30,   -30,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,     0,     0,     0,   -31,     0,     0,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
       0,   -31,   -31,    -7,    -7,    -7,    -7,    -7,     0,     0,
      -7,     0,     0,     0,    -7,     0,     0,    -7,    -7,    -7,
      -7,     0,     0,    -7,    -7,    -7,    -7,     0,    -7,    -7,
       1,    25,    26,    27,    28,     0,     0,    29,     0,     0,
       0,    30,     0,     0,    31,    32,    33,    34,     0,     0,
      35,    36,    37,    38,     0,   113,   194,     1,    25,    26,
      27,    28,     0,     0,    29,     0,     0,     0,    30,     0,
       0,    31,    32,    33,    34,     0,     0,    35,    36,    37,
      38,     0,   113,   214,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,     0,     0,   -25,     0,     0,   -25,   -25,
     -25,   -25,     0,     0,   -25,   -25,   -25,   -25,     0,   -25,
     -25,    25,    26,    27,    28,     0,     0,    29,     0,     0,
       0,    30,     0,     0,    31,    32,    33,    34,     0,     0,
      35,    36,    37,    38,     0,   113,    25,    26,    27,    28,
       0,     0,    29,   132,   133,   134,   135,     0,     0,    29,
     -58,   -58,     0,   -58,   -58,    35,    62,     0,    38,     0,
       0,     0,    35,   136,   -58,   137,     0,     0,   177,   -58,
     -65,   -65,   -58,   -65,   -65,     0,   -66,   -66,     0,   -66,
     -66,     0,   -46,   182,   -65,   -46,   -46,     0,     0,   -65,
     -66,     0,   -65,     0,     0,   -66,   -46,     0,   -66,   -48,
     -48,   -46,   -48,   -48,   -46,   -50,   -50,     0,   -50,   -50,
       0,   -54,   -54,   -48,   -54,   -54,     0,     0,   -48,   -50,
       0,   -48,     0,     0,   -50,   -54,     0,   -50,   -56,   -56,
     -54,   -56,   -56,   -54,   -57,   -57,     0,   -57,   -57,     0,
     -53,   -53,   -56,   -53,   -53,     0,     0,   -56,   -57,     0,
     -56,     0,     0,   -57,   -53,     0,   -57,   -49,   -49,   -53,
     -49,   -49,   -53,   -55,   -55,     0,   -55,   -55,     0,   -45,
     182,   -49,   -45,   -45,     0,     0,   -49,   -55,     0,   -49,
       0,     0,   -55,   -45,     0,   -55,   -47,   -47,   -45,   -47,
     -47,   -45,   -59,   -59,     0,   -59,   -59,     0,   -58,   -58,
     -47,   -58,   -58,   168,     0,   -47,   -59,     0,   -47,     0,
       0,   -59,   -58,     0,   -59,     0,   169,   -58,   -58,   -58,
       0,   -58,   -58,     0,   -65,   -65,     0,   -65,   -65,     0,
     -66,   -66,   -58,   -66,   -66,     0,   169,   -58,   -65,     0,
       0,     0,     0,   -65,   -66,     0,     0,   -46,   174,   -66,
     -46,   -46,     0,   -48,   -48,     0,   -48,   -48,     0,   -50,
     -50,   -46,   -50,   -50,     0,     0,   -46,   -48,     0,     0,
       0,     0,   -48,   -50,     0,     0,   -54,   -54,   -50,   -54,
     -54,     0,   -56,   -56,     0,   -56,   -56,     0,   -57,   -57,
     -54,   -57,   -57,     0,     0,   -54,   -56,     0,     0,     0,
       0,   -56,   -57,     0,     0,   -53,   -53,   -57,   -53,   -53,
       0,   -49,   -49,     0,   -49,   -49,     0,   -55,   -55,   -53,
     -55,   -55,     0,     0,   -53,   -49,     0,     0,     0,     0,
     -49,   -55,     0,     0,   -45,   174,   -55,   -45,   -45,     0,
     -47,   -47,     0,   -47,   -47,     0,   -59,   -59,   -45,   -59,
     -59,     0,   173,   -45,   -47,   -44,   -44,     0,   173,   -47,
     -59,   -43,   -43,     0,     0,   -59,   -44,     0,     0,     0,
       0,   -44,   -43,     0,     0,   -58,   -58,   -43,   -58,   -58,
      70,   -64,   -64,     0,   -64,   -64,     0,   -65,   -65,   -58,
     -65,   -65,   -58,    71,     0,   -64,   -66,   -66,   -64,   -66,
     -66,   -65,   -46,    79,   -65,   -46,   -46,     0,   -48,   -48,
     -66,   -48,   -48,   -66,   -50,   -50,   -46,   -50,   -50,   -46,
     -54,   -54,   -48,   -54,   -54,   -48,   -56,   -56,   -50,   -56,
     -56,   -50,   -57,   -57,   -54,   -57,   -57,   -54,   -53,   -53,
     -56,   -53,   -53,   -56,   -49,   -49,   -57,   -49,   -49,   -57,
     -55,   -55,   -53,   -55,   -55,   -53,   -45,    79,   -49,   -45,
     -45,   -49,   -47,   -47,   -55,   -47,   -47,   -55,   -59,   -59,
     -45,   -59,   -59,   -45,    78,     0,   -47,   -44,   -44,   -47,
      78,     0,   -59,   -43,   -43,   -59,     0,     0,   -44,     0,
       0,   -44,     0,     0,   -43,     0,     0,   -43
};

static const yytype_int16 yycheck[] =
{
      19,    97,    28,     3,   113,     4,    12,    12,    32,     4,
      97,   107,    38,     0,    38,   111,     3,     5,     6,     7,
       8,    26,    28,    11,   169,    25,    13,    38,    12,    28,
       0,     0,   177,    20,     4,    12,    24,    25,    64,    27,
      28,    65,    25,    69,    28,    71,    70,    97,   157,    25,
      97,    28,    97,    64,    31,    12,    28,    25,    69,    12,
      71,     5,     6,     7,    97,    97,     5,     6,     7,     8,
      23,    28,    11,    97,    98,    28,    28,   103,    97,    31,
      12,    25,   108,    27,   108,    24,    25,    26,    27,    12,
      12,   117,   103,   119,    12,   119,    28,   108,     0,    31,
     126,    23,     4,     0,    28,    28,    28,     4,   119,   135,
      28,   137,    29,   137,     5,     6,     7,   143,     0,    26,
      27,   217,     4,   149,   150,    28,   137,     0,   224,   153,
     217,     4,   228,    27,    25,     0,    27,   224,    38,     4,
      27,   228,   168,   169,   168,   171,   172,   173,   174,    28,
      27,   177,    31,   179,   180,   181,   182,   168,   169,    27,
     186,    25,    12,   187,    64,   191,   177,   217,    26,    69,
     217,    71,   217,    23,   224,   186,    26,   224,   228,   224,
     191,   228,     0,   228,   217,   217,     4,     0,    26,    25,
       3,   224,   224,   217,   218,   228,   228,    38,   217,   225,
     224,   225,    12,   103,   228,   224,     0,    28,   108,   228,
       4,    12,    13,    23,   225,    26,    28,   117,    28,   119,
      26,    31,    23,    64,    28,    28,   126,    28,    69,    26,
      71,     5,     6,     7,     8,   135,    26,   137,     5,     6,
       7,     8,    28,   143,    11,    31,    28,    27,    27,   149,
     150,    25,    12,    27,    27,    22,    27,    24,    25,    28,
      27,    26,   103,    23,    28,    26,    26,   108,   168,   169,
      25,   171,   172,   173,   174,    28,   117,   177,   119,   179,
     180,   181,   182,    28,    38,   126,   186,    28,    26,    28,
       3,   191,    28,    26,   135,    20,   137,     9,    10,    28,
      12,    13,   143,    57,     5,     6,     7,     8,   149,   150,
      64,    23,    -1,    -1,    -1,    69,    28,    71,    12,    31,
      -1,    -1,    38,    -1,    25,   225,    27,   168,   169,    23,
     171,   172,   173,   174,    28,    -1,   177,    31,   179,   180,
     181,   182,    -1,    -1,    -1,   186,    -1,    -1,    64,   103,
     191,    -1,    -1,    69,   108,    71,     5,     6,     7,     8,
      12,    13,    11,    79,    -1,   119,     5,     6,     7,     8,
      -1,    23,   126,    -1,    26,    24,    25,    26,    27,     5,
       6,     7,     8,   137,   225,    11,    25,   103,    27,   143,
       9,    10,   108,    12,    13,   149,   150,    -1,    24,    25,
      -1,    27,    -1,   119,    23,    -1,    -1,    26,    27,    38,
      -1,    -1,    -1,    -1,   168,   169,    -1,   171,   172,   173,
     174,   137,    -1,   177,    -1,   179,   180,   181,   182,     5,
       6,     7,   186,   149,   150,    64,    -1,   191,    -1,    -1,
      69,    -1,    71,    12,    13,    -1,    -1,    38,    -1,    25,
      -1,    27,   168,   169,    23,   171,   172,   173,   174,    28,
      -1,   177,    31,   179,   180,   181,   182,    -1,    -1,    -1,
     186,   225,    -1,    64,   103,   191,    -1,    -1,    69,   108,
      71,    -1,     5,     6,     7,     8,    -1,    78,    11,    -1,
     119,     5,     6,     7,     8,    -1,    -1,    11,    38,    22,
      -1,    24,    25,    -1,    27,    -1,    -1,    -1,   137,   225,
      24,    25,   103,    27,    12,    13,    -1,   108,    -1,     9,
     149,   150,    12,    13,    64,    23,    -1,    -1,   119,    69,
      28,    71,    -1,    23,    -1,    -1,    -1,    77,    28,   168,
     169,    31,   171,   172,   173,   174,   137,    -1,   177,    -1,
     179,   180,   181,   182,    -1,    12,    13,   186,   149,   150,
      -1,    -1,   191,   103,    -1,    -1,    23,    -1,   108,    26,
      -1,     5,     6,     7,     8,    -1,    -1,   168,   169,   119,
     171,   172,   173,    -1,    -1,    38,   177,    -1,   179,   180,
     181,    25,    -1,    27,    -1,   186,   225,   137,    -1,    -1,
     191,    -1,     5,     6,     7,     8,    -1,    -1,    11,   149,
     150,    64,    -1,    -1,    -1,    -1,    69,    -1,    71,    -1,
      -1,    24,    25,    76,    27,    -1,    -1,    -1,   168,   169,
      38,   171,   172,    -1,   225,    -1,    -1,   177,    -1,   179,
     180,    -1,     5,     6,     7,     8,   186,    -1,    -1,    -1,
     103,   191,    -1,    -1,     9,   108,    64,    12,    13,    12,
      13,    69,    25,    71,    27,    -1,   119,    75,    23,    -1,
      23,    -1,    -1,    28,    -1,    28,    31,    -1,    31,    -1,
      -1,    -1,    -1,    -1,   137,   225,    -1,     4,     5,     6,
       7,     8,    -1,    -1,    11,   103,   149,   150,    15,    16,
     108,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,   119,    29,    30,    -1,   168,   169,    -1,   171,    -1,
      -1,    -1,    -1,    -1,   177,    -1,   179,    -1,    -1,   137,
      -1,    -1,    -1,   186,     5,     6,     7,     8,   191,    -1,
      11,   149,   150,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    -1,
     168,   169,    -1,    -1,    -1,    -1,    -1,     9,    10,   177,
      12,    13,   225,     4,     5,     6,     7,     8,   186,    -1,
      11,    23,    -1,   191,    15,    16,    28,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
      -1,    -1,    -1,    -1,     4,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,    16,   225,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    -1,    29,
      30,     4,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     4,     5,
       6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    27,    -1,    29,    30,     4,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     4,     5,     6,     7,     8,    -1,    -1,    11,
      -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    27,    -1,    29,    30,     4,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    16,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     4,     5,     6,     7,
       8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,     4,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       4,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      -1,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    27,    -1,    29,    30,     4,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     4,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    -1,    29,
      30,     4,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     4,     5,
       6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    27,    -1,    29,    30,     4,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     4,     5,     6,     7,     8,    -1,    -1,    11,
      -1,    -1,    -1,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    27,    -1,    29,    30,     4,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    16,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     4,     5,     6,     7,
       8,    -1,    -1,    11,    -1,    -1,    -1,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,     4,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       4,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    27,    -1,    29,    30,     4,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     4,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    -1,    29,
      30,     4,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     4,     5,
       6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    27,    -1,    29,    30,     4,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     4,     5,     6,     7,     8,    -1,    -1,    11,
      -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    27,    -1,    29,    30,     4,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     4,     5,     6,     7,
       8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,     4,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       4,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    27,    -1,    29,    30,     4,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     4,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    -1,    29,
      30,     4,     5,     6,     7,     8,    -1,    -1,    11,    -1,
      -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,     4,     5,
       6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,
      -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,    25,
      26,    27,    -1,    29,    30,     4,     5,     6,     7,     8,
      -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    25,    26,    27,    -1,
      29,    30,     4,     5,     6,     7,     8,    -1,    -1,    11,
      -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    25,    26,    27,    -1,    29,    30,     4,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,    -1,
      15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      25,    26,    27,    -1,    29,    30,     4,     5,     6,     7,
       8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,     4,     5,     6,     7,     8,    -1,    -1,
      11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,    20,
      21,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
       4,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    27,    -1,    29,    30,     4,     5,     6,
       7,     8,    -1,    -1,    11,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,     4,     5,     6,     7,     8,    -1,
      -1,    11,    -1,    -1,    -1,    15,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    25,    26,    27,    -1,    29,
      30,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    27,    -1,    29,     5,     6,     7,     8,
      -1,    -1,    11,     5,     6,     7,     8,    -1,    -1,    11,
       9,    10,    -1,    12,    13,    24,    25,    -1,    27,    -1,
      -1,    -1,    24,    25,    23,    27,    -1,    -1,    27,    28,
       9,    10,    31,    12,    13,    -1,     9,    10,    -1,    12,
      13,    -1,     9,    10,    23,    12,    13,    -1,    -1,    28,
      23,    -1,    31,    -1,    -1,    28,    23,    -1,    31,     9,
      10,    28,    12,    13,    31,     9,    10,    -1,    12,    13,
      -1,     9,    10,    23,    12,    13,    -1,    -1,    28,    23,
      -1,    31,    -1,    -1,    28,    23,    -1,    31,     9,    10,
      28,    12,    13,    31,     9,    10,    -1,    12,    13,    -1,
       9,    10,    23,    12,    13,    -1,    -1,    28,    23,    -1,
      31,    -1,    -1,    28,    23,    -1,    31,     9,    10,    28,
      12,    13,    31,     9,    10,    -1,    12,    13,    -1,     9,
      10,    23,    12,    13,    -1,    -1,    28,    23,    -1,    31,
      -1,    -1,    28,    23,    -1,    31,     9,    10,    28,    12,
      13,    31,     9,    10,    -1,    12,    13,    -1,     9,    10,
      23,    12,    13,    14,    -1,    28,    23,    -1,    31,    -1,
      -1,    28,    23,    -1,    31,    -1,    27,    28,     9,    10,
      -1,    12,    13,    -1,     9,    10,    -1,    12,    13,    -1,
       9,    10,    23,    12,    13,    -1,    27,    28,    23,    -1,
      -1,    -1,    -1,    28,    23,    -1,    -1,     9,    10,    28,
      12,    13,    -1,     9,    10,    -1,    12,    13,    -1,     9,
      10,    23,    12,    13,    -1,    -1,    28,    23,    -1,    -1,
      -1,    -1,    28,    23,    -1,    -1,     9,    10,    28,    12,
      13,    -1,     9,    10,    -1,    12,    13,    -1,     9,    10,
      23,    12,    13,    -1,    -1,    28,    23,    -1,    -1,    -1,
      -1,    28,    23,    -1,    -1,     9,    10,    28,    12,    13,
      -1,     9,    10,    -1,    12,    13,    -1,     9,    10,    23,
      12,    13,    -1,    -1,    28,    23,    -1,    -1,    -1,    -1,
      28,    23,    -1,    -1,     9,    10,    28,    12,    13,    -1,
       9,    10,    -1,    12,    13,    -1,     9,    10,    23,    12,
      13,    -1,     9,    28,    23,    12,    13,    -1,     9,    28,
      23,    12,    13,    -1,    -1,    28,    23,    -1,    -1,    -1,
      -1,    28,    23,    -1,    -1,     9,    10,    28,    12,    13,
      14,     9,    10,    -1,    12,    13,    -1,     9,    10,    23,
      12,    13,    26,    27,    -1,    23,     9,    10,    26,    12,
      13,    23,     9,    10,    26,    12,    13,    -1,     9,    10,
      23,    12,    13,    26,     9,    10,    23,    12,    13,    26,
       9,    10,    23,    12,    13,    26,     9,    10,    23,    12,
      13,    26,     9,    10,    23,    12,    13,    26,     9,    10,
      23,    12,    13,    26,     9,    10,    23,    12,    13,    26,
       9,    10,    23,    12,    13,    26,     9,    10,    23,    12,
      13,    26,     9,    10,    23,    12,    13,    26,     9,    10,
      23,    12,    13,    26,     9,    -1,    23,    12,    13,    26,
       9,    -1,    23,    12,    13,    26,    -1,    -1,    23,    -1,
      -1,    26,    -1,    -1,    23,    -1,    -1,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    33,    34,    35,    36,    37,    38,     3,     0,
      35,    25,    26,    27,    37,    39,    40,    41,    25,    28,
      31,    29,    44,    40,    45,     5,     6,     7,     8,    11,
      15,    18,    19,    20,    21,    24,    25,    26,    27,    30,
      36,    37,    42,    43,    44,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    64,    25,    60,    27,    27,    26,    51,    27,    27,
      14,    27,    51,    25,    26,    12,    23,    13,     9,    10,
      59,    52,    51,    26,    25,    22,    52,    51,    52,    62,
      63,    28,    53,    54,    55,    56,    57,    28,    26,    28,
      28,    28,    28,    31,    42,    51,    52,    16,    26,    42,
      51,    28,    42,    29,     5,     6,     7,     8,    25,    27,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      64,    25,     5,     6,     7,     8,    25,    27,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    64,    26,    12,
      12,    15,    18,    19,    20,    21,    26,    29,    43,    44,
      46,    47,    48,    49,    50,    51,    45,    60,    14,    27,
      51,    23,    13,     9,    10,    59,    60,    27,    51,    23,
      13,     9,    10,    59,    53,    53,    27,    27,    26,    51,
      27,    27,    45,    26,    30,    51,    62,    28,    54,    55,
      56,    57,    62,    28,    54,    55,    56,    57,    52,    51,
      26,    25,    22,    52,    30,    28,    28,    28,    26,    28,
      28,    28,    42,    51,    16,    26,    42,    51,    28,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    37,
      38,    39,    39,    40,    40,    41,    42,    42,    42,    42,
      42,    42,    42,    43,    43,    44,    45,    45,    45,    46,
      46,    47,    48,    48,    49,    50,    50,    51,    51,    52,
      52,    53,    53,    54,    54,    55,    55,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    60,    60,    61,
      62,    62,    63,    63,    64,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     2,     1,
       6,     1,     0,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     2,     0,     5,
       7,     9,     2,     3,     4,     4,     4,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     2,
       1,     1,     1,     2,     1,     3,     1,     1,     1,     4,
       1,     0,     3,     1,     1,     1,     1
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
#line 78 "Bison/C_IPL_Syntax.y"
                {}
#line 1985 "Bison/C_IPL_Syntax.tab.c"
    break;

  case 28: /* localDecls: %empty  */
#line 102 "Bison/C_IPL_Syntax.y"
                                           {}
#line 1991 "Bison/C_IPL_Syntax.tab.c"
    break;

  case 61: /* args: %empty  */
#line 170 "Bison/C_IPL_Syntax.y"
              {}
#line 1997 "Bison/C_IPL_Syntax.tab.c"
    break;


#line 2001 "Bison/C_IPL_Syntax.tab.c"

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

#line 181 "Bison/C_IPL_Syntax.y"


 extern void yyerror (char const* e) {
   fprintf (stderr, "%s\n", e);
 }

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

