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
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         claud_parse
#define yylex           claud_lex
#define yyerror         claud_error
#define yydebug         claud_debug
#define yynerrs         claud_nerrs

/* First part of user prologue.  */
#line 20 "claud.y"

/* Begin C preamble code */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Absyn.h"

#define YYMAXDEPTH 10000000

/* The type yyscan_t is defined by flex, but we need it in the parser already. */
#ifndef YY_TYPEDEF_YY_SCANNER_T
#define YY_TYPEDEF_YY_SCANNER_T
typedef void* yyscan_t;
#endif

typedef struct yy_buffer_state *YY_BUFFER_STATE;
extern YY_BUFFER_STATE claud__scan_string(const char *str, yyscan_t scanner);
extern void claud__delete_buffer(YY_BUFFER_STATE buf, yyscan_t scanner);

extern void claud_lex_destroy(yyscan_t scanner);
extern char* claud_get_text(yyscan_t scanner);

extern yyscan_t claud__initialize_lexer(FILE * inp);

/* List reversal functions. */

/* End C preamble code */

#line 106 "Parser.c"

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

#include "Bison.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL__ERROR_ = 3,                    /* _ERROR_  */
  YYSYMBOL__LPAREN = 4,                    /* _LPAREN  */
  YYSYMBOL__RPAREN = 5,                    /* _RPAREN  */
  YYSYMBOL__STAR = 6,                      /* _STAR  */
  YYSYMBOL__PLUS = 7,                      /* _PLUS  */
  YYSYMBOL__COMMA = 8,                     /* _COMMA  */
  YYSYMBOL__MINUS = 9,                     /* _MINUS  */
  YYSYMBOL__SLASH = 10,                    /* _SLASH  */
  YYSYMBOL__COLON = 11,                    /* _COLON  */
  YYSYMBOL__SEMI = 12,                     /* _SEMI  */
  YYSYMBOL__LT = 13,                       /* _LT  */
  YYSYMBOL__LDARROW = 14,                  /* _LDARROW  */
  YYSYMBOL__LTGT = 15,                     /* _LTGT  */
  YYSYMBOL__EQ = 16,                       /* _EQ  */
  YYSYMBOL__DEQ = 17,                      /* _DEQ  */
  YYSYMBOL__GT = 18,                       /* _GT  */
  YYSYMBOL__GTEQ = 19,                     /* _GTEQ  */
  YYSYMBOL__KW_ATE = 20,                   /* _KW_ATE  */
  YYSYMBOL__KW_BAH = 21,                   /* _KW_BAH  */
  YYSYMBOL__KW_CONST = 22,                 /* _KW_CONST  */
  YYSYMBOL__KW_Claud = 23,                 /* _KW_Claud  */
  YYSYMBOL__KW_ClaudDiz = 24,              /* _KW_ClaudDiz  */
  YYSYMBOL__KW_FAZAI = 25,                 /* _KW_FAZAI  */
  YYSYMBOL__KW_FUNC = 26,                  /* _KW_FUNC  */
  YYSYMBOL__KW_GOTO = 27,                  /* _KW_GOTO  */
  YYSYMBOL__KW_ISTRUCT = 28,               /* _KW_ISTRUCT  */
  YYSYMBOL__KW_LABEL = 29,                 /* _KW_LABEL  */
  YYSYMBOL__KW_Receba = 30,                /* _KW_Receba  */
  YYSYMBOL__KW_SE = 31,                    /* _KW_SE  */
  YYSYMBOL__KW_TCHE = 32,                  /* _KW_TCHE  */
  YYSYMBOL__LBRACK = 33,                   /* _LBRACK  */
  YYSYMBOL__RBRACK = 34,                   /* _RBRACK  */
  YYSYMBOL__KW_float = 35,                 /* _KW_float  */
  YYSYMBOL__KW_floaty = 36,                /* _KW_floaty  */
  YYSYMBOL__KW_gaucho = 37,                /* _KW_gaucho  */
  YYSYMBOL__KW_int = 38,                   /* _KW_int  */
  YYSYMBOL__KW_interu = 39,                /* _KW_interu  */
  YYSYMBOL__KW_kd = 40,                    /* _KW_kd  */
  YYSYMBOL__KW_main = 41,                  /* _KW_main  */
  YYSYMBOL__KW_string = 42,                /* _KW_string  */
  YYSYMBOL__KW_stringo = 43,               /* _KW_stringo  */
  YYSYMBOL__LBRACE = 44,                   /* _LBRACE  */
  YYSYMBOL__BAR = 45,                      /* _BAR  */
  YYSYMBOL__RBRACE = 46,                   /* _RBRACE  */
  YYSYMBOL__STRING_ = 47,                  /* _STRING_  */
  YYSYMBOL__INTEGER_ = 48,                 /* _INTEGER_  */
  YYSYMBOL__DOUBLE_ = 49,                  /* _DOUBLE_  */
  YYSYMBOL__IDENT_ = 50,                   /* _IDENT_  */
  YYSYMBOL_YYACCEPT = 51,                  /* $accept  */
  YYSYMBOL_S = 52,                         /* S  */
  YYSYMBOL_Block = 53,                     /* Block  */
  YYSYMBOL_CMDS = 54,                      /* CMDS  */
  YYSYMBOL_CMD = 55,                       /* CMD  */
  YYSYMBOL_ATB = 56,                       /* ATB  */
  YYSYMBOL_EXP = 57,                       /* EXP  */
  YYSYMBOL_SE = 58,                        /* SE  */
  YYSYMBOL_OPerL = 59,                     /* OPerL  */
  YYSYMBOL_OPerA = 60,                     /* OPerA  */
  YYSYMBOL_OPL = 61,                       /* OPL  */
  YYSYMBOL_CLAUDDIZ = 62,                  /* CLAUDDIZ  */
  YYSYMBOL_RECEBA = 63,                    /* RECEBA  */
  YYSYMBOL_ATE = 64,                       /* ATE  */
  YYSYMBOL_FAZAI = 65,                     /* FAZAI  */
  YYSYMBOL_VALUE = 66,                     /* VALUE  */
  YYSYMBOL_Type = 67,                      /* Type  */
  YYSYMBOL_VET = 68,                       /* VET  */
  YYSYMBOL_STRUCT = 69,                    /* STRUCT  */
  YYSYMBOL_HeteroElements = 70,            /* HeteroElements  */
  YYSYMBOL_HeteroElement = 71,             /* HeteroElement  */
  YYSYMBOL_FUNC = 72,                      /* FUNC  */
  YYSYMBOL_GOTO = 73,                      /* GOTO  */
  YYSYMBOL_LABEL = 74,                     /* LABEL  */
  YYSYMBOL_ConjInt = 75,                   /* ConjInt  */
  YYSYMBOL_ConjReal = 76,                  /* ConjReal  */
  YYSYMBOL_ConjString = 77,                /* ConjString  */
  YYSYMBOL_CONST = 78,                     /* CONST  */
  YYSYMBOL_POINT = 79                      /* POINT  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;


/* Second part of user prologue.  */
#line 86 "claud.y"

void yyerror(YYLTYPE *loc, yyscan_t scanner, YYSTYPE *result, const char *msg)
{
  fprintf(stderr, "error: %d,%d: %s at %s\n",
    loc->first_line, loc->first_column, msg, claud_get_text(scanner));
}

int yyparse(yyscan_t scanner, YYSTYPE *result);

extern int yylex(YYSTYPE *lvalp, YYLTYPE *llocp, yyscan_t scanner);

#line 231 "Parser.c"


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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   180,   180,   182,   184,   185,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   201,
     202,   204,   205,   207,   208,   210,   211,   212,   213,   214,
     215,   217,   218,   219,   220,   222,   224,   226,   228,   230,
     232,   233,   234,   235,   237,   238,   239,   241,   242,   243,
     244,   246,   248,   249,   251,   252,   253,   255,   257,   259,
     261,   262,   264,   265,   267,   268,   270,   272
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
  "\"end of file\"", "error", "\"invalid token\"", "_ERROR_", "_LPAREN",
  "_RPAREN", "_STAR", "_PLUS", "_COMMA", "_MINUS", "_SLASH", "_COLON",
  "_SEMI", "_LT", "_LDARROW", "_LTGT", "_EQ", "_DEQ", "_GT", "_GTEQ",
  "_KW_ATE", "_KW_BAH", "_KW_CONST", "_KW_Claud", "_KW_ClaudDiz",
  "_KW_FAZAI", "_KW_FUNC", "_KW_GOTO", "_KW_ISTRUCT", "_KW_LABEL",
  "_KW_Receba", "_KW_SE", "_KW_TCHE", "_LBRACK", "_RBRACK", "_KW_float",
  "_KW_floaty", "_KW_gaucho", "_KW_int", "_KW_interu", "_KW_kd",
  "_KW_main", "_KW_string", "_KW_stringo", "_LBRACE", "_BAR", "_RBRACE",
  "_STRING_", "_INTEGER_", "_DOUBLE_", "_IDENT_", "$accept", "S", "Block",
  "CMDS", "CMD", "ATB", "EXP", "SE", "OPerL", "OPerA", "OPL", "CLAUDDIZ",
  "RECEBA", "ATE", "FAZAI", "VALUE", "Type", "VET", "STRUCT",
  "HeteroElements", "HeteroElement", "FUNC", "GOTO", "LABEL", "ConjInt",
  "ConjReal", "ConjString", "CONST", "POINT", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-73)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -36,    -5,     7,    23,   -73,    -3,     2,    36,    -2,   -14,
     -73,    46,   -13,    52,    55,    11,    25,    41,    27,    72,
      58,    31,   -73,    32,   -73,    33,   -73,    38,   -14,   -73,
     -73,   -73,   -73,   -73,   -73,    -4,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -16,    35,   -16,   -13,    73,    74,    39,
      77,   -13,    85,    57,    59,    60,   -73,   -73,    44,     3,
     -73,   -73,   -73,   -73,    86,    34,    79,    91,    47,    93,
     -73,    65,    -2,    50,   -16,    53,    61,    62,    87,   -16,
      63,    -2,   -73,   -73,   -73,   -73,   -73,   -73,   -16,   -16,
      92,    89,    -2,    90,   -73,   102,   103,    78,    80,    81,
      66,    48,    56,    83,   -73,   -73,   101,   -73,   -16,   -73,
      75,   106,    -2,   104,   105,   107,   110,   -73,   -73,   -73,
     -73,   -73,   -16,   -73,   -16,   112,   -73,    82,    22,   -73,
      94,    95,    96,    97,   -73,   -73,   -73,   -73,   -16,   -73,
     -73,   -73,    88,   117,    -2,    84,    98,   100,    99,   119,
      22,   -73,   124,   108,   127,   109,   128,   111,   113,   -73,
     -73,    84,   125,    98,   126,   100,   129,   134,   -73,   -73,
     -73,   -73,   -73,   -73,    -2,   -73
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    44,     0,    46,     0,     4,     6,
       7,    10,    11,     8,     9,     0,    13,    17,    14,    15,
      16,    12,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     5,     0,     0,
      41,    42,    43,    40,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    28,    30,    29,    25,    26,     0,     0,
       0,     0,     0,     0,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    35,     0,    36,     0,    57,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      31,    20,     0,    19,     0,     0,    66,     0,     0,    37,
      23,     0,     0,     0,    67,    22,    21,    47,     0,    54,
      56,    55,     0,    52,     0,     0,     0,     0,     0,     0,
       0,    24,    62,     0,    60,     0,    64,     0,     0,    51,
      53,     0,     0,     0,     0,     0,     0,     0,    63,    49,
      61,    48,    65,    50,     0,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -73,   -73,   -72,   120,   -73,   -73,   -73,   -73,   -73,    49,
     -71,   -73,   -73,   -73,   -73,   -44,    -8,   -73,   -73,   -10,
     -73,   -73,   -73,   -73,   -11,   -12,   -15,   -73,   -73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    10,    27,    28,    29,   101,    30,    88,   122,
      64,    31,    32,    33,    34,    65,    35,    36,    37,   142,
     143,    38,    39,    40,   155,   153,   157,    41,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      94,    67,    58,    96,    44,     1,    11,     4,    12,   104,
      13,    14,    15,    16,    17,    18,    19,    20,     3,    79,
     109,    21,    22,    22,    23,    24,    24,     5,    25,    26,
      26,    60,    61,    62,    63,   102,    80,     6,    68,     7,
     130,     8,     9,    73,   105,   106,    59,    82,    83,    84,
      43,    85,    86,    87,   117,   118,    45,   119,   120,    46,
     121,    47,   117,   118,   127,   119,   120,   148,   123,   139,
     140,   141,   151,    48,    49,    50,    51,    69,   135,    52,
     136,    53,    54,    55,    56,    66,    70,    71,    72,    74,
      75,    81,    76,    77,    78,    89,    90,    91,    92,    93,
      95,    97,   175,   100,   107,   108,   110,   111,   112,    98,
      99,   103,   113,   126,   114,   115,   116,   125,   129,   128,
     131,   132,   134,   133,   137,   150,   144,   138,   145,   146,
     147,   159,   161,   152,   149,   163,   165,   169,   171,   174,
     160,   173,   162,   164,   158,   166,   154,   156,    57,   168,
     172,   124,   170,     0,     0,     0,     0,     0,     0,     0,
       0,   167
};

static const yytype_int16 yycheck[] =
{
      72,    45,     6,    74,    12,    41,    20,     0,    22,    81,
      24,    25,    26,    27,    28,    29,    30,    31,    23,    16,
      92,    35,    36,    36,    38,    39,    39,     4,    42,    43,
      43,    47,    48,    49,    50,    79,    33,    40,    46,    37,
     112,     5,    44,    51,    88,    89,    50,    13,    14,    15,
       4,    17,    18,    19,     6,     7,     4,     9,    10,     4,
      12,    50,     6,     7,   108,     9,    10,   138,    12,    47,
      48,    49,   144,    48,    33,    48,     4,     4,   122,    21,
     124,    50,    50,    50,    46,    50,    12,    48,    11,     4,
      33,     5,    33,    33,    50,    16,     5,    50,     5,    34,
      50,    48,   174,    16,    12,    16,    16,     5,     5,    48,
      48,    48,    34,    12,    34,    34,    50,    34,    12,    44,
      16,    16,    12,    16,    12,     8,    32,    45,    33,    33,
      33,    12,     8,    49,    46,     8,     8,    12,    12,     5,
     150,    12,    34,    34,    45,    34,    48,    47,    28,   161,
     165,   102,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    52,    23,     0,     4,    40,    37,     5,    44,
      53,    20,    22,    24,    25,    26,    27,    28,    29,    30,
      31,    35,    36,    38,    39,    42,    43,    54,    55,    56,
      58,    62,    63,    64,    65,    67,    68,    69,    72,    73,
      74,    78,    79,     4,    67,     4,     4,    50,    48,    33,
      48,     4,    21,    50,    50,    50,    46,    54,     6,    50,
      47,    48,    49,    50,    61,    66,    50,    66,    67,     4,
      12,    48,    11,    67,     4,    33,    33,    33,    50,    16,
      33,     5,    13,    14,    15,    17,    18,    19,    59,    16,
       5,    50,     5,    34,    53,    50,    61,    48,    48,    48,
      16,    57,    66,    48,    53,    66,    66,    12,    16,    53,
      16,     5,     5,    34,    34,    34,    50,     6,     7,     9,
      10,    12,    60,    12,    60,    34,    12,    66,    44,    12,
      53,    16,    16,    16,    12,    66,    66,    12,    45,    47,
      48,    49,    70,    71,    32,    33,    33,    33,    61,    46,
       8,    53,    49,    76,    48,    75,    47,    77,    45,    12,
      70,     8,    34,     8,    34,     8,    34,    48,    76,    12,
      75,    12,    77,    12,     5,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    53,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    61,    62,    63,    64,    65,
      66,    66,    66,    66,    67,    67,    67,    68,    68,    68,
      68,    69,    70,    70,    71,    71,    71,    72,    73,    74,
      75,    75,    76,    76,    77,    77,    78,    79
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     3,     3,     6,     8,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     5,     6,     5,    12,
       1,     1,     1,     1,     1,     1,     1,     6,    10,    10,
      10,     9,     1,     3,     1,     1,     1,     5,     3,     4,
       1,     3,     1,     3,     1,     3,     6,     6
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
        yyerror (&yylloc, scanner, result, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location, scanner, result); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp, scanner, result);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
                 int yyrule, yyscan_t scanner, YYSTYPE *result)
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]), scanner, result);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, scanner, result); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t scanner, YYSTYPE *result)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
  YY_USE (scanner);
  YY_USE (result);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t scanner, YYSTYPE *result)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* S: _KW_main _KW_Claud _LPAREN _KW_kd _KW_gaucho _RPAREN Block  */
#line 180 "claud.y"
                                                               { (yyval.s_) = make_Sst((yyvsp[0].block_)); result->s_ = (yyval.s_); }
#line 1421 "Parser.c"
    break;

  case 3: /* Block: _LBRACE CMDS _RBRACE  */
#line 182 "claud.y"
                             { (yyval.block_) = make_LBlock((yyvsp[-1].cmds_)); result->block_ = (yyval.block_); }
#line 1427 "Parser.c"
    break;

  case 4: /* CMDS: CMD  */
#line 184 "claud.y"
           { (yyval.cmds_) = make_CMDSCMD((yyvsp[0].cmd_)); result->cmds_ = (yyval.cmds_); }
#line 1433 "Parser.c"
    break;

  case 5: /* CMDS: CMD CMDS  */
#line 185 "claud.y"
             { (yyval.cmds_) = make_CMDS1((yyvsp[-1].cmd_), (yyvsp[0].cmds_)); result->cmds_ = (yyval.cmds_); }
#line 1439 "Parser.c"
    break;

  case 6: /* CMD: ATB  */
#line 187 "claud.y"
          { (yyval.cmd_) = make_CMDATB((yyvsp[0].atb_)); result->cmd_ = (yyval.cmd_); }
#line 1445 "Parser.c"
    break;

  case 7: /* CMD: SE  */
#line 188 "claud.y"
       { (yyval.cmd_) = make_CMDSE((yyvsp[0].se_)); result->cmd_ = (yyval.cmd_); }
#line 1451 "Parser.c"
    break;

  case 8: /* CMD: ATE  */
#line 189 "claud.y"
        { (yyval.cmd_) = make_CMDATE((yyvsp[0].ate_)); result->cmd_ = (yyval.cmd_); }
#line 1457 "Parser.c"
    break;

  case 9: /* CMD: FAZAI  */
#line 190 "claud.y"
          { (yyval.cmd_) = make_CMDFAZAI((yyvsp[0].fazai_)); result->cmd_ = (yyval.cmd_); }
#line 1463 "Parser.c"
    break;

  case 10: /* CMD: CLAUDDIZ  */
#line 191 "claud.y"
             { (yyval.cmd_) = make_CMDCLAUDDIZ((yyvsp[0].clauddiz_)); result->cmd_ = (yyval.cmd_); }
#line 1469 "Parser.c"
    break;

  case 11: /* CMD: RECEBA  */
#line 192 "claud.y"
           { (yyval.cmd_) = make_CMDRECEBA((yyvsp[0].receba_)); result->cmd_ = (yyval.cmd_); }
#line 1475 "Parser.c"
    break;

  case 12: /* CMD: CONST  */
#line 193 "claud.y"
          { (yyval.cmd_) = make_CMDCONST((yyvsp[0].const_)); result->cmd_ = (yyval.cmd_); }
#line 1481 "Parser.c"
    break;

  case 13: /* CMD: VET  */
#line 194 "claud.y"
        { (yyval.cmd_) = make_CMDVET((yyvsp[0].vet_)); result->cmd_ = (yyval.cmd_); }
#line 1487 "Parser.c"
    break;

  case 14: /* CMD: FUNC  */
#line 195 "claud.y"
         { (yyval.cmd_) = make_CMDFUNC((yyvsp[0].func_)); result->cmd_ = (yyval.cmd_); }
#line 1493 "Parser.c"
    break;

  case 15: /* CMD: GOTO  */
#line 196 "claud.y"
         { (yyval.cmd_) = make_CMDGOTO((yyvsp[0].goto_)); result->cmd_ = (yyval.cmd_); }
#line 1499 "Parser.c"
    break;

  case 16: /* CMD: LABEL  */
#line 197 "claud.y"
          { (yyval.cmd_) = make_CMDLABEL((yyvsp[0].label_)); result->cmd_ = (yyval.cmd_); }
#line 1505 "Parser.c"
    break;

  case 17: /* CMD: STRUCT  */
#line 198 "claud.y"
           { (yyval.cmd_) = make_CMDSTRUCT((yyvsp[0].struct_)); result->cmd_ = (yyval.cmd_); }
#line 1511 "Parser.c"
    break;

  case 18: /* CMD: POINT  */
#line 199 "claud.y"
          { (yyval.cmd_) = make_CMDPOINT((yyvsp[0].point_)); result->cmd_ = (yyval.cmd_); }
#line 1517 "Parser.c"
    break;

  case 19: /* ATB: Type _IDENT_ _EQ VALUE _SEMI  */
#line 201 "claud.y"
                                   { (yyval.atb_) = make_ATB1((yyvsp[-4].type_), (yyvsp[-3]._string), (yyvsp[-1].value_)); result->atb_ = (yyval.atb_); }
#line 1523 "Parser.c"
    break;

  case 20: /* ATB: Type _IDENT_ _EQ EXP _SEMI  */
#line 202 "claud.y"
                               { (yyval.atb_) = make_ATB2((yyvsp[-4].type_), (yyvsp[-3]._string), (yyvsp[-1].exp_)); result->atb_ = (yyval.atb_); }
#line 1529 "Parser.c"
    break;

  case 21: /* EXP: VALUE OPerA VALUE  */
#line 204 "claud.y"
                        { (yyval.exp_) = make_EXP1((yyvsp[-2].value_), (yyvsp[-1].opera_), (yyvsp[0].value_)); result->exp_ = (yyval.exp_); }
#line 1535 "Parser.c"
    break;

  case 22: /* EXP: EXP OPerA VALUE  */
#line 205 "claud.y"
                    { (yyval.exp_) = make_EXP2((yyvsp[-2].exp_), (yyvsp[-1].opera_), (yyvsp[0].value_)); result->exp_ = (yyval.exp_); }
#line 1541 "Parser.c"
    break;

  case 23: /* SE: _KW_SE _KW_BAH _LPAREN OPL _RPAREN Block  */
#line 207 "claud.y"
                                              { (yyval.se_) = make_SE1((yyvsp[-2].opl_), (yyvsp[0].block_)); result->se_ = (yyval.se_); }
#line 1547 "Parser.c"
    break;

  case 24: /* SE: _KW_SE _KW_BAH _LPAREN OPL _RPAREN Block _KW_TCHE Block  */
#line 208 "claud.y"
                                                            { (yyval.se_) = make_SE2((yyvsp[-4].opl_), (yyvsp[-2].block_), (yyvsp[0].block_)); result->se_ = (yyval.se_); }
#line 1553 "Parser.c"
    break;

  case 25: /* OPerL: _GT  */
#line 210 "claud.y"
            { (yyval.operl_) = make_OPerL1(); result->operl_ = (yyval.operl_); }
#line 1559 "Parser.c"
    break;

  case 26: /* OPerL: _GTEQ  */
#line 211 "claud.y"
          { (yyval.operl_) = make_OPerL2(); result->operl_ = (yyval.operl_); }
#line 1565 "Parser.c"
    break;

  case 27: /* OPerL: _LT  */
#line 212 "claud.y"
        { (yyval.operl_) = make_OPerL3(); result->operl_ = (yyval.operl_); }
#line 1571 "Parser.c"
    break;

  case 28: /* OPerL: _LDARROW  */
#line 213 "claud.y"
             { (yyval.operl_) = make_OPerL4(); result->operl_ = (yyval.operl_); }
#line 1577 "Parser.c"
    break;

  case 29: /* OPerL: _DEQ  */
#line 214 "claud.y"
         { (yyval.operl_) = make_OPerL5(); result->operl_ = (yyval.operl_); }
#line 1583 "Parser.c"
    break;

  case 30: /* OPerL: _LTGT  */
#line 215 "claud.y"
          { (yyval.operl_) = make_OPerL6(); result->operl_ = (yyval.operl_); }
#line 1589 "Parser.c"
    break;

  case 31: /* OPerA: _SLASH  */
#line 217 "claud.y"
               { (yyval.opera_) = make_OPerA1(); result->opera_ = (yyval.opera_); }
#line 1595 "Parser.c"
    break;

  case 32: /* OPerA: _STAR  */
#line 218 "claud.y"
          { (yyval.opera_) = make_OPerA2(); result->opera_ = (yyval.opera_); }
#line 1601 "Parser.c"
    break;

  case 33: /* OPerA: _PLUS  */
#line 219 "claud.y"
          { (yyval.opera_) = make_OPerA3(); result->opera_ = (yyval.opera_); }
#line 1607 "Parser.c"
    break;

  case 34: /* OPerA: _MINUS  */
#line 220 "claud.y"
           { (yyval.opera_) = make_OPerA4(); result->opera_ = (yyval.opera_); }
#line 1613 "Parser.c"
    break;

  case 35: /* OPL: VALUE OPerL VALUE  */
#line 222 "claud.y"
                        { (yyval.opl_) = make_OPL1((yyvsp[-2].value_), (yyvsp[-1].operl_), (yyvsp[0].value_)); result->opl_ = (yyval.opl_); }
#line 1619 "Parser.c"
    break;

  case 36: /* CLAUDDIZ: _KW_ClaudDiz _LPAREN VALUE _RPAREN _SEMI  */
#line 224 "claud.y"
                                                    { (yyval.clauddiz_) = make_CLAUDDIZ1((yyvsp[-2].value_)); result->clauddiz_ = (yyval.clauddiz_); }
#line 1625 "Parser.c"
    break;

  case 37: /* RECEBA: _KW_Receba _LPAREN Type _IDENT_ _RPAREN _SEMI  */
#line 226 "claud.y"
                                                       { (yyval.receba_) = make_RECEBA1((yyvsp[-3].type_), (yyvsp[-2]._string)); result->receba_ = (yyval.receba_); }
#line 1631 "Parser.c"
    break;

  case 38: /* ATE: _KW_ATE _LPAREN OPL _RPAREN Block  */
#line 228 "claud.y"
                                        { (yyval.ate_) = make_ATE1((yyvsp[-2].opl_), (yyvsp[0].block_)); result->ate_ = (yyval.ate_); }
#line 1637 "Parser.c"
    break;

  case 39: /* FAZAI: _KW_FAZAI _LPAREN Type _IDENT_ _EQ VALUE _BAR OPL _BAR _INTEGER_ _RPAREN Block  */
#line 230 "claud.y"
                                                                                       { (yyval.fazai_) = make_FAZAI1((yyvsp[-9].type_), (yyvsp[-8]._string), (yyvsp[-6].value_), (yyvsp[-4].opl_), (yyvsp[-2]._int), (yyvsp[0].block_)); result->fazai_ = (yyval.fazai_); }
#line 1643 "Parser.c"
    break;

  case 40: /* VALUE: _IDENT_  */
#line 232 "claud.y"
                { (yyval.value_) = make_VALUEIdent((yyvsp[0]._string)); result->value_ = (yyval.value_); }
#line 1649 "Parser.c"
    break;

  case 41: /* VALUE: _STRING_  */
#line 233 "claud.y"
             { (yyval.value_) = make_VALUEString((yyvsp[0]._string)); result->value_ = (yyval.value_); }
#line 1655 "Parser.c"
    break;

  case 42: /* VALUE: _INTEGER_  */
#line 234 "claud.y"
              { (yyval.value_) = make_VALUEInteger((yyvsp[0]._int)); result->value_ = (yyval.value_); }
#line 1661 "Parser.c"
    break;

  case 43: /* VALUE: _DOUBLE_  */
#line 235 "claud.y"
             { (yyval.value_) = make_VALUEDouble((yyvsp[0]._double)); result->value_ = (yyval.value_); }
#line 1667 "Parser.c"
    break;

  case 44: /* Type: _KW_interu  */
#line 237 "claud.y"
                  { (yyval.type_) = make_Type_interu(); result->type_ = (yyval.type_); }
#line 1673 "Parser.c"
    break;

  case 45: /* Type: _KW_floaty  */
#line 238 "claud.y"
               { (yyval.type_) = make_Type_floaty(); result->type_ = (yyval.type_); }
#line 1679 "Parser.c"
    break;

  case 46: /* Type: _KW_stringo  */
#line 239 "claud.y"
                { (yyval.type_) = make_Type_stringo(); result->type_ = (yyval.type_); }
#line 1685 "Parser.c"
    break;

  case 47: /* VET: Type _IDENT_ _LBRACK _INTEGER_ _RBRACK _SEMI  */
#line 241 "claud.y"
                                                   { (yyval.vet_) = make_VET1((yyvsp[-5].type_), (yyvsp[-4]._string), (yyvsp[-2]._int)); result->vet_ = (yyval.vet_); }
#line 1691 "Parser.c"
    break;

  case 48: /* VET: _KW_int _IDENT_ _LBRACK _INTEGER_ _RBRACK _EQ _LBRACK ConjInt _RBRACK _SEMI  */
#line 242 "claud.y"
                                                                                { (yyval.vet_) = make_VET2((yyvsp[-8]._string), (yyvsp[-6]._int), (yyvsp[-2].conjint_)); result->vet_ = (yyval.vet_); }
#line 1697 "Parser.c"
    break;

  case 49: /* VET: _KW_float _IDENT_ _LBRACK _INTEGER_ _RBRACK _EQ _LBRACK ConjReal _RBRACK _SEMI  */
#line 243 "claud.y"
                                                                                   { (yyval.vet_) = make_VET3((yyvsp[-8]._string), (yyvsp[-6]._int), (yyvsp[-2].conjreal_)); result->vet_ = (yyval.vet_); }
#line 1703 "Parser.c"
    break;

  case 50: /* VET: _KW_string _IDENT_ _LBRACK _INTEGER_ _RBRACK _EQ _LBRACK ConjString _RBRACK _SEMI  */
#line 244 "claud.y"
                                                                                      { (yyval.vet_) = make_VET4((yyvsp[-8]._string), (yyvsp[-6]._int), (yyvsp[-2].conjstring_)); result->vet_ = (yyval.vet_); }
#line 1709 "Parser.c"
    break;

  case 51: /* STRUCT: _KW_ISTRUCT _LBRACK _INTEGER_ _RBRACK _EQ _LBRACE HeteroElements _RBRACE _SEMI  */
#line 246 "claud.y"
                                                                                        { (yyval.struct_) = make_STRUCT1((yyvsp[-6]._int), (yyvsp[-2].heteroelements_)); result->struct_ = (yyval.struct_); }
#line 1715 "Parser.c"
    break;

  case 52: /* HeteroElements: HeteroElement  */
#line 248 "claud.y"
                               { (yyval.heteroelements_) = make_HeteroElementsHeteroElement((yyvsp[0].heteroelement_)); result->heteroelements_ = (yyval.heteroelements_); }
#line 1721 "Parser.c"
    break;

  case 53: /* HeteroElements: HeteroElement _COMMA HeteroElements  */
#line 249 "claud.y"
                                        { (yyval.heteroelements_) = make_HeteroElements1((yyvsp[-2].heteroelement_), (yyvsp[0].heteroelements_)); result->heteroelements_ = (yyval.heteroelements_); }
#line 1727 "Parser.c"
    break;

  case 54: /* HeteroElement: _STRING_  */
#line 251 "claud.y"
                         { (yyval.heteroelement_) = make_HeteroElementString((yyvsp[0]._string)); result->heteroelement_ = (yyval.heteroelement_); }
#line 1733 "Parser.c"
    break;

  case 55: /* HeteroElement: _DOUBLE_  */
#line 252 "claud.y"
             { (yyval.heteroelement_) = make_HeteroElementDouble((yyvsp[0]._double)); result->heteroelement_ = (yyval.heteroelement_); }
#line 1739 "Parser.c"
    break;

  case 56: /* HeteroElement: _INTEGER_  */
#line 253 "claud.y"
              { (yyval.heteroelement_) = make_HeteroElementInteger((yyvsp[0]._int)); result->heteroelement_ = (yyval.heteroelement_); }
#line 1745 "Parser.c"
    break;

  case 57: /* FUNC: _KW_FUNC _IDENT_ _LPAREN _RPAREN Block  */
#line 255 "claud.y"
                                              { (yyval.func_) = make_FUNC1((yyvsp[-3]._string), (yyvsp[0].block_)); result->func_ = (yyval.func_); }
#line 1751 "Parser.c"
    break;

  case 58: /* GOTO: _KW_GOTO _INTEGER_ _SEMI  */
#line 257 "claud.y"
                                { (yyval.goto_) = make_GOTO1((yyvsp[-1]._int)); result->goto_ = (yyval.goto_); }
#line 1757 "Parser.c"
    break;

  case 59: /* LABEL: _KW_LABEL _INTEGER_ _COLON Block  */
#line 259 "claud.y"
                                         { (yyval.label_) = make_LABEL1((yyvsp[-2]._int), (yyvsp[0].block_)); result->label_ = (yyval.label_); }
#line 1763 "Parser.c"
    break;

  case 60: /* ConjInt: _INTEGER_  */
#line 261 "claud.y"
                    { (yyval.conjint_) = make_ConjIntInteger((yyvsp[0]._int)); result->conjint_ = (yyval.conjint_); }
#line 1769 "Parser.c"
    break;

  case 61: /* ConjInt: _INTEGER_ _COMMA ConjInt  */
#line 262 "claud.y"
                             { (yyval.conjint_) = make_ConjInt1((yyvsp[-2]._int), (yyvsp[0].conjint_)); result->conjint_ = (yyval.conjint_); }
#line 1775 "Parser.c"
    break;

  case 62: /* ConjReal: _DOUBLE_  */
#line 264 "claud.y"
                    { (yyval.conjreal_) = make_ConjRealDouble((yyvsp[0]._double)); result->conjreal_ = (yyval.conjreal_); }
#line 1781 "Parser.c"
    break;

  case 63: /* ConjReal: _DOUBLE_ _COMMA ConjReal  */
#line 265 "claud.y"
                             { (yyval.conjreal_) = make_ConjReal1((yyvsp[-2]._double), (yyvsp[0].conjreal_)); result->conjreal_ = (yyval.conjreal_); }
#line 1787 "Parser.c"
    break;

  case 64: /* ConjString: _STRING_  */
#line 267 "claud.y"
                      { (yyval.conjstring_) = make_ConjStringString((yyvsp[0]._string)); result->conjstring_ = (yyval.conjstring_); }
#line 1793 "Parser.c"
    break;

  case 65: /* ConjString: _STRING_ _COMMA ConjString  */
#line 268 "claud.y"
                               { (yyval.conjstring_) = make_ConjString1((yyvsp[-2]._string), (yyvsp[0].conjstring_)); result->conjstring_ = (yyval.conjstring_); }
#line 1799 "Parser.c"
    break;

  case 66: /* CONST: _KW_CONST Type _IDENT_ _EQ VALUE _SEMI  */
#line 270 "claud.y"
                                               { (yyval.const_) = make_LConst((yyvsp[-4].type_), (yyvsp[-3]._string), (yyvsp[-1].value_)); result->const_ = (yyval.const_); }
#line 1805 "Parser.c"
    break;

  case 67: /* POINT: Type _STAR _IDENT_ _EQ _IDENT_ _SEMI  */
#line 272 "claud.y"
                                             { (yyval.point_) = make_LPoint((yyvsp[-5].type_), (yyvsp[-3]._string), (yyvsp[-1]._string)); result->point_ = (yyval.point_); }
#line 1811 "Parser.c"
    break;


#line 1815 "Parser.c"

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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, scanner, result, YY_("syntax error"));
    }

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc, scanner, result);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
  yyerror (&yylloc, scanner, result, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, scanner, result);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp, scanner, result);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 275 "claud.y"



/* Entrypoint: parse S from file. */
S pS(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.s_;
  }
}

/* Entrypoint: parse S from string. */
S psS(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.s_;
  }
}

/* Entrypoint: parse Block from file. */
Block pBlock(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.block_;
  }
}

/* Entrypoint: parse Block from string. */
Block psBlock(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.block_;
  }
}

/* Entrypoint: parse CMDS from file. */
CMDS pCMDS(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmds_;
  }
}

/* Entrypoint: parse CMDS from string. */
CMDS psCMDS(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmds_;
  }
}

/* Entrypoint: parse CMD from file. */
CMD pCMD(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmd_;
  }
}

/* Entrypoint: parse CMD from string. */
CMD psCMD(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.cmd_;
  }
}

/* Entrypoint: parse ATB from file. */
ATB pATB(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atb_;
  }
}

/* Entrypoint: parse ATB from string. */
ATB psATB(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.atb_;
  }
}

/* Entrypoint: parse EXP from file. */
EXP pEXP(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse EXP from string. */
EXP psEXP(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.exp_;
  }
}

/* Entrypoint: parse SE from file. */
SE pSE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.se_;
  }
}

/* Entrypoint: parse SE from string. */
SE psSE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.se_;
  }
}

/* Entrypoint: parse OPerL from file. */
OPerL pOPerL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operl_;
  }
}

/* Entrypoint: parse OPerL from string. */
OPerL psOPerL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.operl_;
  }
}

/* Entrypoint: parse OPerA from file. */
OPerA pOPerA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opera_;
  }
}

/* Entrypoint: parse OPerA from string. */
OPerA psOPerA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opera_;
  }
}

/* Entrypoint: parse OPL from file. */
OPL pOPL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opl_;
  }
}

/* Entrypoint: parse OPL from string. */
OPL psOPL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.opl_;
  }
}

/* Entrypoint: parse CLAUDDIZ from file. */
CLAUDDIZ pCLAUDDIZ(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.clauddiz_;
  }
}

/* Entrypoint: parse CLAUDDIZ from string. */
CLAUDDIZ psCLAUDDIZ(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.clauddiz_;
  }
}

/* Entrypoint: parse RECEBA from file. */
RECEBA pRECEBA(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.receba_;
  }
}

/* Entrypoint: parse RECEBA from string. */
RECEBA psRECEBA(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.receba_;
  }
}

/* Entrypoint: parse ATE from file. */
ATE pATE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ate_;
  }
}

/* Entrypoint: parse ATE from string. */
ATE psATE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.ate_;
  }
}

/* Entrypoint: parse FAZAI from file. */
FAZAI pFAZAI(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.fazai_;
  }
}

/* Entrypoint: parse FAZAI from string. */
FAZAI psFAZAI(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.fazai_;
  }
}

/* Entrypoint: parse VALUE from file. */
VALUE pVALUE(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.value_;
  }
}

/* Entrypoint: parse VALUE from string. */
VALUE psVALUE(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.value_;
  }
}

/* Entrypoint: parse Type from file. */
Type pType(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse Type from string. */
Type psType(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.type_;
  }
}

/* Entrypoint: parse VET from file. */
VET pVET(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vet_;
  }
}

/* Entrypoint: parse VET from string. */
VET psVET(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.vet_;
  }
}

/* Entrypoint: parse STRUCT from file. */
STRUCT pSTRUCT(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.struct_;
  }
}

/* Entrypoint: parse STRUCT from string. */
STRUCT psSTRUCT(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.struct_;
  }
}

/* Entrypoint: parse HeteroElements from file. */
HeteroElements pHeteroElements(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelements_;
  }
}

/* Entrypoint: parse HeteroElements from string. */
HeteroElements psHeteroElements(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelements_;
  }
}

/* Entrypoint: parse HeteroElement from file. */
HeteroElement pHeteroElement(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelement_;
  }
}

/* Entrypoint: parse HeteroElement from string. */
HeteroElement psHeteroElement(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.heteroelement_;
  }
}

/* Entrypoint: parse FUNC from file. */
FUNC pFUNC(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.func_;
  }
}

/* Entrypoint: parse FUNC from string. */
FUNC psFUNC(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.func_;
  }
}

/* Entrypoint: parse GOTO from file. */
GOTO pGOTO(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.goto_;
  }
}

/* Entrypoint: parse GOTO from string. */
GOTO psGOTO(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.goto_;
  }
}

/* Entrypoint: parse LABEL from file. */
LABEL pLABEL(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.label_;
  }
}

/* Entrypoint: parse LABEL from string. */
LABEL psLABEL(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.label_;
  }
}

/* Entrypoint: parse ConjInt from file. */
ConjInt pConjInt(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjint_;
  }
}

/* Entrypoint: parse ConjInt from string. */
ConjInt psConjInt(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjint_;
  }
}

/* Entrypoint: parse ConjReal from file. */
ConjReal pConjReal(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjreal_;
  }
}

/* Entrypoint: parse ConjReal from string. */
ConjReal psConjReal(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjreal_;
  }
}

/* Entrypoint: parse ConjString from file. */
ConjString pConjString(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjstring_;
  }
}

/* Entrypoint: parse ConjString from string. */
ConjString psConjString(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.conjstring_;
  }
}

/* Entrypoint: parse CONST from file. */
CONST pCONST(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.const_;
  }
}

/* Entrypoint: parse CONST from string. */
CONST psCONST(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.const_;
  }
}

/* Entrypoint: parse POINT from file. */
POINT pPOINT(FILE *inp)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(inp);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  int error = yyparse(scanner, &result);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.point_;
  }
}

/* Entrypoint: parse POINT from string. */
POINT psPOINT(const char *str)
{
  YYSTYPE result;
  yyscan_t scanner = claud__initialize_lexer(0);
  if (!scanner) {
    fprintf(stderr, "Failed to initialize lexer.\n");
    return 0;
  }
  YY_BUFFER_STATE buf = claud__scan_string(str, scanner);
  int error = yyparse(scanner, &result);
  claud__delete_buffer(buf, scanner);
  claud_lex_destroy(scanner);
  if (error)
  { /* Failure */
    return 0;
  }
  else
  { /* Success */
    return result.point_;
  }
}



