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

#ifndef YY_CLAUD_BISON_H_INCLUDED
# define YY_CLAUD_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int claud_debug;
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
    _ERROR_ = 258,                 /* _ERROR_  */
    _LPAREN = 259,                 /* _LPAREN  */
    _RPAREN = 260,                 /* _RPAREN  */
    _STAR = 261,                   /* _STAR  */
    _PLUS = 262,                   /* _PLUS  */
    _COMMA = 263,                  /* _COMMA  */
    _MINUS = 264,                  /* _MINUS  */
    _SLASH = 265,                  /* _SLASH  */
    _COLON = 266,                  /* _COLON  */
    _SEMI = 267,                   /* _SEMI  */
    _LT = 268,                     /* _LT  */
    _LDARROW = 269,                /* _LDARROW  */
    _LTGT = 270,                   /* _LTGT  */
    _EQ = 271,                     /* _EQ  */
    _DEQ = 272,                    /* _DEQ  */
    _GT = 273,                     /* _GT  */
    _GTEQ = 274,                   /* _GTEQ  */
    _KW_ATE = 275,                 /* _KW_ATE  */
    _KW_BAH = 276,                 /* _KW_BAH  */
    _KW_CONST = 277,               /* _KW_CONST  */
    _KW_Claud = 278,               /* _KW_Claud  */
    _KW_ClaudDiz = 279,            /* _KW_ClaudDiz  */
    _KW_FAZAI = 280,               /* _KW_FAZAI  */
    _KW_FUNC = 281,                /* _KW_FUNC  */
    _KW_GOTO = 282,                /* _KW_GOTO  */
    _KW_ISTRUCT = 283,             /* _KW_ISTRUCT  */
    _KW_LABEL = 284,               /* _KW_LABEL  */
    _KW_Receba = 285,              /* _KW_Receba  */
    _KW_SE = 286,                  /* _KW_SE  */
    _KW_TCHE = 287,                /* _KW_TCHE  */
    _LBRACK = 288,                 /* _LBRACK  */
    _RBRACK = 289,                 /* _RBRACK  */
    _KW_float = 290,               /* _KW_float  */
    _KW_floaty = 291,              /* _KW_floaty  */
    _KW_gaucho = 292,              /* _KW_gaucho  */
    _KW_int = 293,                 /* _KW_int  */
    _KW_interu = 294,              /* _KW_interu  */
    _KW_kd = 295,                  /* _KW_kd  */
    _KW_main = 296,                /* _KW_main  */
    _KW_string = 297,              /* _KW_string  */
    _KW_stringo = 298,             /* _KW_stringo  */
    _LBRACE = 299,                 /* _LBRACE  */
    _BAR = 300,                    /* _BAR  */
    _RBRACE = 301,                 /* _RBRACE  */
    _STRING_ = 302,                /* _STRING_  */
    _INTEGER_ = 303,               /* _INTEGER_  */
    _DOUBLE_ = 304,                /* _DOUBLE_  */
    _IDENT_ = 305                  /* _IDENT_  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "claud.y"

  int    _int;
  char   _char;
  double _double;
  char*  _string;
  S s_;
  Block block_;
  CMDS cmds_;
  CMD cmd_;
  ATB atb_;
  EXP exp_;
  SE se_;
  OPerL operl_;
  OPerA opera_;
  OPL opl_;
  CLAUDDIZ clauddiz_;
  RECEBA receba_;
  ATE ate_;
  FAZAI fazai_;
  VALUE value_;
  Type type_;
  VET vet_;
  STRUCT struct_;
  HeteroElements heteroelements_;
  HeteroElement heteroelement_;
  FUNC func_;
  GOTO goto_;
  LABEL label_;
  ConjInt conjint_;
  ConjReal conjreal_;
  ConjString conjstring_;
  CONST const_;
  POINT point_;

#line 149 "Bison.h"

};
typedef union YYSTYPE YYSTYPE;
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




int claud_parse (yyscan_t scanner, YYSTYPE *result);


#endif /* !YY_CLAUD_BISON_H_INCLUDED  */
