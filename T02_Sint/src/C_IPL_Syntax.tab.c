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
#line 4 "src/C_IPL_Syntax.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "../lib/abstract_tree.h"
    #include "../lib/symbol_table.h"
    #include "../lib/scope_stack.h"
    #define BLUE "\033[1;34:40m"
    #define RED "\033[1;31:40m"
    #define GREEN "\033[1;32:40m"
    #define REGULAR "\033[0m"
    extern int yylex();
    extern int yylex_destroy();
    extern int yyterminate();
    extern void yyerror(const char* e);
    extern int prev_line;
    extern int prev_column;
    extern int errors;
    extern FILE *yyin;
    Node* abstract_tree;
    int position = 0; 
    int scope = 0;
    StackNode* scope_root = NULL;
    Symbol* symbol_root = NULL;

#line 97 "src/C_IPL_Syntax.tab.c"

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
  YYSYMBOL_TYPE = 3,                       /* TYPE  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_NIL = 6,                        /* NIL  */
  YYSYMBOL_MINUS = 7,                      /* MINUS  */
  YYSYMBOL_READ = 8,                       /* READ  */
  YYSYMBOL_WRITE = 9,                      /* WRITE  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_ID = 11,                        /* ID  */
  YYSYMBOL_BIN_LISTOP = 12,                /* BIN_LISTOP  */
  YYSYMBOL_RELOP = 13,                     /* RELOP  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_KW_IF = 15,                     /* KW_IF  */
  YYSYMBOL_KW_FOR = 16,                    /* KW_FOR  */
  YYSYMBOL_KW_RETURN = 17,                 /* KW_RETURN  */
  YYSYMBOL_18_ = 18,                       /* ';'  */
  YYSYMBOL_19_ = 19,                       /* '('  */
  YYSYMBOL_20_ = 20,                       /* ')'  */
  YYSYMBOL_21_ = 21,                       /* '{'  */
  YYSYMBOL_22_ = 22,                       /* '}'  */
  YYSYMBOL_23_ = 23,                       /* ','  */
  YYSYMBOL_EXCLAM = 24,                    /* EXCLAM  */
  YYSYMBOL_UN_LISTOP = 25,                 /* UN_LISTOP  */
  YYSYMBOL_KW_ELSE = 26,                   /* KW_ELSE  */
  YYSYMBOL_THEN = 27,                      /* THEN  */
  YYSYMBOL_SUMOP = 28,                     /* SUMOP  */
  YYSYMBOL_MULOP = 29,                     /* MULOP  */
  YYSYMBOL_LOGOP = 30,                     /* LOGOP  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_program = 32,                   /* program  */
  YYSYMBOL_declList = 33,                  /* declList  */
  YYSYMBOL_decl = 34,                      /* decl  */
  YYSYMBOL_varDecl = 35,                   /* varDecl  */
  YYSYMBOL_funDecl = 36,                   /* funDecl  */
  YYSYMBOL_params = 37,                    /* params  */
  YYSYMBOL_paramList = 38,                 /* paramList  */
  YYSYMBOL_paramTypeList = 39,             /* paramTypeList  */
  YYSYMBOL_stmt = 40,                      /* stmt  */
  YYSYMBOL_expStmt = 41,                   /* expStmt  */
  YYSYMBOL_compoundStmt = 42,              /* compoundStmt  */
  YYSYMBOL_localDecls = 43,                /* localDecls  */
  YYSYMBOL_ifStmt = 44,                    /* ifStmt  */
  YYSYMBOL_forStmt = 45,                   /* forStmt  */
  YYSYMBOL_returnStmt = 46,                /* returnStmt  */
  YYSYMBOL_readFunc = 47,                  /* readFunc  */
  YYSYMBOL_writeFunc = 48,                 /* writeFunc  */
  YYSYMBOL_exp = 49,                       /* exp  */
  YYSYMBOL_logExp = 50,                    /* logExp  */
  YYSYMBOL_listExp = 51,                   /* listExp  */
  YYSYMBOL_relExp = 52,                    /* relExp  */
  YYSYMBOL_sumExp = 53,                    /* sumExp  */
  YYSYMBOL_mulExp = 54,                    /* mulExp  */
  YYSYMBOL_unaryListExp = 55,              /* unaryListExp  */
  YYSYMBOL_unaryListOp = 56,               /* unaryListOp  */
  YYSYMBOL_unaryExp = 57,                  /* unaryExp  */
  YYSYMBOL_factor = 58,                    /* factor  */
  YYSYMBOL_call = 59,                      /* call  */
  YYSYMBOL_args = 60,                      /* args  */
  YYSYMBOL_argList = 61,                   /* argList  */
  YYSYMBOL_constant = 62                   /* constant  */
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
#define YYLAST   2527

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  238

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
      19,    20,     2,     2,    23,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    18,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    21,     2,    22,     2,     2,     2,     2,
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
      15,    16,    17,    24,    25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    81,    81,    88,    93,    99,   102,   105,   109,   133,
     159,   162,   166,   171,   177,   201,   204,   207,   210,   213,
     216,   219,   222,   226,   229,   233,   236,   240,   245,   250,
     253,   259,   264,   273,   283,   290,   298,   304,   318,   324,
     330,   337,   343,   350,   356,   363,   369,   376,   383,   389,
     396,   402,   407,   413,   418,   426,   432,   438,   441,   444,
     447,   455,   464,   467,   471,   476,   482,   487,   492
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
  "\"end of file\"", "error", "\"invalid token\"", "TYPE", "INT", "FLOAT",
  "NIL", "MINUS", "READ", "WRITE", "STRING", "ID", "BIN_LISTOP", "RELOP",
  "ASSIGN", "KW_IF", "KW_FOR", "KW_RETURN", "';'", "'('", "')'", "'{'",
  "'}'", "','", "EXCLAM", "UN_LISTOP", "KW_ELSE", "THEN", "SUMOP", "MULOP",
  "LOGOP", "$accept", "program", "declList", "decl", "varDecl", "funDecl",
  "params", "paramList", "paramTypeList", "stmt", "expStmt",
  "compoundStmt", "localDecls", "ifStmt", "forStmt", "returnStmt",
  "readFunc", "writeFunc", "exp", "logExp", "listExp", "relExp", "sumExp",
  "mulExp", "unaryListExp", "unaryListOp", "unaryExp", "factor", "call",
  "args", "argList", "constant", YY_NULLPTR
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
     265,   266,   267,   268,   269,   270,   271,   272,    59,    40,
      41,   123,   125,    44,   273,   274,   275,   276,   277,   278,
     279
};
#endif

#define YYPACT_NINF (-101)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     154,   275,    19,    24,    31,   332,   356,   445,    -7,  -101,
      51,   483,     5,    41,    47,    61,    43,   170,    67,    79,
    1338,   517,    96,  1363,   131,   563,   651,   759,   342,   124,
     144,     8,   145,   162,   594,  1388,  2415,   582,   415,   887,
    1413,  1438,  1463,  1488,   163,  1513,  1538,  1563,  1588,  1613,
     174,   -14,   153,    87,   351,   798,   822,  2481,   831,  2068,
    2072,  2075,   176,    16,  2099,   208,  2364,  2431,  2380,  2440,
    2431,  1638,   188,   199,   200,   621,  1663,  2456,  2456,  2456,
    2456,  2456,  2456,  2102,   206,   215,   -17,   219,    66,   223,
     231,    81,   221,  2106,   161,    91,   386,  2126,  2130,  2133,
    1688,  1713,  1738,  2465,  2157,  1935,  2431,   234,    53,   239,
    1957,  2415,  1763,   238,  1957,  1788,  1813,  2160,  2164,  2184,
     530,    78,  2415,   193,   111,    20,   716,  2188,  2208,  2490,
    2212,  2232,  2236,  2256,  1838,   240,   383,   424,   509,  2508,
     311,  2415,   261,   405,   175,   567,   597,  2499,   655,   728,
     802,  1972,  2440,  2465,   486,   209,   245,   248,   252,  2390,
     861,  1863,   896,   922,   948,   974,  1000,  1026,  1052,   254,
    1888,   255,  2260,  2415,  2380,   259,  2440,  2440,  2440,  2440,
    2440,  2280,  1976,  2380,   260,  2465,  2465,  2465,  2465,  2465,
    1996,   177,   290,   279,  2406,  2440,  2431,  1078,  1104,   271,
    1130,  1913,   281,   285,  2284,    35,  2352,  2304,  2308,  2328,
     289,  2000,   438,   204,  2020,  2024,  2044,   291,   292,   195,
     210,   296,  1156,  2332,  2048,  1182,  1208,  1234,  1935,  2431,
    1260,   297,  1935,  2415,  1286,   301,  1935,  1312
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,   294,  -101,   110,  -101,  -101,   306,  -101,  -100,
     -32,   -18,   -22,   -99,   -98,   -88,   -62,   -52,    13,   133,
     701,   623,   608,   462,   374,   520,   286,   -27,   109,   -61,
     226,   197
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    40,     7,    14,    15,    16,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    89,
      90,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    64,    71,   102,   -39,   108,   164,   165,    13,   131,
     112,    11,    12,   152,   115,   -60,    77,   166,    73,    74,
     -60,   -60,    67,   -60,     9,   -11,   -60,    68,   -60,   -60,
       8,    -2,   -43,   177,   -60,    68,   -60,   -60,   -60,   131,
     -43,   149,   131,   167,   -60,   -60,   -60,   -42,   177,    72,
     -43,    -3,    17,   168,   -31,   -42,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -13,   -31,   -42,    19,    18,   -31,   -31,
     -31,   -31,   -31,   162,   -31,   -31,   149,   -31,   -31,   110,
      87,   -10,    13,    92,   131,   -60,   -65,   163,    20,   103,
     -60,   -60,   173,   172,   171,   131,   153,   174,   -60,   -43,
      79,   105,   131,   -42,    79,   -43,   -60,   -60,   -60,   -42,
       6,   152,   182,   203,   131,     6,   -12,   -43,   169,   109,
     149,   -42,   210,   176,   113,   131,   149,   197,   230,   164,
     165,   -41,   234,   164,   165,   175,   237,   164,   165,   199,
     166,   -41,    62,    65,   166,   132,   131,   149,   166,   131,
     131,   131,   131,   131,   184,     1,   149,     2,   149,   149,
     149,   149,   149,    66,    69,    78,   167,   131,   131,   123,
     167,   -41,   169,    78,   167,   132,   168,   150,   132,   -40,
     168,    70,   187,   -41,   168,    75,   202,   -45,   -45,   176,
     -14,   -40,    76,   -14,   134,   -45,   162,   -40,   -45,    86,
     162,    88,    91,   188,   162,   -45,   131,   -40,    93,   221,
     163,   187,   150,   -39,   163,   227,   -44,   -44,   163,    84,
     132,   -27,   -28,   152,   -44,   152,   100,   -44,   193,   132,
     228,   132,   188,   133,   -44,   101,    88,   -38,   132,   106,
     152,   169,   231,   104,   123,   169,   235,   -60,   150,   169,
     132,   -62,   -60,   -60,   -64,   123,   150,   111,   114,   174,
     -60,   132,   150,   133,   194,   151,   133,   195,   -60,   -60,
     -60,   196,   200,   185,   123,    -7,    -7,   201,    -7,   204,
     211,   -41,   132,   150,   -41,   132,   132,   132,   132,   132,
     217,   -41,   150,   222,   150,   150,   150,   150,   150,    10,
     151,   -38,   185,   132,   132,   223,   123,    88,   133,   224,
     -40,   225,   226,   -40,   229,   233,    88,   133,   -60,   133,
     -40,   236,   130,   -60,   -60,    22,   133,   219,   220,   107,
     183,   -60,    -4,     1,   -60,     2,   151,     0,   133,   -60,
     -60,   -60,   132,    83,   151,     0,    25,    26,    27,   133,
     151,     0,   130,    63,   148,   130,    -5,    -5,    80,    -5,
       0,    36,     0,   -45,   -45,     0,   123,     0,     0,   -45,
     133,   151,     0,   133,   133,   133,   133,   133,     0,    81,
     151,   -45,   151,   151,   151,   151,   151,     0,     0,   148,
     -66,   133,   133,    80,     0,   -66,   -66,   130,   -44,   -44,
       0,     0,     0,   -66,   -44,     0,   -66,     0,   130,     0,
     128,   -66,   -66,   -66,    81,   181,   -44,   -43,   186,   -54,
     -54,   -54,   -54,     0,     0,   -43,   -54,   130,   -43,     0,
     133,   -67,     0,   190,   -54,   -43,   -67,   -67,   130,   148,
     128,     0,   146,   128,   -67,    -6,    -6,   -67,    -6,     0,
     -42,   186,   -67,   -67,   -67,     0,    99,     0,   -42,   130,
     148,   -42,   130,   130,   130,   130,   130,     0,   -42,   148,
       0,   148,   148,   148,   148,   148,     0,   146,     0,     0,
     130,   130,     0,    -8,    -8,   128,    -8,   -22,     0,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   128,   -22,   127,     0,
       0,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,
     -22,   -22,   -22,     0,     0,   128,   -68,    -9,    -9,   130,
      -9,   -68,   -68,     0,     0,     0,   128,   146,   127,   -68,
     145,   127,   -68,     0,   117,   118,   119,   -68,   -68,   -68,
       0,   135,    97,    98,     0,     0,     0,   128,   146,   122,
     128,   128,   128,   128,   209,     0,   129,   146,     0,   146,
     146,   146,   146,   216,     0,   145,     0,     0,   128,   128,
     -66,     0,     0,   127,   -48,   -66,   -66,     0,     0,   -48,
     -48,   -66,   -26,   -26,   127,   -26,   129,   -48,   147,   129,
     -48,   -66,   -66,   -66,     0,   -48,   189,   -48,    25,    26,
      27,    28,     0,   127,   -50,    31,     0,   128,     0,   -50,
     -50,     0,    35,    36,   127,   145,     0,   -50,    38,    39,
     -50,   -25,   -25,   147,   -25,   -50,   -50,   -50,     0,     0,
       0,   129,     0,     0,     0,   127,   145,     0,   127,   127,
     207,   208,   129,     0,   126,   145,     0,   145,   145,   214,
     215,     0,     0,     0,     0,     0,   127,   127,   -67,   125,
       0,   129,   -52,   -67,   -67,     0,     0,   -52,   -52,   -67,
       0,     0,   129,   147,   126,   -52,   144,   126,   -52,   -67,
     -67,   -67,     0,   -52,   -52,   -52,     0,    96,     0,   125,
       0,   143,   125,   129,   147,   127,   129,   129,   129,   129,
     129,    95,     0,   147,     0,   147,   147,   147,   147,   147,
       0,   144,     0,     0,   129,   129,     0,     0,     0,   126,
       0,     0,     0,   178,     0,     0,   143,     0,   -45,   -45,
     126,     0,     0,     0,   125,   -56,   -45,   124,     0,     0,
     -56,   -56,     0,     0,   179,   125,   -45,     0,   -56,   126,
       0,   -56,     0,   129,     0,     0,   -56,   -56,   -56,     0,
     126,   144,     0,     0,   125,     0,   -68,   124,     0,   142,
     124,   -68,   -68,     0,     0,   125,   143,   -68,    94,     0,
       0,   126,   144,     0,   126,   206,     0,   -68,   -68,   -68,
       0,   144,     0,   144,   213,     0,   125,   143,     0,   205,
       0,     0,   126,   126,   142,   -48,   143,     0,   212,   -58,
     -48,   -48,   124,     0,   -58,   -58,   -48,   125,   125,     0,
       0,     0,   -58,   124,     0,   -58,   -48,    82,   -48,   -50,
     -58,   -58,   -58,     0,   -50,   -50,     0,     0,   -52,     0,
     -50,   126,   124,   -52,   -52,     0,     0,     0,     0,   -52,
     -50,   -50,   -50,   191,   192,     0,   125,     0,     0,   -52,
     -52,   -52,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,
     -24,     0,   -24,     0,   124,   142,   -24,   -24,   -24,   -24,
     -24,     0,   -24,   -24,   142,   -24,   -24,   -24,     0,     0,
       0,   -53,   -53,   -53,   -53,   124,   124,   -15,   -53,   -15,
     -15,   -15,   -15,   -15,   -15,   -15,   -53,   -15,     0,     0,
       0,   -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,
     -15,   -15,   -15,   -16,     0,   -16,   -16,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   124,     0,     0,   -16,   -16,   -16,
     -16,   -16,     0,   -16,   -16,     0,   -16,   -16,   -16,   -17,
       0,   -17,   -17,   -17,   -17,   -17,   -17,   -17,     0,   -17,
       0,     0,     0,   -17,   -17,   -17,   -17,   -17,     0,   -17,
     -17,     0,   -17,   -17,   -17,   -18,     0,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,     0,   -18,     0,     0,     0,   -18,
     -18,   -18,   -18,   -18,     0,   -18,   -18,     0,   -18,   -18,
     -18,   -19,     0,   -19,   -19,   -19,   -19,   -19,   -19,   -19,
       0,   -19,     0,     0,     0,   -19,   -19,   -19,   -19,   -19,
       0,   -19,   -19,     0,   -19,   -19,   -19,   -20,     0,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,     0,     0,
       0,   -20,   -20,   -20,   -20,   -20,     0,   -20,   -20,     0,
     -20,   -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,     0,   -21,     0,     0,     0,   -21,   -21,   -21,
     -21,   -21,     0,   -21,   -21,     0,   -21,   -21,   -21,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,     0,   -34,   -34,   -34,   -26,     0,   -26,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,     0,     0,     0,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -23,     0,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
       0,   -23,     0,     0,     0,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,     0,   -23,   -23,   -23,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,     0,     0,
       0,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,     0,
     -25,   -25,   -25,   -35,     0,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,     0,     0,     0,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,     0,   -35,   -35,   -35,   -37,
       0,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
       0,     0,     0,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,     0,   -37,   -37,   -37,   -36,     0,   -36,   -36,   -36,
     -36,   -36,   -36,   -36,     0,   -36,     0,     0,     0,   -36,
     -36,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,   -36,
     -36,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,     0,     0,     0,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,   -31,   -31,   232,   -32,     0,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,     0,     0,
       0,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
     -32,   -32,   -32,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,   -33,   -33,   -33,    23,
       0,    24,    25,    26,    27,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,   116,
      37,     0,    38,    39,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,   -22,     0,     0,     0,   -22,   -22,
     -22,   -22,   -22,     0,   -22,   -22,     0,   -22,   -22,   -24,
       0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,
       0,     0,     0,   -24,   -24,   -24,   -24,   -24,     0,   -24,
     -24,     0,   -24,   -24,    23,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,   116,   -29,     0,    38,    39,    23,
       0,    24,    25,    26,    27,    28,    29,    30,     0,    31,
       0,     0,     0,    32,    33,    34,    35,    36,     0,   116,
     -30,     0,    38,    39,   -15,     0,   -15,   -15,   -15,   -15,
     -15,   -15,   -15,     0,   -15,     0,     0,     0,   -15,   -15,
     -15,   -15,   -15,     0,   -15,   -15,     0,   -15,   -15,   -16,
       0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,     0,   -16,
       0,     0,     0,   -16,   -16,   -16,   -16,   -16,     0,   -16,
     -16,     0,   -16,   -16,   -17,     0,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,     0,   -17,     0,     0,     0,   -17,   -17,
     -17,   -17,   -17,     0,   -17,   -17,     0,   -17,   -17,   -18,
       0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,
       0,     0,     0,   -18,   -18,   -18,   -18,   -18,     0,   -18,
     -18,     0,   -18,   -18,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,     0,     0,     0,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,     0,   -19,   -19,   -20,
       0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,   -20,
       0,     0,     0,   -20,   -20,   -20,   -20,   -20,     0,   -20,
     -20,     0,   -20,   -20,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,   -21,     0,     0,     0,   -21,   -21,
     -21,   -21,   -21,     0,   -21,   -21,     0,   -21,   -21,   -34,
       0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,     0,     0,   -34,   -34,   -34,   -34,   -34,     0,   -34,
     -34,     0,   -34,   -34,   -23,     0,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,     0,   -23,     0,     0,     0,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,     0,   -23,   -23,   -35,
       0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
       0,     0,     0,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,   -35,   -35,   -37,     0,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -37,     0,     0,     0,   -37,   -37,
     -37,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,   -36,
       0,   -36,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,
       0,     0,     0,   -36,   -36,   -36,   -36,   -36,     0,   -36,
     -36,     0,   -36,   -36,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,     0,     0,     0,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,     0,   -32,   -32,   -33,
       0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,
       0,     0,     0,   -33,   -33,   -33,   -33,   -33,     0,   -33,
     -33,     0,   -33,   -33,    23,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,   116,   170,     0,    38,    39,    -8,
       0,    -8,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
       0,     0,     0,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,    23,     0,    24,    25,    26,    27,
      28,    29,    30,     0,    31,     0,     0,     0,    32,    33,
      34,    35,    36,     0,   116,   198,     0,    38,    39,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,
       0,     0,     0,   -26,   -26,   -26,   -26,   -26,     0,   -26,
     -26,     0,   -26,   -26,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,   154,   -25,   -25,    25,
      26,    27,    28,   155,   156,     0,    31,     0,     0,     0,
     157,   158,   159,   160,    36,     0,   161,     0,    23,    38,
      39,    25,    26,    27,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,     0,   116,   -59,
       0,    38,    39,   -55,   -59,   -59,     0,     0,   -55,   -55,
       0,     0,   -59,     0,     0,   -59,   -55,     0,     0,   -55,
     -59,   -59,   -59,   -51,   -55,   -55,   -55,   -57,   -51,   -51,
       0,     0,   -57,   -57,     0,     0,   -51,     0,     0,   -51,
     -57,     0,     0,   -57,   -51,   -51,   -51,   -47,   -57,   -57,
     -57,   -46,   -47,   -47,     0,     0,   -46,   -46,     0,     0,
     -47,     0,     0,   -47,   -46,     0,     0,   -46,   -47,   189,
     -47,   -49,   -46,   189,   -46,   -61,   -49,   -49,     0,     0,
     -61,   -61,     0,     0,   -49,     0,     0,   -49,   -61,     0,
       0,   -61,   -49,   -49,   -49,   -56,   -61,   -61,   -61,   -58,
     -56,   -56,   -59,     0,   -58,   -58,   -56,   -59,   -59,     0,
     -58,     0,     0,   -59,     0,     0,   -56,   -56,   -56,     0,
     -58,   -58,   -58,   -59,   -59,   -59,   -55,     0,     0,   -51,
       0,   -55,   -55,   -57,   -51,   -51,     0,   -55,   -57,   -57,
     -51,     0,     0,     0,   -57,     0,     0,   -55,   -55,   -55,
     -51,   -51,   -51,   -47,   -57,   -57,   -57,   -46,   -47,   -47,
     -49,     0,   -46,   -46,   -47,   -49,   -49,     0,   -46,     0,
       0,   -49,     0,     0,   -47,    82,   -47,     0,   -46,    82,
     -46,   -49,   -49,   -49,   -61,     0,     0,   -66,     0,   -61,
     -61,   -67,   -66,   -66,     0,   -61,   -67,   -67,     0,     0,
     -66,     0,     0,     0,   -67,   -61,   -61,   -61,   -66,   -66,
     -66,   -68,   -67,   -67,   -67,   -48,   -68,   -68,     0,     0,
     -48,   -48,     0,     0,   -68,     0,     0,     0,   -48,     0,
       0,     0,   -68,   -68,   -68,   -50,   -48,   180,   -48,   -52,
     -50,   -50,     0,     0,   -52,   -52,     0,     0,   -50,     0,
       0,     0,   -52,     0,     0,     0,   -50,   -50,   -50,   -56,
     -52,   -52,   -52,   -58,   -56,   -56,     0,     0,   -58,   -58,
       0,     0,   -56,     0,     0,     0,   -58,     0,     0,     0,
     -56,   -56,   -56,   -59,   -58,   -58,   -58,   -55,   -59,   -59,
       0,     0,   -55,   -55,     0,     0,   -59,     0,     0,     0,
     -55,     0,     0,     0,   -59,   -59,   -59,   -51,   -55,   -55,
     -55,   -57,   -51,   -51,     0,     0,   -57,   -57,     0,     0,
     -51,     0,     0,     0,   -57,     0,     0,     0,   -51,   -51,
     -51,   -47,   -57,   -57,   -57,   -46,   -47,   -47,     0,     0,
     -46,   -46,     0,     0,   -47,     0,     0,     0,   -46,     0,
       0,     0,   -47,   180,   -47,   -49,   -46,   180,   -46,   -61,
     -49,   -49,     0,     0,   -61,   -61,     0,     0,   -49,     0,
       0,     0,   -61,     0,     0,     0,   -49,   -49,   -49,   178,
     -61,   -61,   -61,     0,   -44,   -44,     0,     0,   117,   118,
     119,   120,   -44,     0,    85,   135,     0,     0,     0,     0,
     179,     0,   -44,   122,   136,   137,   138,   139,    38,    39,
       0,   140,     0,     0,    25,    26,    27,    28,     0,   141,
     -63,    31,     0,     0,    38,    39,     0,     0,   160,    36,
     117,   118,   119,   120,    38,    39,   218,   135,     0,   117,
     118,   119,   120,     0,     0,   122,   121,     0,     0,     0,
      38,    39,     0,     0,   122,    25,    26,    27,    28,    38,
      39,     0,    31,     0,   117,   118,   119,   120,     0,     0,
      36,   135,     0,     0,     0,    38,    39,     0,     0,   122,
      25,    26,    27,    28,    38,    39,     0,    63,     0,   136,
     137,   138,   139,     0,     0,    36,   140,     0,     0,     0,
      38,    39,     0,     0,   141,    25,    26,    27,    28,    38,
      39,     0,    63,     0,   117,   118,   119,   120,     0,     0,
      36,   135,     0,   136,   137,   138,   139,     0,     0,   122,
     140,     0,   136,   137,   138,     0,     0,     0,   141,   140,
       0,     0,     0,     0,     0,     0,     0,   141
};

static const yytype_int16 yycheck[] =
{
      18,    28,    34,    20,    18,   105,   105,   105,     3,    36,
     110,    18,    19,    30,   114,     7,    30,   105,    40,    41,
      12,    13,    14,     7,     0,    20,    18,    19,    12,    13,
      11,     0,    12,    13,    18,    19,    28,    29,    30,    66,
      20,    68,    69,   105,    28,    29,    30,    12,    13,    36,
      30,     0,    11,   105,     1,    20,     3,     4,     5,     6,
       7,     8,     9,    20,    11,    30,    23,    20,    15,    16,
      17,    18,    19,   105,    21,    22,   103,    24,    25,    26,
      67,    20,     3,    70,   111,     7,    20,   105,    21,    23,
      12,    13,    14,   120,   116,   122,    30,    19,    20,    12,
      13,    20,   129,    12,    13,    18,    28,    29,    30,    18,
       0,    30,   139,   174,   141,     5,    20,    30,   105,   106,
     147,    30,   183,    12,   111,   152,   153,   159,   228,   228,
     228,    20,   232,   232,   232,   122,   236,   236,   236,   161,
     228,    30,    11,    19,   232,    36,   173,   174,   236,   176,
     177,   178,   179,   180,   141,     1,   183,     3,   185,   186,
     187,   188,   189,    19,    19,    12,   228,   194,   195,    36,
     232,    18,   159,    12,   236,    66,   228,    68,    69,    18,
     232,    19,     7,    30,   236,    22,   173,    12,    13,    12,
      20,    30,    18,    23,    18,    20,   228,    20,    23,    66,
     232,    68,    69,    28,   236,    30,   233,    30,    20,   196,
     228,     7,   103,    20,   232,    20,    12,    13,   236,    11,
     111,    22,    22,    30,    20,    30,    20,    23,    19,   120,
      20,   122,    28,    36,    30,    20,   103,    18,   129,    18,
      30,   228,   229,    20,   111,   232,   233,     7,   139,   236,
     141,    20,    12,    13,    20,   122,   147,    18,    20,    19,
      20,   152,   153,    66,    19,    68,    69,    19,    28,    29,
      30,    19,    18,    12,   141,     0,     1,    22,     3,    20,
      20,    20,   173,   174,    23,   176,   177,   178,   179,   180,
      11,    30,   183,    22,   185,   186,   187,   188,   189,     5,
     103,    20,    12,   194,   195,    20,   173,   174,   111,    20,
      20,    20,    20,    23,    18,    18,   183,   120,     7,   122,
      30,    20,    36,    12,    13,    19,   129,   194,   195,   103,
      19,    20,     0,     1,    23,     3,   139,    -1,   141,    28,
      29,    30,   233,    57,   147,    -1,     4,     5,     6,   152,
     153,    -1,    66,    11,    68,    69,     0,     1,     7,     3,
      -1,    19,    -1,    12,    13,    -1,   233,    -1,    -1,    18,
     173,   174,    -1,   176,   177,   178,   179,   180,    -1,    28,
     183,    30,   185,   186,   187,   188,   189,    -1,    -1,   103,
       7,   194,   195,     7,    -1,    12,    13,   111,    12,    13,
      -1,    -1,    -1,    20,    18,    -1,    23,    -1,   122,    -1,
      36,    28,    29,    30,    28,   129,    30,    12,    13,     4,
       5,     6,     7,    -1,    -1,    20,    11,   141,    23,    -1,
     233,     7,    -1,   147,    19,    30,    12,    13,   152,   153,
      66,    -1,    68,    69,    20,     0,     1,    23,     3,    -1,
      12,    13,    28,    29,    30,    -1,    82,    -1,    20,   173,
     174,    23,   176,   177,   178,   179,   180,    -1,    30,   183,
      -1,   185,   186,   187,   188,   189,    -1,   103,    -1,    -1,
     194,   195,    -1,     0,     1,   111,     3,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,   122,    11,    36,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,    -1,    -1,   141,     7,     0,     1,   233,
       3,    12,    13,    -1,    -1,    -1,   152,   153,    66,    20,
      68,    69,    23,    -1,     4,     5,     6,    28,    29,    30,
      -1,    11,    80,    81,    -1,    -1,    -1,   173,   174,    19,
     176,   177,   178,   179,   180,    -1,    36,   183,    -1,   185,
     186,   187,   188,   189,    -1,   103,    -1,    -1,   194,   195,
       7,    -1,    -1,   111,     7,    12,    13,    -1,    -1,    12,
      13,    18,     0,     1,   122,     3,    66,    20,    68,    69,
      23,    28,    29,    30,    -1,    28,    29,    30,     4,     5,
       6,     7,    -1,   141,     7,    11,    -1,   233,    -1,    12,
      13,    -1,    18,    19,   152,   153,    -1,    20,    24,    25,
      23,     0,     1,   103,     3,    28,    29,    30,    -1,    -1,
      -1,   111,    -1,    -1,    -1,   173,   174,    -1,   176,   177,
     178,   179,   122,    -1,    36,   183,    -1,   185,   186,   187,
     188,    -1,    -1,    -1,    -1,    -1,   194,   195,     7,    36,
      -1,   141,     7,    12,    13,    -1,    -1,    12,    13,    18,
      -1,    -1,   152,   153,    66,    20,    68,    69,    23,    28,
      29,    30,    -1,    28,    29,    30,    -1,    79,    -1,    66,
      -1,    68,    69,   173,   174,   233,   176,   177,   178,   179,
     180,    78,    -1,   183,    -1,   185,   186,   187,   188,   189,
      -1,   103,    -1,    -1,   194,   195,    -1,    -1,    -1,   111,
      -1,    -1,    -1,     7,    -1,    -1,   103,    -1,    12,    13,
     122,    -1,    -1,    -1,   111,     7,    20,    36,    -1,    -1,
      12,    13,    -1,    -1,    28,   122,    30,    -1,    20,   141,
      -1,    23,    -1,   233,    -1,    -1,    28,    29,    30,    -1,
     152,   153,    -1,    -1,   141,    -1,     7,    66,    -1,    68,
      69,    12,    13,    -1,    -1,   152,   153,    18,    77,    -1,
      -1,   173,   174,    -1,   176,   177,    -1,    28,    29,    30,
      -1,   183,    -1,   185,   186,    -1,   173,   174,    -1,   176,
      -1,    -1,   194,   195,   103,     7,   183,    -1,   185,     7,
      12,    13,   111,    -1,    12,    13,    18,   194,   195,    -1,
      -1,    -1,    20,   122,    -1,    23,    28,    29,    30,     7,
      28,    29,    30,    -1,    12,    13,    -1,    -1,     7,    -1,
      18,   233,   141,    12,    13,    -1,    -1,    -1,    -1,    18,
      28,    29,    30,   152,   153,    -1,   233,    -1,    -1,    28,
      29,    30,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,   173,   174,    15,    16,    17,    18,
      19,    -1,    21,    22,   183,    24,    25,    26,    -1,    -1,
      -1,     4,     5,     6,     7,   194,   195,     1,    11,     3,
       4,     5,     6,     7,     8,     9,    19,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,   233,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    26,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    26,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      26,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    26,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    26,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    26,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      26,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    26,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    26,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,    26,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    -1,    21,    22,    -1,    24,    25,
      26,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,    26,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    -1,    21,    22,    -1,    24,    25,    26,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,    21,
      22,    -1,    24,    25,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,     1,    24,    25,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    -1,     1,    24,
      25,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    21,     7,
      -1,    24,    25,     7,    12,    13,    -1,    -1,    12,    13,
      -1,    -1,    20,    -1,    -1,    23,    20,    -1,    -1,    23,
      28,    29,    30,     7,    28,    29,    30,     7,    12,    13,
      -1,    -1,    12,    13,    -1,    -1,    20,    -1,    -1,    23,
      20,    -1,    -1,    23,    28,    29,    30,     7,    28,    29,
      30,     7,    12,    13,    -1,    -1,    12,    13,    -1,    -1,
      20,    -1,    -1,    23,    20,    -1,    -1,    23,    28,    29,
      30,     7,    28,    29,    30,     7,    12,    13,    -1,    -1,
      12,    13,    -1,    -1,    20,    -1,    -1,    23,    20,    -1,
      -1,    23,    28,    29,    30,     7,    28,    29,    30,     7,
      12,    13,     7,    -1,    12,    13,    18,    12,    13,    -1,
      18,    -1,    -1,    18,    -1,    -1,    28,    29,    30,    -1,
      28,    29,    30,    28,    29,    30,     7,    -1,    -1,     7,
      -1,    12,    13,     7,    12,    13,    -1,    18,    12,    13,
      18,    -1,    -1,    -1,    18,    -1,    -1,    28,    29,    30,
      28,    29,    30,     7,    28,    29,    30,     7,    12,    13,
       7,    -1,    12,    13,    18,    12,    13,    -1,    18,    -1,
      -1,    18,    -1,    -1,    28,    29,    30,    -1,    28,    29,
      30,    28,    29,    30,     7,    -1,    -1,     7,    -1,    12,
      13,     7,    12,    13,    -1,    18,    12,    13,    -1,    -1,
      20,    -1,    -1,    -1,    20,    28,    29,    30,    28,    29,
      30,     7,    28,    29,    30,     7,    12,    13,    -1,    -1,
      12,    13,    -1,    -1,    20,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    28,    29,    30,     7,    28,    29,    30,     7,
      12,    13,    -1,    -1,    12,    13,    -1,    -1,    20,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    28,    29,    30,     7,
      28,    29,    30,     7,    12,    13,    -1,    -1,    12,    13,
      -1,    -1,    20,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      28,    29,    30,     7,    28,    29,    30,     7,    12,    13,
      -1,    -1,    12,    13,    -1,    -1,    20,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    28,    29,    30,     7,    28,    29,
      30,     7,    12,    13,    -1,    -1,    12,    13,    -1,    -1,
      20,    -1,    -1,    -1,    20,    -1,    -1,    -1,    28,    29,
      30,     7,    28,    29,    30,     7,    12,    13,    -1,    -1,
      12,    13,    -1,    -1,    20,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    28,    29,    30,     7,    28,    29,    30,     7,
      12,    13,    -1,    -1,    12,    13,    -1,    -1,    20,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    28,    29,    30,     7,
      28,    29,    30,    -1,    12,    13,    -1,    -1,     4,     5,
       6,     7,    20,    -1,    10,    11,    -1,    -1,    -1,    -1,
      28,    -1,    30,    19,     4,     5,     6,     7,    24,    25,
      -1,    11,    -1,    -1,     4,     5,     6,     7,    -1,    19,
      20,    11,    -1,    -1,    24,    25,    -1,    -1,    18,    19,
       4,     5,     6,     7,    24,    25,    10,    11,    -1,     4,
       5,     6,     7,    -1,    -1,    19,    11,    -1,    -1,    -1,
      24,    25,    -1,    -1,    19,     4,     5,     6,     7,    24,
      25,    -1,    11,    -1,     4,     5,     6,     7,    -1,    -1,
      19,    11,    -1,    -1,    -1,    24,    25,    -1,    -1,    19,
       4,     5,     6,     7,    24,    25,    -1,    11,    -1,     4,
       5,     6,     7,    -1,    -1,    19,    11,    -1,    -1,    -1,
      24,    25,    -1,    -1,    19,     4,     5,     6,     7,    24,
      25,    -1,    11,    -1,     4,     5,     6,     7,    -1,    -1,
      19,    11,    -1,     4,     5,     6,     7,    -1,    -1,    19,
      11,    -1,     4,     5,     6,    -1,    -1,    -1,    19,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    32,    33,    34,    35,    36,    11,     0,
      33,    18,    19,     3,    37,    38,    39,    11,    20,    23,
      21,    42,    38,     1,     3,     4,     5,     6,     7,     8,
       9,    11,    15,    16,    17,    18,    19,    22,    24,    25,
      35,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    62,    11,    11,    58,    19,    19,    14,    19,    19,
      19,    41,    49,    43,    43,    22,    18,    30,    12,    13,
       7,    28,    29,    57,    11,    10,    50,    49,    50,    60,
      61,    50,    49,    20,    51,    52,    53,    54,    54,    55,
      20,    20,    20,    23,    20,    20,    18,    61,    40,    49,
      26,    18,    40,    49,    20,    40,    21,     4,     5,     6,
       7,    11,    19,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    62,    18,    11,     4,     5,     6,     7,
      11,    19,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    62,    30,    30,     1,     8,     9,    15,    16,    17,
      18,    21,    41,    42,    44,    45,    46,    47,    48,    49,
      22,    43,    58,    14,    19,    49,    12,    13,     7,    28,
      29,    57,    58,    19,    49,    12,    13,     7,    28,    29,
      57,    51,    51,    19,    19,    19,    19,    41,    22,    43,
      18,    22,    49,    60,    20,    52,    53,    54,    54,    55,
      60,    20,    52,    53,    54,    54,    55,    11,    10,    50,
      50,    49,    22,    20,    20,    20,    20,    20,    20,    18,
      40,    49,    26,    18,    40,    49,    20,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    35,    36,
      37,    37,    38,    38,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    41,    41,    42,    42,    43,    43,    43,
      43,    44,    44,    45,    46,    47,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    53,    53,    53,    54,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    58,
      58,    59,    60,    60,    61,    61,    62,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       1,     0,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     2,     2,     1,
       1,     5,     7,     9,     2,     4,     4,     4,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       1,     2,     1,     1,     1,     2,     1,     3,     1,     1,
       1,     4,     1,     0,     3,     1,     1,     1,     1
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
  case 2: /* program: declList  */
#line 81 "src/C_IPL_Syntax.y"
             {
        abstract_tree = populate_node("Topo do Programa");
        abstract_tree->child_1 = (yyvsp[0].node);    
    }
#line 2022 "src/C_IPL_Syntax.tab.c"
    break;

  case 3: /* declList: decl declList  */
#line 88 "src/C_IPL_Syntax.y"
                  {
        (yyval.node) = populate_node("Lista de Declarações");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2032 "src/C_IPL_Syntax.tab.c"
    break;

  case 4: /* declList: decl  */
#line 93 "src/C_IPL_Syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);    
    }
#line 2040 "src/C_IPL_Syntax.tab.c"
    break;

  case 5: /* decl: varDecl  */
#line 99 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2048 "src/C_IPL_Syntax.tab.c"
    break;

  case 6: /* decl: funDecl  */
#line 102 "src/C_IPL_Syntax.y"
              {
        (yyval.node) = (yyvsp[0].node); 
    }
#line 2056 "src/C_IPL_Syntax.tab.c"
    break;

  case 7: /* decl: error  */
#line 105 "src/C_IPL_Syntax.y"
           { populate_node("Erro"); }
#line 2062 "src/C_IPL_Syntax.tab.c"
    break;

  case 8: /* varDecl: TYPE ID ';'  */
#line 109 "src/C_IPL_Syntax.y"
                {
        Node* type_node = populate_node("Tipo da variável");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = (yyvsp[-2].token);

        (yyval.node) = populate_node("Declaração de Variável");
        (yyval.node)->child_1 = type_node; 
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token);

        pushSymbol (
            &symbol_root,
            (yyvsp[-1].token).line, 
            (yyvsp[-1].token).column, 
            (yyvsp[-1].token).scope,
            (yyvsp[-1].token).content,
            type_node->token->content,
            0     
        );
        position++;
    }
#line 2088 "src/C_IPL_Syntax.tab.c"
    break;

  case 9: /* funDecl: TYPE ID '(' params ')' compoundStmt  */
#line 133 "src/C_IPL_Syntax.y"
                                        {
        Node* type_node = populate_node("Tipo da Função");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = (yyvsp[-5].token);

        (yyval.node) = populate_node("Declaração de Função");
        (yyval.node)->child_1 = type_node; 
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-4].token);
        (yyval.node)->child_2 = (yyvsp[-2].node);
        (yyval.node)->child_3 = (yyvsp[0].node);

        pushSymbol (
            &symbol_root,
            (yyvsp[-4].token).line, 
            (yyvsp[-4].token).column, 
            (yyvsp[-4].token).scope,
            (yyvsp[-4].token).content,
            type_node->token->content,
            1     
        );
        position++; 
    }
#line 2116 "src/C_IPL_Syntax.tab.c"
    break;

  case 10: /* params: paramList  */
#line 159 "src/C_IPL_Syntax.y"
              {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2124 "src/C_IPL_Syntax.tab.c"
    break;

  case 11: /* params: %empty  */
#line 162 "src/C_IPL_Syntax.y"
      {(yyval.node) = NULL;}
#line 2130 "src/C_IPL_Syntax.tab.c"
    break;

  case 12: /* paramList: paramTypeList ',' paramList  */
#line 166 "src/C_IPL_Syntax.y"
                                {
        (yyval.node) = populate_node("Lista de Parâmetros");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2140 "src/C_IPL_Syntax.tab.c"
    break;

  case 13: /* paramList: paramTypeList  */
#line 171 "src/C_IPL_Syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2148 "src/C_IPL_Syntax.tab.c"
    break;

  case 14: /* paramTypeList: TYPE ID  */
#line 177 "src/C_IPL_Syntax.y"
            {
        Node* type_node = populate_node("Tipo da Função");
        type_node->token = (Token*) malloc(sizeof(Token));
        *type_node->token = (yyvsp[-1].token);

        (yyval.node) = populate_node("Declaração de Parâmetro");
        (yyval.node)->child_1 = type_node; 
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);

        pushSymbol (
            &symbol_root,
            (yyvsp[0].token).line, 
            (yyvsp[0].token).column, 
            (yyvsp[0].token).scope,
            (yyvsp[0].token).content,
            type_node->token->content,
            0     
        );
        position++;
    }
#line 2174 "src/C_IPL_Syntax.tab.c"
    break;

  case 15: /* stmt: expStmt  */
#line 201 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2182 "src/C_IPL_Syntax.tab.c"
    break;

  case 16: /* stmt: compoundStmt  */
#line 204 "src/C_IPL_Syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2190 "src/C_IPL_Syntax.tab.c"
    break;

  case 17: /* stmt: ifStmt  */
#line 207 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2198 "src/C_IPL_Syntax.tab.c"
    break;

  case 18: /* stmt: forStmt  */
#line 210 "src/C_IPL_Syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2206 "src/C_IPL_Syntax.tab.c"
    break;

  case 19: /* stmt: returnStmt  */
#line 213 "src/C_IPL_Syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2214 "src/C_IPL_Syntax.tab.c"
    break;

  case 20: /* stmt: readFunc  */
#line 216 "src/C_IPL_Syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2222 "src/C_IPL_Syntax.tab.c"
    break;

  case 21: /* stmt: writeFunc  */
#line 219 "src/C_IPL_Syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2230 "src/C_IPL_Syntax.tab.c"
    break;

  case 22: /* stmt: error  */
#line 222 "src/C_IPL_Syntax.y"
            { populate_node("Erro"); }
#line 2236 "src/C_IPL_Syntax.tab.c"
    break;

  case 23: /* expStmt: exp ';'  */
#line 226 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 2244 "src/C_IPL_Syntax.tab.c"
    break;

  case 24: /* expStmt: ';'  */
#line 229 "src/C_IPL_Syntax.y"
          {(yyval.node) = NULL;}
#line 2250 "src/C_IPL_Syntax.tab.c"
    break;

  case 25: /* compoundStmt: '{' localDecls '}'  */
#line 233 "src/C_IPL_Syntax.y"
                       {
        (yyval.node) = (yyvsp[-1].node);
    }
#line 2258 "src/C_IPL_Syntax.tab.c"
    break;

  case 26: /* compoundStmt: '{' '}'  */
#line 236 "src/C_IPL_Syntax.y"
              {(yyval.node) = NULL;}
#line 2264 "src/C_IPL_Syntax.tab.c"
    break;

  case 27: /* localDecls: varDecl localDecls  */
#line 240 "src/C_IPL_Syntax.y"
                       {
        (yyval.node) = populate_node("Declaração de Variáveis");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2274 "src/C_IPL_Syntax.tab.c"
    break;

  case 28: /* localDecls: stmt localDecls  */
#line 245 "src/C_IPL_Syntax.y"
                      {
        (yyval.node) = populate_node("Declaração de Statement");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2284 "src/C_IPL_Syntax.tab.c"
    break;

  case 29: /* localDecls: varDecl  */
#line 250 "src/C_IPL_Syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2292 "src/C_IPL_Syntax.tab.c"
    break;

  case 30: /* localDecls: stmt  */
#line 253 "src/C_IPL_Syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2300 "src/C_IPL_Syntax.tab.c"
    break;

  case 31: /* ifStmt: KW_IF '(' logExp ')' stmt  */
#line 259 "src/C_IPL_Syntax.y"
                                         {
        (yyval.node) = populate_node("Função IF");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2310 "src/C_IPL_Syntax.tab.c"
    break;

  case 32: /* ifStmt: KW_IF '(' logExp ')' stmt KW_ELSE stmt  */
#line 264 "src/C_IPL_Syntax.y"
                                             {
        (yyval.node) = populate_node("Função IF ELSE");
        (yyval.node)->child_1 = (yyvsp[-4].node);
        (yyval.node)->child_2 = (yyvsp[-2].node);
        (yyval.node)->child_3 = (yyvsp[0].node);
    }
#line 2321 "src/C_IPL_Syntax.tab.c"
    break;

  case 33: /* forStmt: KW_FOR '(' exp ';' exp ';' exp ')' stmt  */
#line 273 "src/C_IPL_Syntax.y"
                                            {
        (yyval.node) = populate_node("Loop For");
        (yyval.node)->child_1 = (yyvsp[-6].node);
        (yyval.node)->child_2 = (yyvsp[-4].node);
        (yyval.node)->child_3 = (yyvsp[-2].node);
        (yyval.node)->child_4 = (yyvsp[0].node);
    }
#line 2333 "src/C_IPL_Syntax.tab.c"
    break;

  case 34: /* returnStmt: KW_RETURN expStmt  */
#line 283 "src/C_IPL_Syntax.y"
                      {
        (yyval.node) = populate_node("Retorno");
        (yyval.node)->child_1 = (yyvsp[0].node); 
    }
#line 2342 "src/C_IPL_Syntax.tab.c"
    break;

  case 35: /* readFunc: READ '(' ID ')'  */
#line 290 "src/C_IPL_Syntax.y"
                    {
        (yyval.node) = populate_node("Leitura");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
    }
#line 2352 "src/C_IPL_Syntax.tab.c"
    break;

  case 36: /* writeFunc: WRITE '(' logExp ')'  */
#line 298 "src/C_IPL_Syntax.y"
                         {
        (yyval.node) = populate_node("Escrita de uma Expressão");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-3].token);
        (yyval.node)->child_1 = (yyvsp[-1].node); 
    }
#line 2363 "src/C_IPL_Syntax.tab.c"
    break;

  case 37: /* writeFunc: WRITE '(' STRING ')'  */
#line 304 "src/C_IPL_Syntax.y"
                           {

        Node* string_node = populate_node("String");
        string_node->token = (Token*) malloc(sizeof(Token));
        *string_node->token = (yyvsp[-1].token);

        (yyval.node) = populate_node("Escrita de uma String");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-3].token);
        (yyval.node)->child_1 = string_node; 
    }
#line 2379 "src/C_IPL_Syntax.tab.c"
    break;

  case 38: /* exp: ID ASSIGN exp  */
#line 318 "src/C_IPL_Syntax.y"
                  {
        (yyval.node) = populate_node("Atribuição de variável");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-2].token); 
        (yyval.node)->child_1 = (yyvsp[0].node);  
    }
#line 2390 "src/C_IPL_Syntax.tab.c"
    break;

  case 39: /* exp: logExp  */
#line 324 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2398 "src/C_IPL_Syntax.tab.c"
    break;

  case 40: /* logExp: logExp LOGOP listExp  */
#line 330 "src/C_IPL_Syntax.y"
                         {
        (yyval.node) = populate_node("Operação Lógica");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2410 "src/C_IPL_Syntax.tab.c"
    break;

  case 41: /* logExp: listExp  */
#line 337 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2418 "src/C_IPL_Syntax.tab.c"
    break;

  case 42: /* listExp: listExp BIN_LISTOP relExp  */
#line 343 "src/C_IPL_Syntax.y"
                              {
        (yyval.node) = populate_node("Operação Binária de Listas");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2430 "src/C_IPL_Syntax.tab.c"
    break;

  case 43: /* listExp: relExp  */
#line 350 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2438 "src/C_IPL_Syntax.tab.c"
    break;

  case 44: /* relExp: relExp RELOP sumExp  */
#line 356 "src/C_IPL_Syntax.y"
                        {
        (yyval.node) = populate_node("Operação Relacional");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2450 "src/C_IPL_Syntax.tab.c"
    break;

  case 45: /* relExp: sumExp  */
#line 363 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2458 "src/C_IPL_Syntax.tab.c"
    break;

  case 46: /* sumExp: sumExp SUMOP mulExp  */
#line 369 "src/C_IPL_Syntax.y"
                        {
        (yyval.node) = populate_node("Operação de Soma");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2470 "src/C_IPL_Syntax.tab.c"
    break;

  case 47: /* sumExp: sumExp MINUS mulExp  */
#line 376 "src/C_IPL_Syntax.y"
                          {
        (yyval.node) = populate_node("Operação de Subtração");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2482 "src/C_IPL_Syntax.tab.c"
    break;

  case 48: /* sumExp: mulExp  */
#line 383 "src/C_IPL_Syntax.y"
             {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2490 "src/C_IPL_Syntax.tab.c"
    break;

  case 49: /* mulExp: mulExp MULOP unaryListExp  */
#line 389 "src/C_IPL_Syntax.y"
                              {
        (yyval.node) = populate_node("Operação de Multiplicação");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2502 "src/C_IPL_Syntax.tab.c"
    break;

  case 50: /* mulExp: unaryListExp  */
#line 396 "src/C_IPL_Syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2510 "src/C_IPL_Syntax.tab.c"
    break;

  case 51: /* unaryListExp: unaryListOp unaryExp  */
#line 402 "src/C_IPL_Syntax.y"
                         {
        (yyval.node) = populate_node("Operação Unária de Lista");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);   
    }
#line 2520 "src/C_IPL_Syntax.tab.c"
    break;

  case 52: /* unaryListExp: unaryExp  */
#line 407 "src/C_IPL_Syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2528 "src/C_IPL_Syntax.tab.c"
    break;

  case 53: /* unaryListOp: UN_LISTOP  */
#line 413 "src/C_IPL_Syntax.y"
              {    
        (yyval.node) = populate_node("Operador Unário de Lista");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);    
    }
#line 2538 "src/C_IPL_Syntax.tab.c"
    break;

  case 54: /* unaryListOp: EXCLAM  */
#line 418 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = populate_node("Ponto de Exclamação");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2548 "src/C_IPL_Syntax.tab.c"
    break;

  case 55: /* unaryExp: MINUS factor  */
#line 426 "src/C_IPL_Syntax.y"
                 {
        (yyval.node) = populate_node("Expressão Aritmética Unária");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token);
        (yyval.node)->child_1 = (yyvsp[0].node);    
    }
#line 2559 "src/C_IPL_Syntax.tab.c"
    break;

  case 56: /* unaryExp: factor  */
#line 432 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2567 "src/C_IPL_Syntax.tab.c"
    break;

  case 57: /* factor: '(' exp ')'  */
#line 438 "src/C_IPL_Syntax.y"
                {
       (yyval.node) = (yyvsp[-1].node); 
    }
#line 2575 "src/C_IPL_Syntax.tab.c"
    break;

  case 58: /* factor: call  */
#line 441 "src/C_IPL_Syntax.y"
           {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2583 "src/C_IPL_Syntax.tab.c"
    break;

  case 59: /* factor: constant  */
#line 444 "src/C_IPL_Syntax.y"
               {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2591 "src/C_IPL_Syntax.tab.c"
    break;

  case 60: /* factor: ID  */
#line 447 "src/C_IPL_Syntax.y"
         {
        (yyval.node) = populate_node("ID");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2601 "src/C_IPL_Syntax.tab.c"
    break;

  case 61: /* call: ID '(' args ')'  */
#line 455 "src/C_IPL_Syntax.y"
                    {
        (yyval.node) = populate_node("Chamada de Função"); 
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-3].token);
        (yyval.node)->child_1 = (yyvsp[-1].node);    
    }
#line 2612 "src/C_IPL_Syntax.tab.c"
    break;

  case 62: /* args: argList  */
#line 464 "src/C_IPL_Syntax.y"
            {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2620 "src/C_IPL_Syntax.tab.c"
    break;

  case 63: /* args: %empty  */
#line 467 "src/C_IPL_Syntax.y"
      {(yyval.node) = NULL;}
#line 2626 "src/C_IPL_Syntax.tab.c"
    break;

  case 64: /* argList: logExp ',' argList  */
#line 471 "src/C_IPL_Syntax.y"
                       {
        (yyval.node) = populate_node("Lista de Argumentos");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2636 "src/C_IPL_Syntax.tab.c"
    break;

  case 65: /* argList: logExp  */
#line 476 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2644 "src/C_IPL_Syntax.tab.c"
    break;

  case 66: /* constant: INT  */
#line 482 "src/C_IPL_Syntax.y"
        {
        (yyval.node) = populate_node("Int");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2654 "src/C_IPL_Syntax.tab.c"
    break;

  case 67: /* constant: FLOAT  */
#line 487 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = populate_node("Float");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2664 "src/C_IPL_Syntax.tab.c"
    break;

  case 68: /* constant: NIL  */
#line 492 "src/C_IPL_Syntax.y"
          {
        (yyval.node) = populate_node("NIL");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2674 "src/C_IPL_Syntax.tab.c"
    break;


#line 2678 "src/C_IPL_Syntax.tab.c"

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

#line 499 "src/C_IPL_Syntax.y"


extern void yyerror(const char* e) {
    printf(RED"[Linha: %d - Coluna: %d] %s\n"REGULAR, prev_line, prev_column, e);
    errors++;
}  

int main(int argc, char *argv[]){
    yyin = fopen(argv[1], "r");
    argc++;
    if(yyin){
        yyparse();
        if (errors == 0) {
            print_node(abstract_tree, 1);
            print_table_header();
            for (int i = 0; i < position; i++) { 
                print_symbol(symbol_root);
                popSymbol(&symbol_root);
            }
            pop_scope(&scope_root);
            printf("\n");
        } else {
            printf("\nOpa, foram encontrados "RED"%d"REGULAR" erros no arquivo. A árvore abstrata não será mostrada caso haja erros!\n\n", errors);
            print_table_header();
            for (int i = 0; i < position; i++) { 
                print_symbol(symbol_root);
                popSymbol(&symbol_root);
            }
            pop_scope(&scope_root);
            printf("\n");
        }
    }
    else {
        printf("Argumento inválido ou inexistente. Tenha certeza que o caminho do arquivo passado como argumento está certo!\n");
        exit(0);
    }
    fclose(yyin);
    yylex_destroy();
    return 0;
}

