/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "Lotus.y"


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
extern int yylineno;
extern char* yytext;
extern int yylex();

void yyerror(char *s);

enum REG_SEQ{v=0,t=1,a=2};
int get_reg(enum REG_SEQ reg_seq,int flag);
static int reg_amount[3]={-1,-1,-1};

int bool_num=0;
int bool_b=0;

int True_label[32]={0};
int False_label[32]={0};

int TF_label[2][32]={0};
int bool_while = 0;
int P_TF=0;
int P_IF[32]={-1};
int P_FOR[32]={-1};
int P_WHILE[32]={-1};
int IF_count=-1;
int FOR_count=-1;
int WHILE_count=-1;
int label_cur=0;
int label_num=0;
int get_label(int flag);
int test = 0;
int F_Q=0;

void start_if(int num);



#line 112 "Lotus.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_LOTUS_TAB_H_INCLUDED
# define YY_YY_LOTUS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    Identifier = 258,
    IntegerC = 259,
    Else = 260,
    Exit = 261,
    Int = 262,
    If = 263,
    Read = 264,
    While = 265,
    Write = 266,
    Plus = 267,
    Minu = 268,
    Aste = 269,
    Slas = 270,
    Perc = 271,
    Dequ = 272,
    Nequ = 273,
    Grea = 274,
    Greq = 275,
    Less = 276,
    Leeq = 277,
    Ampe = 278,
    Dver = 279,
    Excl = 280,
    Equa = 281,
    Semi = 282,
    Comm = 283,
    Opar = 284,
    Cpar = 285,
    Obra = 286,
    Cbra = 287
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 83 "Lotus.y"
union yylval
{
#line 83 "Lotus.y"

	char* str;
	int value;

#line 203 "Lotus.tab.c"

};
#line 83 "Lotus.y"
typedef union yylval YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_LOTUS_TAB_H_INCLUDED  */



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
typedef yytype_int8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYLAST   102

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  103

#define YYUNDEFTOK  2
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    89,    89,    92,    92,    92,    95,    96,    99,    99,
     102,   103,   106,   108,   110,   114,   116,   118,   121,   120,
     126,   126,   132,   136,   136,   144,   153,   153,   194,   199,
     207,   217,   240,   242,   242,   271,   273,   273,   301,   303,
     303,   306,   308,   310,   312,   314,   316,   319,   321,   324,
     328,   330,   333,   337,   342,   344,   347,   349,   353
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Identifier", "IntegerC", "Else", "Exit",
  "Int", "If", "Read", "While", "Write", "Plus", "Minu", "Aste", "Slas",
  "Perc", "Dequ", "Nequ", "Grea", "Greq", "Less", "Leeq", "Ampe", "Dver",
  "Excl", "Equa", "Semi", "Comm", "Opar", "Cpar", "Obra", "Cbra",
  "$accept", "program", "function_body", "$@1", "$@2",
  "variable_declarations", "variable_declaration", "$@3", "statements",
  "statement", "$@4", "assignment_statement", "$@5", "compound_statement",
  "if_statement", "$@6", "while_statement", "$@7", "exit_statement",
  "read_statement", "write_statement", "bool_expression",
  "bool_expression2", "$@8", "bool_term", "$@9", "bool_factor", "$@10",
  "bool_primary", "arith_expression", "arith_term", "arith_factor",
  "arith_primary", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
# endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-37)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       3,   -14,    23,    -4,   -69,    29,   -69,   -69,   -69,    55,
      65,   -69,   -69,   -69,    -1,    42,   -69,    46,    56,    72,
     -69,     9,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,    58,   -69,    45,    60,    57,   -69,   -69,
      21,     9,    32,    27,   -69,   -69,     8,   -69,     9,   -69,
      61,    64,    66,   -69,   -69,    59,   -69,    45,   -69,    -9,
       9,     9,   -69,     9,     9,     9,   -69,    34,     9,    26,
      68,    67,     9,     9,     9,     9,     9,     9,    63,   -69,
      27,    27,   -69,   -69,   -69,   -69,   -69,    89,    45,    45,
      54,    54,    54,    54,    54,    54,    26,    90,    66,   -69,
     -69,    26,   -69
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     2,     6,     4,
       0,    10,     7,     8,     0,     0,    20,     0,     0,     0,
      26,     0,    10,     5,    11,    12,    13,    14,    15,    16,
      17,    18,     9,     0,    28,     0,     0,     0,    57,    56,
       0,     0,     0,    47,    50,    54,     0,    19,     0,    39,
       0,    31,    32,    35,    38,     0,    29,     0,    55,     0,
       0,     0,    30,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
      48,    49,    51,    52,    53,    21,    40,    25,     0,     0,
      41,    42,    43,    44,    45,    46,     0,     0,    34,    37,
      27,     0,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,    74,   -68,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,    40,   -69,   -69,    10,   -69,    11,   -69,    31,   -21,
      22,     0,    62
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    11,     9,    12,    15,    14,    24,
      47,    25,    33,    26,    27,    97,    28,    37,    29,    30,
      31,    50,    51,    70,    52,    71,    53,    68,    54,    55,
      43,    44,    45
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    87,    16,    60,    61,    17,     1,    18,    19,    20,
      21,    16,    38,    39,    17,     3,    18,    19,    20,    21,
      59,    79,    40,     4,    38,    39,     5,    67,   100,    16,
      22,    23,    17,   102,    18,    19,    20,    21,    41,    22,
      66,    63,    64,    65,    60,    61,    60,    61,    38,    39,
      41,    90,    91,    92,    93,    94,    95,    22,    40,    62,
       6,    85,    10,    82,    83,    84,    60,    61,    13,    32,
      49,    60,    61,    34,    41,    36,    72,    73,    74,    75,
      76,    77,    80,    81,    48,    35,    57,    56,   -33,   -36,
      89,    69,    88,    96,   -23,   101,    46,    78,    98,    86,
      99,     0,    58
};

static const yytype_int8 yycheck[] =
{
      21,    69,     3,    12,    13,     6,     3,     8,     9,    10,
      11,     3,     3,     4,     6,    29,     8,     9,    10,    11,
      41,    30,    13,     0,     3,     4,    30,    48,    96,     3,
      31,    32,     6,   101,     8,     9,    10,    11,    29,    31,
      32,    14,    15,    16,    12,    13,    12,    13,     3,     4,
      29,    72,    73,    74,    75,    76,    77,    31,    13,    27,
      31,    27,     7,    63,    64,    65,    12,    13,     3,    27,
      25,    12,    13,    27,    29,     3,    17,    18,    19,    20,
      21,    22,    60,    61,    26,    29,    29,    27,    24,    23,
      23,    30,    24,    30,     5,     5,    22,    57,    88,    68,
      89,    -1,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    34,    29,     0,    30,    31,    35,    36,    38,
       7,    37,    39,     3,    41,    40,     3,     6,     8,     9,
      10,    11,    31,    32,    42,    44,    46,    47,    49,    51,
      52,    53,    27,    45,    27,    29,     3,    50,     3,     4,
      13,    29,    62,    63,    64,    65,    41,    43,    26,    25,
      54,    55,    57,    59,    61,    62,    27,    29,    65,    62,
      12,    13,    27,    14,    15,    16,    32,    62,    60,    30,
      56,    58,    17,    18,    19,    20,    21,    22,    54,    30,
      63,    63,    64,    64,    64,    27,    61,    42,    24,    23,
      62,    62,    62,    62,    62,    62,    30,    48,    57,    59,
      42,     5,    42
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    36,    37,    35,    38,    38,    40,    39,
      41,    41,    42,    42,    42,    42,    42,    42,    43,    42,
      45,    44,    46,    48,    47,    47,    50,    49,    51,    52,
      53,    54,    55,    56,    55,    57,    58,    57,    59,    60,
      59,    61,    61,    61,    61,    61,    61,    62,    62,    62,
      63,    63,    63,    63,    64,    64,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     0,     6,     0,     2,     0,     4,
       0,     2,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     5,     3,     0,     8,     5,     0,     6,     2,     3,
       3,     1,     1,     0,     4,     1,     0,     4,     1,     0,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     2,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

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

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
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
#  endif
# endif

# ifndef yytnamerr
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
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
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
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
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
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 90 "Lotus.y"
                {/*printf("program -> Identifier () function_body\n");*/}
#line 1565 "Lotus.tab.c"
    break;

  case 3:
#line 92 "Lotus.y"
                     {printf("\t.data\n");}
#line 1571 "Lotus.tab.c"
    break;

  case 4:
#line 92 "Lotus.y"
                                                                   {printf("\t.text\n"); printf("main:\n");}
#line 1577 "Lotus.tab.c"
    break;

  case 5:
#line 93 "Lotus.y"
                {/*printf("function_body -> { variable_declarations statements }\n");*/}
#line 1583 "Lotus.tab.c"
    break;

  case 6:
#line 95 "Lotus.y"
                        {/*printf("variable_declarations -> empty\n");*/}
#line 1589 "Lotus.tab.c"
    break;

  case 7:
#line 97 "Lotus.y"
        {/*printf("variable_declarations -> variable_declarations variable_declaration\n");*/}
#line 1595 "Lotus.tab.c"
    break;

  case 8:
#line 99 "Lotus.y"
                                      { printf("%s:\t.word\t",(yyvsp[0].str)); }
#line 1601 "Lotus.tab.c"
    break;

  case 9:
#line 100 "Lotus.y"
                        {/*printf("variable_declaration -> int Identifier ;\n" ); */printf("0\n"); }
#line 1607 "Lotus.tab.c"
    break;

  case 10:
#line 102 "Lotus.y"
             {/*rintf("statements -> empty\n");*/}
#line 1613 "Lotus.tab.c"
    break;

  case 11:
#line 104 "Lotus.y"
        {/*printf("statements -> statements statement\n");*/}
#line 1619 "Lotus.tab.c"
    break;

  case 12:
#line 107 "Lotus.y"
                {/*printf("statement -> assignment_statement\n");*/}
#line 1625 "Lotus.tab.c"
    break;

  case 13:
#line 109 "Lotus.y"
        {/*printf("statement -> compound_statement\n");*/}
#line 1631 "Lotus.tab.c"
    break;

  case 14:
#line 111 "Lotus.y"
        {	IF_count--;
			label_cur=label_num;
			P_TF++;}
#line 1639 "Lotus.tab.c"
    break;

  case 15:
#line 115 "Lotus.y"
        {/*printf("statement -> while_statement\n");*/}
#line 1645 "Lotus.tab.c"
    break;

  case 16:
#line 117 "Lotus.y"
        {/*printf("statement -> exit_statement\n");*/}
#line 1651 "Lotus.tab.c"
    break;

  case 17:
#line 119 "Lotus.y"
        {/*printf("statement -> read_statement \n");*/}
#line 1657 "Lotus.tab.c"
    break;

  case 18:
#line 121 "Lotus.y"
        {/*printf("statement -> write_statement\n");*/}
#line 1663 "Lotus.tab.c"
    break;

  case 19:
#line 122 "Lotus.y"
        {}
#line 1669 "Lotus.tab.c"
    break;

  case 20:
#line 126 "Lotus.y"
                                  {printf("\tla\t$t%d, %s\n",get_reg(t,1), (yyvsp[0].str)); printf("test\n");}
#line 1675 "Lotus.tab.c"
    break;

  case 21:
#line 127 "Lotus.y"
                        {	
			printf("\tsw\t$t%d, 0($t%d)\n",get_reg(t,0),get_reg(t,0)-1);
			get_reg(t,-1);
			get_reg(t,-1);}
#line 1684 "Lotus.tab.c"
    break;

  case 22:
#line 133 "Lotus.y"
                        {/*printf("compound_statement -> { statements }\n");*/}
#line 1690 "Lotus.tab.c"
    break;

  case 23:
#line 136 "Lotus.y"
                                               {	
			label_cur=TF_label[0][P_IF[IF_count]];
			TF_label[F_Q%2][label_cur]=get_label(1);
			printf("\tb\tL%d\n",TF_label[F_Q%2][label_cur]);
			printf("L%d:\t# else\n",TF_label[1][P_IF[IF_count]]);
			P_TF++;}
#line 1701 "Lotus.tab.c"
    break;

  case 24:
#line 142 "Lotus.y"
        {	//printf("L%d:\t# endif\n",TF_label[F_Q%2][label_cur]);
	}
#line 1708 "Lotus.tab.c"
    break;

  case 25:
#line 145 "Lotus.y"
                {	label_cur=P_IF[IF_count];
			printf("L%d:\t# endif\n",TF_label[(F_Q+1)%2][label_cur]);
			}
#line 1716 "Lotus.tab.c"
    break;

  case 26:
#line 153 "Lotus.y"
                        { printf("#while\n");
			//label_cur=get_label(0);
			bool_while =1;
			printf("L%d:\t# endif2\n",get_label(1));
			WHILE_count++; 
			P_WHILE[WHILE_count]=label_num;
			
			//printf("\tL%d\n",P_WHILE[WHILE_count]);
			//printf("\tWHILE_COUNT%d\n",WHILE_count);
			//TF_label[F_Q%2][label_cur]=get_label(1);
			
			//printf("\tb\tL%d\n",TF_label[F_Q%2][label_cur]);
			//printf("L%d:\t# else\n",TF_label[1][P_IF[WHILE_count]]);
			//P_TF++			
			}
#line 1736 "Lotus.tab.c"
    break;

  case 27:
#line 168 "Lotus.y"
                        { 
			//label_cur=TF_label[0][P_IF[WHILE_count]];
			
			//printf("\tb\tL%d\n",P_WHILE[WHILE_count]);
			//printf("\tfffffffffffff%d\n",label_cur);
			//if(WHILE_count > 0 )
			//if(bool_while == 1 )
								//printf("\t2L%d\n",P_WHILE[WHILE_count]);
								//printf("\t2WHILE_COUNT%d\n",WHILE_count);
					printf("\tb\tL%d\n",P_WHILE[WHILE_count]);
					//get_label(1);
				//printf("wwwwwwwwwww%d\n",label_num);
				if(P_WHILE[WHILE_count] -1 == 0 )
					printf("L%d:\t\n",label_num);
					else{
					printf("L%d:\t\n",label_num);
				printf("L%d:\t\n",P_WHILE[WHILE_count] -1);
				}
			
			//printf("L%d:\t# else\n",TF_label[0][P_IF[IF_count]]);
			//printf("L%d:\t# else\n",TF_label[0][P_IF[IF_count]]);
			WHILE_count--;
								bool_while=0;
			//P_TF++;
			/*printf("while_statement -> while ( bool_expression ) statement\n");*/}
#line 1766 "Lotus.tab.c"
    break;

  case 28:
#line 195 "Lotus.y"
                {	printf("\tli\t$v%d, 10\n",get_reg(v,1));
			printf("\tsyscall\n");
			get_reg(v,-1);}
#line 1774 "Lotus.tab.c"
    break;

  case 29:
#line 200 "Lotus.y"
                {	printf("\tli\t$v%d, 5\n",get_reg(v,1));
			printf("\tsyscall\n");
			printf("\tla\t$t%d, %s\n",get_reg(t,1),(yyvsp[-1].str));
			printf("\tsw\t$v%d, 0($t%d)\n",get_reg(t,0),get_reg(t,0));
			get_reg(v,-1);
			get_reg(t,-1);}
#line 1785 "Lotus.tab.c"
    break;

  case 30:
#line 208 "Lotus.y"
                {	printf("\tmove\t$a%d, $t%d\n",get_reg(a,1),get_reg(t,0));
			printf("\tli\t$v%d, 1\n",get_reg(v,1));
			printf("\tsyscall\n");
			get_reg(a,-1);
			get_reg(t,-1);
			get_reg(v,-1);}
#line 1796 "Lotus.tab.c"
    break;

  case 31:
#line 218 "Lotus.y"
                {	if(bool_b==1){
					printf(", L%d\n",TF_label[F_Q%2][P_IF[IF_count]]);
					if(bool_while == 1 )
					if(P_WHILE[WHILE_count] -1 == 0 )
					//printf("L%d:\t\n",label_num);
					printf("\tb\tL%d\n",label_num);
					else
		
				printf("\tb\tL%d\n",P_WHILE[WHILE_count]-1);
					
					else
					printf("\tb\tL%d\n",TF_label[(F_Q+1)%2][P_IF[IF_count]]);

					//printf("\t1fffffffffffff%d\n",label_cur);
					bool_b--;
					F_Q=0;
				}
				printf("L%d:\t# then\n",TF_label[0][P_IF[IF_count]]);
				
				P_TF++;
				bool_num=0;}
#line 1822 "Lotus.tab.c"
    break;

  case 32:
#line 241 "Lotus.y"
                        {/*printf("bool_expression -> bool_term\n");*/}
#line 1828 "Lotus.tab.c"
    break;

  case 33:
#line 242 "Lotus.y"
                           {	if(bool_b==1){
				get_label(1);
				
				//printf(", L%d\n",TF_label[F_Q%2][label_cur]);
				label_cur=label_num;
				TF_label[F_Q%2][label_cur]=TF_label[0][P_IF[IF_count]];
				TF_label[(F_Q+1)%2][label_cur]=label_cur;
				P_TF++;
				printf(", L%d\n",TF_label[F_Q%2][label_cur]);		
				if(bool_while == 1 )
					if(P_WHILE[WHILE_count] -1 == 0 )
					//printf("L%d:\t\n",label_num);
					printf("\tb\tL%d\n",label_num);
					else
		
				printf("\tb\tL%d\n",P_WHILE[WHILE_count]-1);
					else
			printf("\tb\tL%d\n",TF_label[(F_Q+1)%2][label_cur]);
					
			
				printf("L%d:",TF_label[(F_Q+1)%2][label_cur]);
				
				//printf("\t2fffffffffffff%d\n",label_cur);
				bool_b--;
				F_Q=0;}
		}
#line 1859 "Lotus.tab.c"
    break;

  case 34:
#line 269 "Lotus.y"
        {/*printf("bool_expression -> bool_expression || bool_term\n");*/}
#line 1865 "Lotus.tab.c"
    break;

  case 35:
#line 272 "Lotus.y"
                {/*printf("bool_term -> bool_factor\n");*/}
#line 1871 "Lotus.tab.c"
    break;

  case 36:
#line 273 "Lotus.y"
                    {	if(bool_b==1){
				get_label(1);
				
				label_cur=label_num;
				TF_label[F_Q%2][label_cur]=label_cur;
				TF_label[(F_Q+1)%2][label_cur]=TF_label[1][P_IF[IF_count]];
				P_TF++;
				
				printf(", L%d\n",TF_label[F_Q%2][label_cur]);
				if(bool_while == 1 )
					if(P_WHILE[WHILE_count] -1 == 0 )
					//printf("L%d:\t\n",label_num);
					printf("\tb\tL%d\n",label_num);
					else
		
				printf("\tb\tL%d\n",P_WHILE[WHILE_count]-1);
					else
				printf("\tb\tL%d\n",TF_label[(F_Q+1)%2][label_cur]);
				
				
				printf("L%d:",TF_label[F_Q%2][label_cur]);
				//printf("\t3fffffffffffff%d\n",label_cur);
				bool_b--;
				F_Q=0;}
		}
#line 1901 "Lotus.tab.c"
    break;

  case 38:
#line 302 "Lotus.y"
                { /*printf("bool_factor -> bool_primary\n");*/}
#line 1907 "Lotus.tab.c"
    break;

  case 39:
#line 303 "Lotus.y"
               {/*printf("bool_factor -> ! bool_primary\n");*/F_Q++;}
#line 1913 "Lotus.tab.c"
    break;

  case 41:
#line 307 "Lotus.y"
                        {	start_if(0);}
#line 1919 "Lotus.tab.c"
    break;

  case 42:
#line 309 "Lotus.y"
        {	start_if(1);}
#line 1925 "Lotus.tab.c"
    break;

  case 43:
#line 311 "Lotus.y"
        {	start_if(2);}
#line 1931 "Lotus.tab.c"
    break;

  case 44:
#line 313 "Lotus.y"
        {	start_if(3);}
#line 1937 "Lotus.tab.c"
    break;

  case 45:
#line 315 "Lotus.y"
        {	start_if(4);}
#line 1943 "Lotus.tab.c"
    break;

  case 46:
#line 317 "Lotus.y"
        {	start_if(5);}
#line 1949 "Lotus.tab.c"
    break;

  case 47:
#line 320 "Lotus.y"
                {/*printf("arith_expression -> arith_term\n");*/}
#line 1955 "Lotus.tab.c"
    break;

  case 48:
#line 322 "Lotus.y"
        {	printf("\tadd\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1,get_reg(t,0)-1,get_reg(t,0));
			get_reg(t,-1);}
#line 1962 "Lotus.tab.c"
    break;

  case 49:
#line 325 "Lotus.y"
        {	printf("\tsub\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1,get_reg(t,0)-1,get_reg(t,0));
			get_reg(t,-1);}
#line 1969 "Lotus.tab.c"
    break;

  case 50:
#line 329 "Lotus.y"
                { /*printf("arith_term -> arith_factor\n");*/}
#line 1975 "Lotus.tab.c"
    break;

  case 51:
#line 331 "Lotus.y"
                {	printf("\tmul\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1,get_reg(t,0)-1,get_reg(t,0));
			get_reg(t,-1);}
#line 1982 "Lotus.tab.c"
    break;

  case 52:
#line 334 "Lotus.y"
                {	printf("\tdiv\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1 ,get_reg(t,0)-1,get_reg(t,0));
			//printf("\tmflo\t$t%d\n",get_reg(t,0)-1);
			get_reg(t,-1);}
#line 1990 "Lotus.tab.c"
    break;

  case 53:
#line 338 "Lotus.y"
                {	printf("\trem\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1 ,get_reg(t,0)-1,get_reg(t,0));
			//printf("\tmfli\t$t%d\n",get_reg(t,0)-1);
			get_reg(t,-1);}
#line 1998 "Lotus.tab.c"
    break;

  case 54:
#line 343 "Lotus.y"
        {/*printf("arith_factor -> arith_primary\n");*/}
#line 2004 "Lotus.tab.c"
    break;

  case 55:
#line 345 "Lotus.y"
        {	printf("\tneg\t$t%d, $t%d\n",get_reg(t,0),get_reg(t,0));}
#line 2010 "Lotus.tab.c"
    break;

  case 56:
#line 348 "Lotus.y"
        {printf("\tli\t$t%d, %d\n",get_reg(t,1),(yyvsp[0].value));}
#line 2016 "Lotus.tab.c"
    break;

  case 57:
#line 350 "Lotus.y"
        {	
	printf("\tla\t$t%d, %s\n",get_reg(t,1),(yyvsp[0].str));
			printf("\tlw\t$t%d, 0($t%d)\n",get_reg(t,0),get_reg(t,0));}
#line 2024 "Lotus.tab.c"
    break;

  case 58:
#line 354 "Lotus.y"
        { /*printf("arith_primary -> ( arith_expression )\n");*/}
#line 2030 "Lotus.tab.c"
    break;


#line 2034 "Lotus.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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
                      yytoken, &yylval, &yylloc);
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 357 "Lotus.y"


//Additional C code

/*----------get_reg----------*/
/*
 *  Manage Register Amount
 *	Type: v(value)/t(temp)/a(arg)
 *	Flag: 1(increase)/0(get current)/-1(decrease)
 */
/*---------------------------*/

int get_reg(enum REG_SEQ reg_seq,int flag){
	
	//char* reg_string=malloc(10 * sizeof(char));
	char type[3]={'v','t','a'};
	
	if(flag == 1){
		reg_amount[reg_seq]++;
	}else if(flag == -1){
		if(reg_amount[reg_seq]==-1){
			printf("Error: $%c%d is not used\n",type[reg_seq],reg_amount[reg_seq]);
		}else{
			reg_amount[reg_seq]--;}
	}else if(flag == 0){	/*do nothing*/
	}else{
		printf("Error: get_reg(): Flag value error\n");
	}
	
	//sprintf(reg_string,"$%c%d",type[reg_seq],reg_amount[reg_seq]);
	return reg_amount[reg_seq];
}

/*----------get_label----------*/
/*
 * Manage Label Amount
 */
/*-----------------------------*/

int get_label(int flag){
	if(flag==1){
		return ++label_num;
	}else if(flag==0){
		if(label_cur<label_num){
			return ++label_cur;
		}else{
			printf("Error: get_label(): Current label is out of order\n");
		}
	}else{
		printf("Error: get_label(): Flag value error\n");
	}
	return label_cur;
}

/*----------start_if----------*/

void start_if(int num){
	char *branch[6]={"beq","bne","bgt","bge","blt","ble"};
	bool_num++;
	bool_b++;
	if(bool_num==1){
		IF_count++;
		TF_label[0][P_TF]=get_label(1);
		TF_label[1][P_TF]=get_label(1);
		P_IF[IF_count]=P_TF;
		P_TF++;
	}
	printf("\t%s\t$t%d, $t%d",branch[num], get_reg(t,0)-1, get_reg(t,0));
	get_reg(t,-1);
	get_reg(t,-1);
}

/*------------------------------------------*/
void yyerror(char *s){
	fprintf(stderr,"Syntax error: line: %d\n",yylineno);
}

int main(void){
	yyparse();
	return 0;
}
