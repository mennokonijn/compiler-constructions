%{

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "ccngen/ast.h"
#include "ccngen/enum.h"
#include "parser.h"
#include "palm/str.h"
#include "global/globals.h"
#include "palm/ctinfo.h"


#define FILTER(token) \
  global.col += yyleng;  \
  return( token);

#define LINEBUF_SIZE 256
#define YY_NO_UNPUT
#define YY_NO_INPUT

static inline void token_action();

int yycolumn = 1;
#define YY_USER_ACTION token_action();


%}

%p 6000 /* set positions to 6000 */
%e 2000 /* set nodes to 1100 */
%option noyywrap
%option nounput
%option yylineno


%%

"("                        { FILTER( BRACKET_L); }
")"                        { FILTER( BRACKET_R); }
","                        { FILTER( COMMA); }
";"                        { FILTER( SEMICOLON); }
"["                        { FILTER( SQR_BRACKET_L); }
"]"                        { FILTER( SQR_BRACKET_R); }
"{"                        { FILTER( CURL_BRACKET_L); }
"}"                        { FILTER( CURL_BRACKET_R); }

"-"                        { FILTER( MINUS); }
"+"                        { FILTER( PLUS);  }
"*"                        { FILTER( STAR);  } 
"/"                        { FILTER( SLASH);  } 
"%"                        { FILTER( PERCENT);  } 

"<="                       { FILTER( LE);    }
"<"                        { FILTER( LT);    } 
">="                       { FILTER( GE);    }
">"                        { FILTER( GT);    }
"=="                       { FILTER( EQ);    }
"!="                       { FILTER( NE);    }
"&&"                       { FILTER( AND);    }
"||"                       { FILTER( OR);    }

// Assignmnets
"="                        { FILTER( LET); }
"!"                        { FILTER( NEG); }

"true"                     { FILTER( TRUEVAL); }
"false"                    { FILTER( FALSEVAL); }

// statements and loops
"if"                       { FILTER( IF); }
"else"                     { FILTER( ELSE); }
"while"                    { FILTER( WHILE); }
"for"                      { FILTER( FOR); }
"do"                       { FILTER( DO); }

// statements
"extern"                   { FILTER( EXT); }
"export"                   { FILTER( EXP); }
"return"                   { FILTER( RET); }

// type definitions
"int"                      { FILTER( INT); }
"float"                    { FILTER( FLOAT); }
"void"                     { FILTER( VOID); }
"bool"                     { FILTER( BOOL); }

[A-Za-z][A-Za-z0-9_]*      { yylval.id = STRcpy(yytext);
                             FILTER( ID);
                           }

[0-9]+                     { yylval.cint=atoi(yytext);
                             FILTER( NUM);
                           }

"//"(.*)                   { 
                             // Ignore single-line comments
                             yycolumn += yyleng;
                           }

"/*"([^*]|\*+[^*/])*\*+"/" { 
                             // Ignore multi-line comments
                             yycolumn += yyleng;
                           }

\n.*                       { 
                             yycolumn = 1;
                             global.line += 1;
                             global.col = 0;
                             yyless(1);
                           }

[ \t]                      { global.col += yyleng;
                           } 
%%

static inline void token_action() {
    yylloc.first_line = yylloc.last_line = yylineno;
    yylloc.first_column = yycolumn;
    yylloc.last_column = yycolumn + yyleng - 1;
    yycolumn += yyleng;
}

