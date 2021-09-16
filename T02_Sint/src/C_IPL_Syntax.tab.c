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
#define YYLAST   2413

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

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
     216,   219,   222,   226,   229,   233,   239,   244,   249,   252,
     258,   263,   272,   282,   289,   297,   303,   317,   323,   329,
     336,   342,   349,   355,   362,   368,   375,   382,   388,   395,
     401,   406,   412,   417,   425,   431,   437,   440,   443,   446,
     454,   463,   466,   470,   475,   481,   486,   491
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

#define YYPACT_NINF (-152)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-68)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,   267,    -3,    25,    50,   273,   320,   344,    61,  -152,
      64,   352,     0,    60,    73,    82,    45,    95,    63,   111,
    1805,   374,   120,  1305,   156,   665,   820,  1942,   324,   171,
     177,     5,   181,   185,  2258,  1330,  2319,   335,   496,  1355,
    1380,  1405,  1430,   153,  1455,  1480,  1505,  1530,  1555,   169,
      -2,    24,    -8,    19,  1962,  1966,   538,  1969,  1993,  1996,
    2000,   202,    78,  2020,   217,  2268,  2335,  2284,  2344,  2335,
    1580,   210,   211,   225,   380,  1605,  2360,  2360,  2360,  2360,
    2360,  2360,  2024,   219,   240,    43,   244,    47,   243,   251,
      79,   257,  2027,   205,   125,   297,  2051,  2054,  2058,  1630,
    1655,  1680,  2369,  2078,   681,  2335,   265,   781,   268,  1827,
    2319,  1705,   274,  1827,  1730,  1805,  2082,  2085,  2109,   384,
      32,  2319,    80,   109,   149,   711,  2112,  2123,  2385,  2137,
    2148,  2151,  2162,  1755,   379,    75,   288,   459,   420,   236,
    2319,   100,   201,    46,   551,   620,  2394,   720,   745,  1842,
    1846,  2344,  2369,   836,   278,   284,   287,   293,  2294,   863,
    1805,   889,   915,   941,   967,   993,  1019,  1045,   295,   327,
    2176,  2319,  2284,   336,  2344,  2344,  2344,  2344,  2344,  2187,
    1866,  2284,   345,  2369,  2369,  2369,  2369,  2369,  1870,   220,
     249,   355,  2310,  2344,  2335,  1071,   362,  1097,  1780,   376,
     377,  2190,   179,  2240,  2201,  2215,  2226,   381,  1890,   206,
     182,  1894,  1914,  1918,   382,   385,   133,   168,   392,  1123,
    2229,  1938,  1149,  1175,  1201,   681,  2335,  1227,   397,   681,
    2319,  1253,   399,   681,  1279
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
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,   395,  -152,   141,  -152,  -152,   401,  -152,   -98,
     -32,   -18,   -26,   -97,   -61,   -49,   -48,   -47,    12,   444,
     283,   643,   563,   426,   346,   483,   266,   -27,   106,  -151,
     319,   186
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    39,     7,    14,    15,    16,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    88,
      89,    60
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    63,    70,    13,   -42,    78,   107,   163,     8,   130,
     -42,   111,   -59,    72,    73,   114,   -38,   -59,   -59,    66,
     -11,   200,   -42,   -59,    67,     9,    79,     1,    76,     2,
     207,   -44,   -44,   -59,   -59,   -59,    77,   -44,   130,   -59,
     148,   130,   -40,   164,   -59,   -59,   171,    80,    71,   -44,
      -2,   172,   -59,   185,   -40,   165,   166,   167,   -44,   -44,
     -59,   -59,   -59,   101,    -3,   -13,   -44,   -64,    19,   -44,
     102,    17,   161,   151,   186,   148,   -44,   152,    86,    11,
      12,    91,   -65,   130,    20,   -59,   162,   -65,   -65,   169,
     -59,   -59,   170,    18,   130,   -65,   -59,    67,   -65,   104,
     -38,   130,   -10,   -65,   -65,   -65,   -59,   -59,   -59,   151,
     151,   180,   183,   130,    13,   -14,   168,   108,   -14,   148,
     -40,   174,   112,   -40,   130,   148,   195,   227,   163,   -40,
     -40,   231,   163,   173,   196,   234,   163,   -41,    78,   -40,
     -12,     6,   131,   -41,   130,   148,     6,   130,   130,   130,
     130,   130,   182,   224,   148,   -41,   148,   148,   148,   148,
     148,   -42,   175,   151,   164,   130,   130,    61,   164,   -42,
     168,   131,   164,   149,   131,    74,   165,   166,   167,   -42,
     165,   166,   167,   199,   165,   166,   167,    75,   225,   185,
      64,   -41,   175,   161,   -43,   -43,    65,   161,   151,   -41,
      68,   161,   -43,   130,    69,   -43,   218,   162,   149,   -41,
     186,   162,   -43,   -42,   184,   162,   131,    77,   -41,   184,
     133,   -42,   132,   -39,   -42,   131,   -41,   131,    83,   -41,
      92,   -42,   174,   -26,   131,   -39,   -41,   168,   228,    99,
     -39,   168,   232,   -59,   149,   168,   131,   -27,   -59,   -59,
     -39,   132,   149,   150,   132,   181,   -59,   131,   149,   -59,
     100,   183,   -37,   103,   -59,   -59,   -59,    -7,    -7,   -39,
      -7,   -61,   -39,    -4,     1,   105,     2,   131,   149,   -39,
     131,   131,   131,   131,   131,   -63,   110,   149,   150,   149,
     149,   149,   149,   149,   113,   -66,   132,   191,   131,   131,
     -66,   -66,   129,   192,    79,   132,   193,   132,   -66,   -43,
     -43,   -66,   194,   197,   132,   -43,   -66,   -66,   -66,   123,
      -5,    -5,    82,    -5,   150,    80,   132,   -43,    25,    26,
      27,   129,   150,   147,   129,    62,   131,   132,   150,   -53,
     -53,   -53,   -53,    36,    -6,    -6,   -53,    -6,   123,   198,
     141,   123,    -8,    -8,   -53,    -8,   201,   132,   150,    93,
     132,   132,   132,   132,   132,   208,   214,   150,   147,   150,
     150,   150,   150,   150,    -9,    -9,   129,    -9,   132,   132,
     -25,   -25,   127,   -25,   219,   141,   -59,   129,   116,   117,
     118,   -59,   -59,   123,   179,   134,   -37,   220,   172,   -59,
      10,   221,   222,   121,   123,   223,   129,   -59,   -59,   -59,
     226,   127,   188,   145,   127,   230,   132,   129,   147,   233,
      22,   106,     0,   123,   135,   136,   137,    98,     0,     0,
       0,   139,     0,     0,   189,   190,     0,   129,   147,   140,
     129,   129,   129,   129,   129,     0,     0,   147,   145,   147,
     147,   147,   147,   147,   123,   141,   127,     0,   129,   129,
       0,     0,   126,     0,   141,     0,   -67,   127,     0,     0,
       0,   -67,   -67,     0,     0,   123,   123,     0,     0,   -67,
     122,     0,   -67,     0,     0,     0,   127,   -67,   -67,   -67,
       0,   126,     0,   144,   126,     0,   129,   127,   145,     0,
     -52,   -52,   -52,   -52,     0,    96,    97,   -52,     0,    85,
       0,    87,    90,   123,     0,   -52,     0,   127,   145,   128,
     127,   127,   127,   127,   206,     0,     0,   145,   144,   145,
     145,   145,   145,   213,     0,     0,   126,     0,   127,   127,
       0,     0,    25,    26,    27,    28,    87,   126,   128,    62,
     146,   128,     0,     0,   122,     0,     0,    36,   -47,     0,
       0,     0,     0,   -47,   -47,   122,   126,     0,     0,     0,
       0,   -47,     0,     0,   -47,     0,   127,   126,   144,   -47,
     187,   -47,     0,     0,   122,   146,     0,     0,     0,     0,
       0,     0,     0,   128,     0,     0,     0,   126,   144,   125,
     126,   126,   204,   205,   128,     0,     0,   144,     0,   144,
     144,   211,   212,     0,     0,   122,    87,     0,   126,   126,
       0,     0,     0,   128,     0,    87,     0,   -49,   125,     0,
     143,   125,   -49,   -49,   128,   146,   216,   217,     0,     0,
     -49,    95,     0,   -49,     0,     0,     0,     0,   -49,   -49,
     -49,     0,     0,     0,   128,   146,   126,   128,   128,   128,
     128,   128,     0,     0,   146,   143,   146,   146,   146,   146,
     146,     0,   -65,   125,   122,   128,   128,   -65,   -65,   124,
       0,     0,   153,   -65,   125,    25,    26,    27,    28,   154,
     155,     0,    31,   -65,   -65,   -65,   156,   157,   158,   159,
      36,     0,   160,   125,     0,    37,    38,     0,   124,     0,
     142,   124,     0,   128,   125,   143,     0,     0,   176,     0,
      94,     0,     0,   -44,   -44,     0,     0,   -51,     0,     0,
       0,   -44,   -51,   -51,   125,   143,     0,   125,   203,   177,
     -51,   -44,     0,   -51,   143,   142,   143,   210,   -51,   -51,
     -51,     0,   -55,   124,     0,   125,   125,   -55,   -55,     0,
       0,     0,     0,     0,   124,   -55,     0,     0,   -55,     0,
       0,     0,     0,   -55,   -55,   -55,     0,     0,     0,     0,
       0,     0,   -30,   124,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   125,   124,   142,   -30,   -30,   -30,   -30,
     -30,     0,   -30,   -30,     0,   -30,   -30,   109,     0,     0,
       0,     0,     0,     0,   124,   142,     0,   202,     0,     0,
       0,     0,     0,     0,   142,     0,   209,   -66,     0,     0,
       0,     0,   -66,   -66,     0,   124,   124,   -22,   -66,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -66,   -66,
     -66,   -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,
     -22,   -22,   -22,     0,   -24,     0,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   124,   -24,     0,     0,     0,   -24,   -24,
     -24,   -24,   -24,     0,   -24,   -24,     0,   -24,   -24,   -24,
     -15,     0,   -15,   -15,   -15,   -15,   -15,   -15,   -15,     0,
     -15,     0,     0,     0,   -15,   -15,   -15,   -15,   -15,     0,
     -15,   -15,     0,   -15,   -15,   -15,   -16,     0,   -16,   -16,
     -16,   -16,   -16,   -16,   -16,     0,   -16,     0,     0,     0,
     -16,   -16,   -16,   -16,   -16,     0,   -16,   -16,     0,   -16,
     -16,   -16,   -17,     0,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,     0,   -17,     0,     0,     0,   -17,   -17,   -17,   -17,
     -17,     0,   -17,   -17,     0,   -17,   -17,   -17,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,     0,   -18,     0,
       0,     0,   -18,   -18,   -18,   -18,   -18,     0,   -18,   -18,
       0,   -18,   -18,   -18,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -19,   -19,     0,   -19,     0,     0,     0,   -19,   -19,
     -19,   -19,   -19,     0,   -19,   -19,     0,   -19,   -19,   -19,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
     -20,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,     0,
     -20,   -20,     0,   -20,   -20,   -20,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,     0,     0,     0,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,
     -21,   -21,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,
     -33,     0,   -33,   -33,     0,   -33,   -33,   -33,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,   -23,     0,
       0,     0,   -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,
       0,   -23,   -23,   -23,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -25,   -25,     0,   -25,     0,     0,     0,   -25,   -25,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,   -25,   -25,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
     -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,     0,
     -34,   -34,     0,   -34,   -34,   -34,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,
     -36,   -36,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,     0,   -35,   -35,   -35,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,     0,
       0,     0,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
       0,   -30,   -30,   229,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,     0,     0,     0,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,     0,   -32,   -32,   -32,   -22,     0,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,     0,   -22,     0,     0,     0,
     -22,   -22,   -22,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,     0,     0,     0,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,     0,   -24,   -24,    23,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,     0,   115,   -28,     0,    37,
      38,    23,     0,    24,    25,    26,    27,    28,    29,    30,
       0,    31,     0,     0,     0,    32,    33,    34,    35,    36,
       0,   115,   -29,     0,    37,    38,   -15,     0,   -15,   -15,
     -15,   -15,   -15,   -15,   -15,     0,   -15,     0,     0,     0,
     -15,   -15,   -15,   -15,   -15,     0,   -15,   -15,     0,   -15,
     -15,   -16,     0,   -16,   -16,   -16,   -16,   -16,   -16,   -16,
       0,   -16,     0,     0,     0,   -16,   -16,   -16,   -16,   -16,
       0,   -16,   -16,     0,   -16,   -16,   -17,     0,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,     0,   -17,     0,     0,     0,
     -17,   -17,   -17,   -17,   -17,     0,   -17,   -17,     0,   -17,
     -17,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
       0,   -18,     0,     0,     0,   -18,   -18,   -18,   -18,   -18,
       0,   -18,   -18,     0,   -18,   -18,   -19,     0,   -19,   -19,
     -19,   -19,   -19,   -19,   -19,     0,   -19,     0,     0,     0,
     -19,   -19,   -19,   -19,   -19,     0,   -19,   -19,     0,   -19,
     -19,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
       0,   -20,     0,     0,     0,   -20,   -20,   -20,   -20,   -20,
       0,   -20,   -20,     0,   -20,   -20,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,   -21,     0,     0,     0,
     -21,   -21,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,
     -21,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
       0,   -33,     0,     0,     0,   -33,   -33,   -33,   -33,   -33,
       0,   -33,   -33,     0,   -33,   -33,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,     0,     0,     0,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,   -23,
     -23,   -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
       0,   -34,     0,     0,     0,   -34,   -34,   -34,   -34,   -34,
       0,   -34,   -34,     0,   -34,   -34,   -36,     0,   -36,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,     0,     0,     0,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,   -36,
     -36,   -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
       0,   -35,     0,     0,     0,   -35,   -35,   -35,   -35,   -35,
       0,   -35,   -35,     0,   -35,   -35,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -31,     0,     0,     0,
     -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,   -31,
     -31,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,     0,     0,     0,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,     0,   -32,   -32,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    -8,    -8,     0,    -8,     0,     0,     0,
      -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,    -8,
      -8,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,     0,     0,     0,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,    23,     0,    24,    25,
      26,    27,    28,    29,    30,     0,    31,     0,     0,     0,
      32,    33,    34,    35,    36,     0,   115,     0,    23,    37,
      38,    25,    26,    27,    28,    29,    30,     0,    31,     0,
       0,     0,    32,    33,    34,    35,    36,     0,   115,   -57,
       0,    37,    38,   -58,   -57,   -57,     0,     0,   -58,   -58,
       0,     0,   -57,     0,     0,   -57,   -58,     0,     0,   -58,
     -57,   -57,   -57,   -54,   -58,   -58,   -58,   -50,   -54,   -54,
       0,     0,   -50,   -50,     0,     0,   -54,     0,     0,   -54,
     -50,     0,     0,   -50,   -54,   -54,   -54,   -56,   -50,   -50,
     -50,   -46,   -56,   -56,     0,     0,   -46,   -46,     0,     0,
     -56,     0,     0,   -56,   -46,     0,     0,   -46,   -56,   -56,
     -56,   -45,   -46,   187,   -46,   -48,   -45,   -45,     0,     0,
     -48,   -48,     0,     0,   -45,     0,     0,   -45,   -48,     0,
       0,   -48,   -45,   187,   -45,   -60,   -48,   -48,   -48,   -67,
     -60,   -60,     0,     0,   -67,   -67,     0,     0,   -60,     0,
     -67,   -60,     0,     0,     0,     0,   -60,   -60,   -60,   -47,
     -67,   -67,   -67,   -49,   -47,   -47,   -51,     0,   -49,   -49,
     -47,   -51,   -51,     0,   -49,     0,     0,   -51,     0,     0,
     -47,    81,   -47,     0,   -49,   -49,   -49,   -51,   -51,   -51,
     -55,     0,     0,   -57,     0,   -55,   -55,   -58,   -57,   -57,
       0,   -55,   -58,   -58,   -57,     0,     0,     0,   -58,     0,
       0,   -55,   -55,   -55,   -57,   -57,   -57,   -54,   -58,   -58,
     -58,   -50,   -54,   -54,   -56,     0,   -50,   -50,   -54,   -56,
     -56,     0,   -50,     0,     0,   -56,     0,     0,   -54,   -54,
     -54,     0,   -50,   -50,   -50,   -56,   -56,   -56,   -46,     0,
       0,   -45,     0,   -46,   -46,   -48,   -45,   -45,     0,   -46,
     -48,   -48,   -45,     0,     0,     0,   -48,     0,     0,   -46,
      81,   -46,   -45,    81,   -45,   -60,   -48,   -48,   -48,   -65,
     -60,   -60,   -66,     0,   -65,   -65,   -60,   -66,   -66,     0,
       0,     0,   -65,     0,     0,   -66,   -60,   -60,   -60,     0,
     -65,   -65,   -65,   -66,   -66,   -66,   -67,     0,     0,   -47,
       0,   -67,   -67,     0,   -47,   -47,     0,     0,     0,   -67,
     -49,     0,   -47,     0,     0,   -49,   -49,   -67,   -67,   -67,
     -47,   178,   -47,   -49,   -51,     0,     0,     0,     0,   -51,
     -51,   -49,   -49,   -49,     0,   -55,     0,   -51,   -57,     0,
     -55,   -55,     0,   -57,   -57,   -51,   -51,   -51,   -55,   -58,
       0,   -57,     0,     0,   -58,   -58,   -55,   -55,   -55,   -57,
     -57,   -57,   -58,   -54,     0,     0,     0,     0,   -54,   -54,
     -58,   -58,   -58,     0,   -50,     0,   -54,   -56,     0,   -50,
     -50,     0,   -56,   -56,   -54,   -54,   -54,   -50,   -46,     0,
     -56,     0,     0,   -46,   -46,   -50,   -50,   -50,   -56,   -56,
     -56,   -46,   -45,     0,     0,     0,     0,   -45,   -45,   -46,
     178,   -46,     0,   -48,     0,   -45,   -60,     0,   -48,   -48,
       0,   -60,   -60,   -45,   178,   -45,   -48,   176,     0,   -60,
       0,     0,   -43,   -43,   -48,   -48,   -48,   -60,   -60,   -60,
     -43,     0,    25,    26,    27,    28,     0,     0,   177,    31,
     -43,     0,   116,   117,   118,   119,    35,    36,    84,   134,
       0,     0,    37,    38,     0,     0,     0,   121,   135,   136,
     137,   138,    37,    38,     0,   139,     0,     0,    25,    26,
      27,    28,     0,   140,   -62,    31,     0,     0,    37,    38,
       0,     0,   159,    36,   116,   117,   118,   119,    37,    38,
     215,   134,     0,   116,   117,   118,   119,     0,     0,   121,
     120,     0,     0,     0,    37,    38,     0,     0,   121,    25,
      26,    27,    28,    37,    38,     0,    31,     0,   116,   117,
     118,   119,     0,     0,    36,   134,     0,     0,     0,    37,
      38,     0,     0,   121,    25,    26,    27,    28,    37,    38,
       0,    62,     0,   135,   136,   137,   138,     0,     0,    36,
     139,     0,     0,     0,    37,    38,     0,     0,   140,   116,
     117,   118,   119,    37,    38,     0,   134,     0,   135,   136,
     137,   138,     0,     0,   121,   139,     0,     0,     0,     0,
       0,     0,     0,   140
};

static const yytype_int16 yycheck[] =
{
      18,    28,    34,     3,    12,    13,   104,   104,    11,    36,
      18,   109,     7,    39,    40,   113,    18,    12,    13,    14,
      20,   172,    30,    18,    19,     0,     7,     1,    30,     3,
     181,    12,    13,    28,    29,    30,    12,    18,    65,     7,
      67,    68,    18,   104,    12,    13,    14,    28,    36,    30,
       0,    19,    20,     7,    30,   104,   104,   104,    12,    13,
      28,    29,    30,    20,     0,    20,    20,    20,    23,    23,
      23,    11,   104,    30,    28,   102,    30,    30,    66,    18,
      19,    69,     7,   110,    21,     7,   104,    12,    13,   115,
      12,    13,   119,    20,   121,    20,    18,    19,    23,    20,
      20,   128,    20,    28,    29,    30,    28,    29,    30,    30,
      30,   138,    12,   140,     3,    20,   104,   105,    23,   146,
      20,    12,   110,    23,   151,   152,   158,   225,   225,    20,
      30,   229,   229,   121,   160,   233,   233,    12,    13,    30,
      20,     0,    36,    18,   171,   172,     5,   174,   175,   176,
     177,   178,   140,    20,   181,    30,   183,   184,   185,   186,
     187,    12,    13,    30,   225,   192,   193,    11,   229,    20,
     158,    65,   233,    67,    68,    22,   225,   225,   225,    30,
     229,   229,   229,   171,   233,   233,   233,    18,    20,     7,
      19,    12,    13,   225,    12,    13,    19,   229,    30,    20,
      19,   233,    20,   230,    19,    23,   194,   225,   102,    30,
      28,   229,    30,    12,    13,   233,   110,    12,    12,    13,
      18,    20,    36,    18,    23,   119,    20,   121,    11,    23,
      20,    30,    12,    22,   128,    30,    30,   225,   226,    20,
      20,   229,   230,     7,   138,   233,   140,    22,    12,    13,
      30,    65,   146,    67,    68,    19,    20,   151,   152,    23,
      20,    12,    18,    20,    28,    29,    30,     0,     1,    20,
       3,    20,    23,     0,     1,    18,     3,   171,   172,    30,
     174,   175,   176,   177,   178,    20,    18,   181,   102,   183,
     184,   185,   186,   187,    20,     7,   110,    19,   192,   193,
      12,    13,    36,    19,     7,   119,    19,   121,    20,    12,
      13,    23,    19,    18,   128,    18,    28,    29,    30,    36,
       0,     1,    56,     3,   138,    28,   140,    30,     4,     5,
       6,    65,   146,    67,    68,    11,   230,   151,   152,     4,
       5,     6,     7,    19,     0,     1,    11,     3,    65,    22,
      67,    68,     0,     1,    19,     3,    20,   171,   172,    76,
     174,   175,   176,   177,   178,    20,    11,   181,   102,   183,
     184,   185,   186,   187,     0,     1,   110,     3,   192,   193,
       0,     1,    36,     3,    22,   102,     7,   121,     4,     5,
       6,    12,    13,   110,   128,    11,    20,    20,    19,    20,
       5,    20,    20,    19,   121,    20,   140,    28,    29,    30,
      18,    65,   146,    67,    68,    18,   230,   151,   152,    20,
      19,   102,    -1,   140,     4,     5,     6,    81,    -1,    -1,
      -1,    11,    -1,    -1,   151,   152,    -1,   171,   172,    19,
     174,   175,   176,   177,   178,    -1,    -1,   181,   102,   183,
     184,   185,   186,   187,   171,   172,   110,    -1,   192,   193,
      -1,    -1,    36,    -1,   181,    -1,     7,   121,    -1,    -1,
      -1,    12,    13,    -1,    -1,   192,   193,    -1,    -1,    20,
      36,    -1,    23,    -1,    -1,    -1,   140,    28,    29,    30,
      -1,    65,    -1,    67,    68,    -1,   230,   151,   152,    -1,
       4,     5,     6,     7,    -1,    79,    80,    11,    -1,    65,
      -1,    67,    68,   230,    -1,    19,    -1,   171,   172,    36,
     174,   175,   176,   177,   178,    -1,    -1,   181,   102,   183,
     184,   185,   186,   187,    -1,    -1,   110,    -1,   192,   193,
      -1,    -1,     4,     5,     6,     7,   102,   121,    65,    11,
      67,    68,    -1,    -1,   110,    -1,    -1,    19,     7,    -1,
      -1,    -1,    -1,    12,    13,   121,   140,    -1,    -1,    -1,
      -1,    20,    -1,    -1,    23,    -1,   230,   151,   152,    28,
      29,    30,    -1,    -1,   140,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   110,    -1,    -1,    -1,   171,   172,    36,
     174,   175,   176,   177,   121,    -1,    -1,   181,    -1,   183,
     184,   185,   186,    -1,    -1,   171,   172,    -1,   192,   193,
      -1,    -1,    -1,   140,    -1,   181,    -1,     7,    65,    -1,
      67,    68,    12,    13,   151,   152,   192,   193,    -1,    -1,
      20,    78,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    -1,    -1,    -1,   171,   172,   230,   174,   175,   176,
     177,   178,    -1,    -1,   181,   102,   183,   184,   185,   186,
     187,    -1,     7,   110,   230,   192,   193,    12,    13,    36,
      -1,    -1,     1,    18,   121,     4,     5,     6,     7,     8,
       9,    -1,    11,    28,    29,    30,    15,    16,    17,    18,
      19,    -1,    21,   140,    -1,    24,    25,    -1,    65,    -1,
      67,    68,    -1,   230,   151,   152,    -1,    -1,     7,    -1,
      77,    -1,    -1,    12,    13,    -1,    -1,     7,    -1,    -1,
      -1,    20,    12,    13,   171,   172,    -1,   174,   175,    28,
      20,    30,    -1,    23,   181,   102,   183,   184,    28,    29,
      30,    -1,     7,   110,    -1,   192,   193,    12,    13,    -1,
      -1,    -1,    -1,    -1,   121,    20,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,     1,   140,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,   230,   151,   152,    15,    16,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,   171,   172,    -1,   174,    -1,    -1,
      -1,    -1,    -1,    -1,   181,    -1,   183,     7,    -1,    -1,
      -1,    -1,    12,    13,    -1,   192,   193,     1,    18,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    28,    29,
      30,    15,    16,    17,    18,    19,    -1,    21,    22,    -1,
      24,    25,    26,    -1,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,   230,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,    26,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    26,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    26,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    26,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    26,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,    26,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    26,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    26,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    26,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    26,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,    26,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    26,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,    26,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    -1,    21,    22,    -1,    24,    25,    26,     1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    -1,    21,    22,
      -1,    24,    25,    26,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    -1,    21,    22,    -1,    24,    25,    26,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    -1,    -1,    -1,    15,    16,    17,    18,    19,    -1,
      21,    22,    -1,    24,    25,    26,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    -1,    21,    22,    -1,    24,
      25,     1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      -1,    21,    22,    -1,    24,    25,     1,    -1,     3,     4,
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
      12,    13,    -1,    -1,    12,    13,    -1,    -1,    20,    -1,
      18,    23,    -1,    -1,    -1,    -1,    28,    29,    30,     7,
      28,    29,    30,     7,    12,    13,     7,    -1,    12,    13,
      18,    12,    13,    -1,    18,    -1,    -1,    18,    -1,    -1,
      28,    29,    30,    -1,    28,    29,    30,    28,    29,    30,
       7,    -1,    -1,     7,    -1,    12,    13,     7,    12,    13,
      -1,    18,    12,    13,    18,    -1,    -1,    -1,    18,    -1,
      -1,    28,    29,    30,    28,    29,    30,     7,    28,    29,
      30,     7,    12,    13,     7,    -1,    12,    13,    18,    12,
      13,    -1,    18,    -1,    -1,    18,    -1,    -1,    28,    29,
      30,    -1,    28,    29,    30,    28,    29,    30,     7,    -1,
      -1,     7,    -1,    12,    13,     7,    12,    13,    -1,    18,
      12,    13,    18,    -1,    -1,    -1,    18,    -1,    -1,    28,
      29,    30,    28,    29,    30,     7,    28,    29,    30,     7,
      12,    13,     7,    -1,    12,    13,    18,    12,    13,    -1,
      -1,    -1,    20,    -1,    -1,    20,    28,    29,    30,    -1,
      28,    29,    30,    28,    29,    30,     7,    -1,    -1,     7,
      -1,    12,    13,    -1,    12,    13,    -1,    -1,    -1,    20,
       7,    -1,    20,    -1,    -1,    12,    13,    28,    29,    30,
      28,    29,    30,    20,     7,    -1,    -1,    -1,    -1,    12,
      13,    28,    29,    30,    -1,     7,    -1,    20,     7,    -1,
      12,    13,    -1,    12,    13,    28,    29,    30,    20,     7,
      -1,    20,    -1,    -1,    12,    13,    28,    29,    30,    28,
      29,    30,    20,     7,    -1,    -1,    -1,    -1,    12,    13,
      28,    29,    30,    -1,     7,    -1,    20,     7,    -1,    12,
      13,    -1,    12,    13,    28,    29,    30,    20,     7,    -1,
      20,    -1,    -1,    12,    13,    28,    29,    30,    28,    29,
      30,    20,     7,    -1,    -1,    -1,    -1,    12,    13,    28,
      29,    30,    -1,     7,    -1,    20,     7,    -1,    12,    13,
      -1,    12,    13,    28,    29,    30,    20,     7,    -1,    20,
      -1,    -1,    12,    13,    28,    29,    30,    28,    29,    30,
      20,    -1,     4,     5,     6,     7,    -1,    -1,    28,    11,
      30,    -1,     4,     5,     6,     7,    18,    19,    10,    11,
      -1,    -1,    24,    25,    -1,    -1,    -1,    19,     4,     5,
       6,     7,    24,    25,    -1,    11,    -1,    -1,     4,     5,
       6,     7,    -1,    19,    20,    11,    -1,    -1,    24,    25,
      -1,    -1,    18,    19,     4,     5,     6,     7,    24,    25,
      10,    11,    -1,     4,     5,     6,     7,    -1,    -1,    19,
      11,    -1,    -1,    -1,    24,    25,    -1,    -1,    19,     4,
       5,     6,     7,    24,    25,    -1,    11,    -1,     4,     5,
       6,     7,    -1,    -1,    19,    11,    -1,    -1,    -1,    24,
      25,    -1,    -1,    19,     4,     5,     6,     7,    24,    25,
      -1,    11,    -1,     4,     5,     6,     7,    -1,    -1,    19,
      11,    -1,    -1,    -1,    24,    25,    -1,    -1,    19,     4,
       5,     6,     7,    24,    25,    -1,    11,    -1,     4,     5,
       6,     7,    -1,    -1,    19,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    32,    33,    34,    35,    36,    11,     0,
      33,    18,    19,     3,    37,    38,    39,    11,    20,    23,
      21,    42,    38,     1,     3,     4,     5,     6,     7,     8,
       9,    11,    15,    16,    17,    18,    19,    24,    25,    35,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      62,    11,    11,    58,    19,    19,    14,    19,    19,    19,
      41,    49,    43,    43,    22,    18,    30,    12,    13,     7,
      28,    29,    57,    11,    10,    50,    49,    50,    60,    61,
      50,    49,    20,    51,    52,    53,    54,    54,    55,    20,
      20,    20,    23,    20,    20,    18,    61,    40,    49,    26,
      18,    40,    49,    20,    40,    21,     4,     5,     6,     7,
      11,    19,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    62,    18,    11,     4,     5,     6,     7,    11,
      19,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      62,    30,    30,     1,     8,     9,    15,    16,    17,    18,
      21,    41,    42,    44,    45,    46,    47,    48,    49,    43,
      58,    14,    19,    49,    12,    13,     7,    28,    29,    57,
      58,    19,    49,    12,    13,     7,    28,    29,    57,    51,
      51,    19,    19,    19,    19,    41,    43,    18,    22,    49,
      60,    20,    52,    53,    54,    54,    55,    60,    20,    52,
      53,    54,    54,    55,    11,    10,    50,    50,    49,    22,
      20,    20,    20,    20,    20,    20,    18,    40,    49,    26,
      18,    40,    49,    20,    40
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    34,    35,    36,
      37,    37,    38,    38,    39,    40,    40,    40,    40,    40,
      40,    40,    40,    41,    41,    42,    43,    43,    43,    43,
      44,    44,    45,    46,    47,    48,    48,    49,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    53,    54,    54,
      55,    55,    56,    56,    57,    57,    58,    58,    58,    58,
      59,    60,    60,    61,    61,    62,    62,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     6,
       1,     0,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     3,     2,     2,     1,     1,
       5,     7,     9,     2,     4,     4,     4,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     1,
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
  case 2: /* program: declList  */
#line 81 "src/C_IPL_Syntax.y"
             {
        abstract_tree = populate_node("Topo do Programa");
        abstract_tree->child_1 = (yyvsp[0].node);    
    }
#line 2000 "src/C_IPL_Syntax.tab.c"
    break;

  case 3: /* declList: decl declList  */
#line 88 "src/C_IPL_Syntax.y"
                  {
        (yyval.node) = populate_node("Lista de Declarações");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2010 "src/C_IPL_Syntax.tab.c"
    break;

  case 4: /* declList: decl  */
#line 93 "src/C_IPL_Syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);    
    }
#line 2018 "src/C_IPL_Syntax.tab.c"
    break;

  case 5: /* decl: varDecl  */
#line 99 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2026 "src/C_IPL_Syntax.tab.c"
    break;

  case 6: /* decl: funDecl  */
#line 102 "src/C_IPL_Syntax.y"
              {
        (yyval.node) = (yyvsp[0].node); 
    }
#line 2034 "src/C_IPL_Syntax.tab.c"
    break;

  case 7: /* decl: error  */
#line 105 "src/C_IPL_Syntax.y"
           { populate_node("Erro"); }
#line 2040 "src/C_IPL_Syntax.tab.c"
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
#line 2066 "src/C_IPL_Syntax.tab.c"
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
#line 2094 "src/C_IPL_Syntax.tab.c"
    break;

  case 10: /* params: paramList  */
#line 159 "src/C_IPL_Syntax.y"
              {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2102 "src/C_IPL_Syntax.tab.c"
    break;

  case 11: /* params: %empty  */
#line 162 "src/C_IPL_Syntax.y"
      {(yyval.node) = NULL;}
#line 2108 "src/C_IPL_Syntax.tab.c"
    break;

  case 12: /* paramList: paramTypeList ',' paramList  */
#line 166 "src/C_IPL_Syntax.y"
                                {
        (yyval.node) = populate_node("Lista de Parâmetros");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2118 "src/C_IPL_Syntax.tab.c"
    break;

  case 13: /* paramList: paramTypeList  */
#line 171 "src/C_IPL_Syntax.y"
                    {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2126 "src/C_IPL_Syntax.tab.c"
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
#line 2152 "src/C_IPL_Syntax.tab.c"
    break;

  case 15: /* stmt: expStmt  */
#line 201 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2160 "src/C_IPL_Syntax.tab.c"
    break;

  case 16: /* stmt: compoundStmt  */
#line 204 "src/C_IPL_Syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2168 "src/C_IPL_Syntax.tab.c"
    break;

  case 17: /* stmt: ifStmt  */
#line 207 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2176 "src/C_IPL_Syntax.tab.c"
    break;

  case 18: /* stmt: forStmt  */
#line 210 "src/C_IPL_Syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2184 "src/C_IPL_Syntax.tab.c"
    break;

  case 19: /* stmt: returnStmt  */
#line 213 "src/C_IPL_Syntax.y"
                 {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2192 "src/C_IPL_Syntax.tab.c"
    break;

  case 20: /* stmt: readFunc  */
#line 216 "src/C_IPL_Syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2200 "src/C_IPL_Syntax.tab.c"
    break;

  case 21: /* stmt: writeFunc  */
#line 219 "src/C_IPL_Syntax.y"
                {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2208 "src/C_IPL_Syntax.tab.c"
    break;

  case 22: /* stmt: error  */
#line 222 "src/C_IPL_Syntax.y"
            { populate_node("Erro"); }
#line 2214 "src/C_IPL_Syntax.tab.c"
    break;

  case 23: /* expStmt: exp ';'  */
#line 226 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[-1].node); 
    }
#line 2222 "src/C_IPL_Syntax.tab.c"
    break;

  case 24: /* expStmt: ';'  */
#line 229 "src/C_IPL_Syntax.y"
          {(yyval.node) = NULL;}
#line 2228 "src/C_IPL_Syntax.tab.c"
    break;

  case 25: /* compoundStmt: '{' localDecls '}'  */
#line 233 "src/C_IPL_Syntax.y"
                       {
        (yyval.node) = (yyvsp[-1].node);  
    }
#line 2236 "src/C_IPL_Syntax.tab.c"
    break;

  case 26: /* localDecls: varDecl localDecls  */
#line 239 "src/C_IPL_Syntax.y"
                       {
        (yyval.node) = populate_node("Declaração de Variáveis");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2246 "src/C_IPL_Syntax.tab.c"
    break;

  case 27: /* localDecls: stmt localDecls  */
#line 244 "src/C_IPL_Syntax.y"
                      {
        (yyval.node) = populate_node("Declaração de Statement");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2256 "src/C_IPL_Syntax.tab.c"
    break;

  case 28: /* localDecls: varDecl  */
#line 249 "src/C_IPL_Syntax.y"
              {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2264 "src/C_IPL_Syntax.tab.c"
    break;

  case 29: /* localDecls: stmt  */
#line 252 "src/C_IPL_Syntax.y"
           {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2272 "src/C_IPL_Syntax.tab.c"
    break;

  case 30: /* ifStmt: KW_IF '(' logExp ')' stmt  */
#line 258 "src/C_IPL_Syntax.y"
                                         {
        (yyval.node) = populate_node("Função IF");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2282 "src/C_IPL_Syntax.tab.c"
    break;

  case 31: /* ifStmt: KW_IF '(' logExp ')' stmt KW_ELSE stmt  */
#line 263 "src/C_IPL_Syntax.y"
                                             {
        (yyval.node) = populate_node("Função IF ELSE");
        (yyval.node)->child_1 = (yyvsp[-4].node);
        (yyval.node)->child_2 = (yyvsp[-2].node);
        (yyval.node)->child_3 = (yyvsp[0].node);
    }
#line 2293 "src/C_IPL_Syntax.tab.c"
    break;

  case 32: /* forStmt: KW_FOR '(' exp ';' exp ';' exp ')' stmt  */
#line 272 "src/C_IPL_Syntax.y"
                                            {
        (yyval.node) = populate_node("Loop For");
        (yyval.node)->child_1 = (yyvsp[-6].node);
        (yyval.node)->child_2 = (yyvsp[-4].node);
        (yyval.node)->child_3 = (yyvsp[-2].node);
        (yyval.node)->child_4 = (yyvsp[0].node);
    }
#line 2305 "src/C_IPL_Syntax.tab.c"
    break;

  case 33: /* returnStmt: KW_RETURN expStmt  */
#line 282 "src/C_IPL_Syntax.y"
                      {
        (yyval.node) = populate_node("Retorno");
        (yyval.node)->child_1 = (yyvsp[0].node); 
    }
#line 2314 "src/C_IPL_Syntax.tab.c"
    break;

  case 34: /* readFunc: READ '(' ID ')'  */
#line 289 "src/C_IPL_Syntax.y"
                    {
        (yyval.node) = populate_node("Leitura");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
    }
#line 2324 "src/C_IPL_Syntax.tab.c"
    break;

  case 35: /* writeFunc: WRITE '(' logExp ')'  */
#line 297 "src/C_IPL_Syntax.y"
                         {
        (yyval.node) = populate_node("Escrita de uma Expressão");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-3].token);
        (yyval.node)->child_1 = (yyvsp[-1].node); 
    }
#line 2335 "src/C_IPL_Syntax.tab.c"
    break;

  case 36: /* writeFunc: WRITE '(' STRING ')'  */
#line 303 "src/C_IPL_Syntax.y"
                           {

        Node* string_node = populate_node("String");
        string_node->token = (Token*) malloc(sizeof(Token));
        *string_node->token = (yyvsp[-1].token);

        (yyval.node) = populate_node("Escrita de uma String");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-3].token);
        (yyval.node)->child_1 = string_node; 
    }
#line 2351 "src/C_IPL_Syntax.tab.c"
    break;

  case 37: /* exp: ID ASSIGN exp  */
#line 317 "src/C_IPL_Syntax.y"
                  {
        (yyval.node) = populate_node("Atribuição de variável");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-2].token); 
        (yyval.node)->child_1 = (yyvsp[0].node);  
    }
#line 2362 "src/C_IPL_Syntax.tab.c"
    break;

  case 38: /* exp: logExp  */
#line 323 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2370 "src/C_IPL_Syntax.tab.c"
    break;

  case 39: /* logExp: logExp LOGOP listExp  */
#line 329 "src/C_IPL_Syntax.y"
                         {
        (yyval.node) = populate_node("Operação Lógica");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2382 "src/C_IPL_Syntax.tab.c"
    break;

  case 40: /* logExp: listExp  */
#line 336 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2390 "src/C_IPL_Syntax.tab.c"
    break;

  case 41: /* listExp: listExp BIN_LISTOP relExp  */
#line 342 "src/C_IPL_Syntax.y"
                              {
        (yyval.node) = populate_node("Operação Binária de Listas");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2402 "src/C_IPL_Syntax.tab.c"
    break;

  case 42: /* listExp: relExp  */
#line 349 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2410 "src/C_IPL_Syntax.tab.c"
    break;

  case 43: /* relExp: relExp RELOP sumExp  */
#line 355 "src/C_IPL_Syntax.y"
                        {
        (yyval.node) = populate_node("Operação Relacional");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2422 "src/C_IPL_Syntax.tab.c"
    break;

  case 44: /* relExp: sumExp  */
#line 362 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2430 "src/C_IPL_Syntax.tab.c"
    break;

  case 45: /* sumExp: sumExp SUMOP mulExp  */
#line 368 "src/C_IPL_Syntax.y"
                        {
        (yyval.node) = populate_node("Operação de Soma");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2442 "src/C_IPL_Syntax.tab.c"
    break;

  case 46: /* sumExp: sumExp MINUS mulExp  */
#line 375 "src/C_IPL_Syntax.y"
                          {
        (yyval.node) = populate_node("Operação de Subtração");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2454 "src/C_IPL_Syntax.tab.c"
    break;

  case 47: /* sumExp: mulExp  */
#line 382 "src/C_IPL_Syntax.y"
             {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2462 "src/C_IPL_Syntax.tab.c"
    break;

  case 48: /* mulExp: mulExp MULOP unaryListExp  */
#line 388 "src/C_IPL_Syntax.y"
                              {
        (yyval.node) = populate_node("Operação de Multiplicação");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token); 
        (yyval.node)->child_2 = (yyvsp[0].node);  
    }
#line 2474 "src/C_IPL_Syntax.tab.c"
    break;

  case 49: /* mulExp: unaryListExp  */
#line 395 "src/C_IPL_Syntax.y"
                   {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2482 "src/C_IPL_Syntax.tab.c"
    break;

  case 50: /* unaryListExp: unaryListOp unaryExp  */
#line 401 "src/C_IPL_Syntax.y"
                         {
        (yyval.node) = populate_node("Operação Unária de Lista");
        (yyval.node)->child_1 = (yyvsp[-1].node);
        (yyval.node)->child_2 = (yyvsp[0].node);   
    }
#line 2492 "src/C_IPL_Syntax.tab.c"
    break;

  case 51: /* unaryListExp: unaryExp  */
#line 406 "src/C_IPL_Syntax.y"
               {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2500 "src/C_IPL_Syntax.tab.c"
    break;

  case 52: /* unaryListOp: UN_LISTOP  */
#line 412 "src/C_IPL_Syntax.y"
              {    
        (yyval.node) = populate_node("Operador Unário de Lista");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);    
    }
#line 2510 "src/C_IPL_Syntax.tab.c"
    break;

  case 53: /* unaryListOp: EXCLAM  */
#line 417 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = populate_node("Ponto de Exclamação");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2520 "src/C_IPL_Syntax.tab.c"
    break;

  case 54: /* unaryExp: MINUS factor  */
#line 425 "src/C_IPL_Syntax.y"
                 {
        (yyval.node) = populate_node("Expressão Aritmética Unária");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-1].token);
        (yyval.node)->child_1 = (yyvsp[0].node);    
    }
#line 2531 "src/C_IPL_Syntax.tab.c"
    break;

  case 55: /* unaryExp: factor  */
#line 431 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2539 "src/C_IPL_Syntax.tab.c"
    break;

  case 56: /* factor: '(' exp ')'  */
#line 437 "src/C_IPL_Syntax.y"
                {
       (yyval.node) = (yyvsp[-1].node); 
    }
#line 2547 "src/C_IPL_Syntax.tab.c"
    break;

  case 57: /* factor: call  */
#line 440 "src/C_IPL_Syntax.y"
           {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2555 "src/C_IPL_Syntax.tab.c"
    break;

  case 58: /* factor: constant  */
#line 443 "src/C_IPL_Syntax.y"
               {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2563 "src/C_IPL_Syntax.tab.c"
    break;

  case 59: /* factor: ID  */
#line 446 "src/C_IPL_Syntax.y"
         {
        (yyval.node) = populate_node("ID");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2573 "src/C_IPL_Syntax.tab.c"
    break;

  case 60: /* call: ID '(' args ')'  */
#line 454 "src/C_IPL_Syntax.y"
                    {
        (yyval.node) = populate_node("Chamada de Função"); 
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[-3].token);
        (yyval.node)->child_1 = (yyvsp[-1].node);    
    }
#line 2584 "src/C_IPL_Syntax.tab.c"
    break;

  case 61: /* args: argList  */
#line 463 "src/C_IPL_Syntax.y"
            {
       (yyval.node) = (yyvsp[0].node); 
    }
#line 2592 "src/C_IPL_Syntax.tab.c"
    break;

  case 62: /* args: %empty  */
#line 466 "src/C_IPL_Syntax.y"
      {(yyval.node) = NULL;}
#line 2598 "src/C_IPL_Syntax.tab.c"
    break;

  case 63: /* argList: logExp ',' argList  */
#line 470 "src/C_IPL_Syntax.y"
                       {
        (yyval.node) = populate_node("Lista de Argumentos");
        (yyval.node)->child_1 = (yyvsp[-2].node);
        (yyval.node)->child_2 = (yyvsp[0].node);
    }
#line 2608 "src/C_IPL_Syntax.tab.c"
    break;

  case 64: /* argList: logExp  */
#line 475 "src/C_IPL_Syntax.y"
             {
        (yyval.node) = (yyvsp[0].node);
    }
#line 2616 "src/C_IPL_Syntax.tab.c"
    break;

  case 65: /* constant: INT  */
#line 481 "src/C_IPL_Syntax.y"
        {
        (yyval.node) = populate_node("Int");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2626 "src/C_IPL_Syntax.tab.c"
    break;

  case 66: /* constant: FLOAT  */
#line 486 "src/C_IPL_Syntax.y"
            {
        (yyval.node) = populate_node("Float");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2636 "src/C_IPL_Syntax.tab.c"
    break;

  case 67: /* constant: NIL  */
#line 491 "src/C_IPL_Syntax.y"
          {
        (yyval.node) = populate_node("NIL");
        (yyval.node)->token = (Token*) malloc(sizeof(Token));
        *(yyval.node)->token = (yyvsp[0].token);
    }
#line 2646 "src/C_IPL_Syntax.tab.c"
    break;


#line 2650 "src/C_IPL_Syntax.tab.c"

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

#line 498 "src/C_IPL_Syntax.y"


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

