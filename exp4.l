%option noyywrap
%{
#include<ctype.h>
#include<string.h>
%}
%%
"abc" { strcpy(yytext,"ABC"); ECHO;}
. { ECHO; }
%%
int main()
{
        yylex();
        return 0;
}
