
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "y.y"

#include <stdio.h>
#include "util.h"
#include "symbol.h" 
#include "errormsg.h"
#include "absyn.h"


int yylex(void); /* function prototype */
A_exp absyn_root;
void yyerror(char *s)
{
 EM_error(EM_tokPos, "%s", s);
}

typedef struct list_s *list_t;
struct list_s
{
   union {
       int i;
       bool b;
       void *data;
   };
   struct list_s *next;
};

#define LVALUE_ACTION(target, prev, elem) \
    do \
    { \
        A_var p, var = (elem); \
        (target) = p = (prev); \
        if (p) \
        { \
            while (p->u.field.var) \
                p = p->u.field.var; \
            p->u.field.var = var; \
        } \
        else \
            (target) = var; \
    } \
    while (0)



/* Line 189 of yacc.c  */
#line 118 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     INT = 259,
     STRING = 260,
     COMMA = 261,
     COLON = 262,
     SEMICOLON = 263,
     LPAREN = 264,
     RPAREN = 265,
     LBRACK = 266,
     RBRACK = 267,
     LBRACE = 268,
     RBRACE = 269,
     DOT = 270,
     PLUS = 271,
     MINUS = 272,
     TIMES = 273,
     DIVIDE = 274,
     EQ = 275,
     NEQ = 276,
     LT = 277,
     LE = 278,
     GT = 279,
     GE = 280,
     AND = 281,
     OR = 282,
     ASSIGN = 283,
     ARRAY = 284,
     IF = 285,
     THEN = 286,
     ELSE = 287,
     WHILE = 288,
     FOR = 289,
     TO = 290,
     DO = 291,
     LET = 292,
     IN = 293,
     END = 294,
     OF = 295,
     BREAK = 296,
     NIL = 297,
     FUNCTION = 298,
     VAR = 299,
     TYPE = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 45 "y.y"

  int pos;
  int ival;
  string sval;
  A_exp exp ;
  S_symbol sym;
  A_var var;
  A_expList explist ;
  A_ty type_p;
  A_namety name_type;
  A_dec decl;
  A_fieldList flist;
  A_fundecList fdeclist;
  A_decList dec_List;
  A_efieldList e_list; 



/* Line 214 of yacc.c  */
#line 218 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  63
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    18,    20,
      25,    32,    37,    46,    48,    54,    59,    64,    71,    75,
      79,    83,    87,    91,    95,    99,   103,   107,   111,   115,
     119,   123,   125,   128,   129,   133,   138,   139,   141,   143,
     147,   148,   150,   152,   156,   157,   160,   163,   166,   171,
     178,   183,   191,   201,   203,   207,   211,   212,   214,   218,
     224,   225,   227,   231
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    48,    -1,     4,    -1,     5,    -1,    50,
      -1,     9,    54,    10,    -1,    17,    48,    -1,    42,    -1,
      30,    48,    31,    48,    -1,    30,    48,    31,    48,    32,
      48,    -1,    33,    48,    36,    48,    -1,    34,    49,    28,
      48,    35,    48,    36,    48,    -1,    41,    -1,    37,    56,
      38,    54,    39,    -1,    49,     9,    52,    10,    -1,    49,
      13,    63,    14,    -1,    49,    11,    48,    12,    40,    48,
      -1,    48,    18,    48,    -1,    48,    19,    48,    -1,    48,
      16,    48,    -1,    48,    17,    48,    -1,    48,    20,    48,
      -1,    48,    21,    48,    -1,    48,    22,    48,    -1,    48,
      23,    48,    -1,    48,    24,    48,    -1,    48,    25,    48,
      -1,    48,    26,    48,    -1,    48,    27,    48,    -1,    50,
      28,    48,    -1,     3,    -1,    49,    51,    -1,    -1,    15,
      49,    51,    -1,    11,    48,    12,    51,    -1,    -1,    53,
      -1,    48,    -1,    48,     6,    53,    -1,    -1,    55,    -1,
      48,    -1,    48,     8,    55,    -1,    -1,    58,    56,    -1,
      57,    56,    -1,    59,    56,    -1,    44,    49,    28,    48,
      -1,    44,    49,     7,    49,    28,    48,    -1,    45,    49,
      20,    60,    -1,    43,    49,     9,    61,    10,    20,    48,
      -1,    43,    49,     9,    61,    10,     7,    49,    20,    48,
      -1,    49,    -1,    13,    61,    14,    -1,    29,    40,    49,
      -1,    -1,    62,    -1,    49,     7,    49,    -1,    49,     7,
      49,     6,    62,    -1,    -1,    64,    -1,    49,    20,    48,
      -1,    49,    20,    48,     6,    64,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   101,   101,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   134,   137,   140,   141,   142,   146,   147,   150,   151,
     155,   156,   159,   160,   162,   163,   164,   165,   167,   168,
     170,   172,   173,   176,   177,   178,   180,   181,   183,   184,
     187,   188,   191,   192
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "STRING", "COMMA", "COLON",
  "SEMICOLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE",
  "DOT", "PLUS", "MINUS", "TIMES", "DIVIDE", "EQ", "NEQ", "LT", "LE", "GT",
  "GE", "AND", "OR", "ASSIGN", "ARRAY", "IF", "THEN", "ELSE", "WHILE",
  "FOR", "TO", "DO", "LET", "IN", "END", "OF", "BREAK", "NIL", "FUNCTION",
  "VAR", "TYPE", "$accept", "program", "exp", "id", "lvalue", "lvalue_ext",
  "args", "args1", "expseq", "expseq1", "decs", "vardec", "typedec",
  "funcdec", "ty", "tyfields", "tyfields1", "recfield", "recfield1", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    49,    50,    51,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     2,     1,     4,
       6,     4,     8,     1,     5,     4,     4,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     0,     3,     4,     0,     1,     1,     3,
       0,     1,     1,     3,     0,     2,     2,     2,     4,     6,
       4,     7,     9,     1,     3,     3,     0,     1,     3,     5,
       0,     1,     3,     5
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    31,     3,     4,    40,     0,     0,     0,     0,    44,
      13,     8,     0,     2,    33,     5,    42,     0,    41,     7,
       0,     0,     0,     0,     0,     0,     0,    44,    44,    44,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    60,     0,    32,     0,     0,
       6,     0,     0,     0,     0,     0,     0,    40,    46,    45,
      47,    20,    21,    18,    19,    22,    23,    24,    25,    26,
      27,    28,    29,    38,     0,    37,     0,     0,     0,    61,
      33,    30,    43,     9,    11,     0,    56,     0,     0,     0,
       0,     0,    15,    33,     0,    16,     0,    34,     0,     0,
       0,     0,    57,     0,    48,    56,     0,    53,    50,    14,
      39,     0,    35,    62,     0,    10,     0,     0,     0,     0,
       0,     0,    17,     0,    33,     0,    58,     0,     0,    49,
      54,    55,    63,    12,     0,     0,    51,    59,     0,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    16,    14,    15,   112,    74,    75,    17,    18,
      26,    27,    28,    29,   108,   101,   102,    78,    79
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -56
static const yytype_int16 yypact[] =
{
      67,   -56,   -56,   -56,    67,    67,    67,    67,    10,   -18,
     -56,   -56,    15,   325,     5,    -9,   232,    13,   -56,    -8,
     281,   190,     1,    10,    10,    10,     9,   -18,   -18,   -18,
     -56,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    10,    10,   -56,    67,    67,
     -56,    67,    67,    67,    21,    -4,    29,    67,   -56,   -56,
     -56,    -8,    -8,   -56,   -56,   127,   127,   127,   127,   127,
     127,   337,   337,   156,    40,   -56,   297,    38,    43,   -56,
      -7,   325,   -56,   264,   325,   244,    10,    10,    67,    -1,
      20,    67,   -56,     6,    67,   -56,    67,   -56,    67,    67,
      56,    54,   -56,    41,   325,    10,    25,   -56,   -56,   -56,
     -56,    67,   -56,   178,   313,   325,   211,    10,     2,    67,
      52,    10,   325,    10,    -7,    67,    62,    10,    67,   325,
     -56,   -56,   -56,   325,    10,    53,   325,   -56,    67,   325
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -56,   -56,     0,    37,   -56,   -13,   -56,   -17,    18,    28,
      27,   -56,   -56,   -56,   -56,   -27,   -55,   -56,   -43
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      13,    47,     1,    87,    96,    19,    20,    21,    46,   127,
      33,    34,   105,     1,    43,    30,    44,    96,    45,    48,
      46,    46,   128,    50,    88,    23,    24,    25,   106,    53,
      86,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    76,    22,   111,    57,    81,    89,
      92,    83,    84,    85,    58,    59,    60,    95,    94,   109,
      54,    55,    56,   117,   118,   121,   130,    97,   134,   119,
       1,     2,     3,   138,   110,    90,     4,    82,   120,   137,
     132,     0,    77,    80,     5,     0,     0,     0,   104,     0,
       0,    73,     0,     0,   113,     0,   114,     6,   115,   116,
       7,     8,     0,     0,     9,     0,     0,     0,    10,    11,
       0,   122,     0,     0,     0,     0,     0,     0,     0,   129,
       0,     0,     0,   100,   103,   133,   107,     0,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
       0,     0,   100,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,     0,   126,     0,     0,     0,   131,     0,
      77,     0,    91,     0,   135,     0,     0,     0,     0,     0,
       0,   100,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,     0,
      49,     0,     0,     0,     0,     0,     0,   125,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     0,     0,     0,     0,    99,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     0,     0,     0,     0,    98,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    93,
       0,     0,    51,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,   124,     0,     0,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40
};

static const yytype_int16 yycheck[] =
{
       0,    14,     3,     7,    11,     5,     6,     7,    15,     7,
      18,    19,    13,     3,     9,     0,    11,    11,    13,    28,
      15,    15,    20,    10,    28,    43,    44,    45,    29,    28,
       9,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,     8,    40,    38,    48,    20,
      10,    51,    52,    53,    27,    28,    29,    14,    20,    39,
      23,    24,    25,     7,    10,    40,    14,    80,     6,    28,
       3,     4,     5,    20,    91,    57,     9,    49,   105,   134,
     123,    -1,    45,    46,    17,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    -1,    94,    -1,    96,    30,    98,    99,
      33,    34,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,    -1,    -1,    86,    87,   125,    89,    -1,   128,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,
      -1,    -1,   105,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,   117,    -1,    -1,    -1,   121,    -1,
     123,    -1,     6,    -1,   127,    -1,    -1,    -1,    -1,    -1,
      -1,   134,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    36,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    32,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    12,
      -1,    -1,    31,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    12,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    17,    30,    33,    34,    37,
      41,    42,    47,    48,    49,    50,    48,    54,    55,    48,
      48,    48,    49,    43,    44,    45,    56,    57,    58,    59,
       0,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     9,    11,    13,    15,    51,    28,     8,
      10,    31,    36,    28,    49,    49,    49,    38,    56,    56,
      56,    48,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    52,    53,    48,    49,    63,    64,
      49,    48,    55,    48,    48,    48,     9,     7,    28,    20,
      54,     6,    10,    12,    20,    14,    11,    51,    32,    35,
      49,    61,    62,    49,    48,    13,    29,    49,    60,    39,
      53,    40,    51,    48,    48,    48,    48,     7,    10,    28,
      61,    40,    48,     6,    12,    36,    49,     7,    20,    48,
      14,    49,    64,    48,     6,    49,    48,    62,    20,    48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 101 "y.y"
    {absyn_root=(yyvsp[(1) - (1)].exp);;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 104 "y.y"
    {(yyval.exp) = A_IntExp(EM_tokPos, (yyvsp[(1) - (1)].ival)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 105 "y.y"
    {(yyval.exp) = A_StringExp(EM_tokPos, (yyvsp[(1) - (1)].sval));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 106 "y.y"
    {(yyval.exp) =  A_VarExp(EM_tokPos,(yyvsp[(1) - (1)].var));;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 107 "y.y"
    { (yyval.exp) = A_SeqExp(EM_tokPos,(yyvsp[(2) - (3)].explist)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "y.y"
    {(yyval.exp) = A_OpExp(EM_tokPos,  A_minusOp, A_IntExp(EM_tokPos,0), (yyvsp[(2) - (2)].exp));;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 109 "y.y"
    { (yyval.exp) = A_NilExp(EM_tokPos); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 110 "y.y"
    { (yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].exp), A_NilExp(EM_tokPos) ); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 111 "y.y"
    { (yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), (yyvsp[(6) - (6)].exp)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 112 "y.y"
    { (yyval.exp) = A_WhileExp(EM_tokPos, (yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].exp)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 113 "y.y"
    {(yyval.exp) = A_ForExp(EM_tokPos, (yyvsp[(2) - (8)].sym), (yyvsp[(4) - (8)].exp), (yyvsp[(6) - (8)].exp), (yyvsp[(8) - (8)].exp)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 114 "y.y"
    { (yyval.exp) = A_BreakExp(EM_tokPos);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 115 "y.y"
    { (yyval.exp) = A_LetExp(EM_tokPos, (yyvsp[(2) - (5)].dec_List), A_SeqExp(EM_tokPos,(yyvsp[(4) - (5)].explist))); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 116 "y.y"
    { (yyval.exp) = A_CallExp(EM_tokPos,(yyvsp[(1) - (4)].sym), (yyvsp[(3) - (4)].explist));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 117 "y.y"
    {(yyval.exp) = A_RecordExp(EM_tokPos, (yyvsp[(1) - (4)].sym),(yyvsp[(3) - (4)].e_list));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 118 "y.y"
    {(yyval.exp) = A_ArrayExp(EM_tokPos, (yyvsp[(1) - (6)].sym), (yyvsp[(3) - (6)].exp), (yyvsp[(6) - (6)].exp)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 119 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos, A_timesOp, (yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 120 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_divideOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 121 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_plusOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 122 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_minusOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 123 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_eqOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 124 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_neqOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 125 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_ltOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 126 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_leOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 127 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_gtOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 128 "y.y"
    { (yyval.exp) = A_OpExp(EM_tokPos,  A_geOp,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 129 "y.y"
    { (yyval.exp) = A_IfExp(EM_tokPos,(yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp), A_IntExp(EM_tokPos, 0)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 130 "y.y"
    { (yyval.exp) = A_IfExp(EM_tokPos, (yyvsp[(1) - (3)].exp), A_IntExp(EM_tokPos, 1),(yyvsp[(3) - (3)].exp)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 131 "y.y"
    {(yyval.exp) = A_AssignExp(EM_tokPos, (yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].exp));;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 134 "y.y"
    {(yyval.sym) = S_Symbol((yyvsp[(1) - (1)].sval));;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 137 "y.y"
    { LVALUE_ACTION((yyval.var), (yyvsp[(2) - (2)].var), A_SimpleVar(EM_tokPos, (yyvsp[(1) - (2)].sym))); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 140 "y.y"
    { (yyval.var) = NULL; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 141 "y.y"
    { LVALUE_ACTION((yyval.var), (yyvsp[(3) - (3)].var), A_FieldVar(EM_tokPos, NULL, (yyvsp[(2) - (3)].sym))); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 142 "y.y"
    { LVALUE_ACTION((yyval.var), (yyvsp[(4) - (4)].var), A_SubscriptVar(EM_tokPos, NULL, (yyvsp[(2) - (4)].exp))); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 146 "y.y"
    { (yyval.explist) = NULL; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 147 "y.y"
    { (yyval.explist) = A_ExpList((yyvsp[(1) - (1)].explist)->head,(yyvsp[(1) - (1)].explist)->tail);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 150 "y.y"
    { (yyval.explist) = A_ExpList((yyvsp[(1) - (1)].exp),NULL);;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 151 "y.y"
    { (yyval.explist) = A_ExpList((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].explist));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 155 "y.y"
    { (yyval.explist) = NULL; ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 156 "y.y"
    { (yyval.explist) = A_ExpList((yyvsp[(1) - (1)].explist)->head,(yyvsp[(1) - (1)].explist)->tail);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 159 "y.y"
    { (yyval.explist) = A_ExpList((yyvsp[(1) - (1)].exp),NULL);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 160 "y.y"
    { (yyval.explist) = A_ExpList((yyvsp[(1) - (3)].exp),(yyvsp[(3) - (3)].explist));;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 162 "y.y"
    { (yyval.dec_List) = NULL; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 163 "y.y"
    { (yyval.dec_List) = A_DecList(A_TypeDec(EM_tokPos, A_NametyList((yyvsp[(1) - (2)].name_type),NULL)),(yyvsp[(2) - (2)].dec_List)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 164 "y.y"
    { (yyval.dec_List) =   A_DecList((yyvsp[(1) - (2)].decl),(yyvsp[(2) - (2)].dec_List)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 165 "y.y"
    { (yyval.dec_List) =  A_DecList(A_FunctionDec(EM_tokPos, (yyvsp[(1) - (2)].fdeclist)),(yyvsp[(2) - (2)].dec_List)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 167 "y.y"
    { (yyval.decl) = A_VarDec(EM_tokPos, (yyvsp[(2) - (4)].sym), NULL, (yyvsp[(4) - (4)].exp)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 168 "y.y"
    {(yyval.decl) = A_VarDec(EM_tokPos, (yyvsp[(2) - (6)].sym), (yyvsp[(4) - (6)].sym), (yyvsp[(6) - (6)].exp)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 170 "y.y"
    { (yyval.name_type) = A_Namety((yyvsp[(2) - (4)].sym), (yyvsp[(4) - (4)].type_p)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 172 "y.y"
    { (yyval.fdeclist) = A_FundecList(A_Fundec(EM_tokPos, (yyvsp[(2) - (7)].sym), (yyvsp[(4) - (7)].flist), NULL, (yyvsp[(7) - (7)].exp)),NULL); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 173 "y.y"
    { (yyval.fdeclist) = A_FundecList(A_Fundec(EM_tokPos, (yyvsp[(2) - (9)].sym), (yyvsp[(4) - (9)].flist), (yyvsp[(7) - (9)].sym), (yyvsp[(9) - (9)].exp)),NULL); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 176 "y.y"
    { (yyval.type_p) = A_NameTy(EM_tokPos, (yyvsp[(1) - (1)].sym)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 177 "y.y"
    { (yyval.type_p) = A_RecordTy(EM_tokPos, (yyvsp[(2) - (3)].flist)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 178 "y.y"
    { (yyval.type_p) = A_ArrayTy(EM_tokPos, (yyvsp[(3) - (3)].sym)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 180 "y.y"
    { (yyval.flist) = NULL; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 181 "y.y"
    {(yyval.flist) = A_FieldList((yyvsp[(1) - (1)].flist)->head,(yyvsp[(1) - (1)].flist)->tail);;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 183 "y.y"
    { (yyval.flist) = A_FieldList(A_Field(EM_tokPos,(yyvsp[(1) - (3)].sym),(yyvsp[(3) - (3)].sym)),NULL);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 184 "y.y"
    { (yyval.flist) = A_FieldList(A_Field(EM_tokPos,(yyvsp[(1) - (5)].sym),(yyvsp[(3) - (5)].sym)),(yyvsp[(5) - (5)].flist));;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 187 "y.y"
    {(yyval.e_list) = NULL;;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 188 "y.y"
    { (yyval.e_list) = A_EfieldList((yyvsp[(1) - (1)].e_list)->head,(yyvsp[(1) - (1)].e_list)->tail);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 191 "y.y"
    { (yyval.e_list) = A_EfieldList(A_Efield((yyvsp[(1) - (3)].sym),(yyvsp[(3) - (3)].exp)),NULL);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 192 "y.y"
    { (yyval.e_list) = A_EfieldList(A_Efield((yyvsp[(1) - (5)].sym),(yyvsp[(3) - (5)].exp)),(yyvsp[(5) - (5)].e_list));;}
    break;



/* Line 1455 of yacc.c  */
#line 2016 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



