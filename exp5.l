%option noyywrap
%{
#include<stdio.h>
int vowels=0;
int conso=0;
%}
%%
[aeiouAEIOU] { vowels++; }
[a-zA-Z] { conso++; }
. { ; }
%%
int main()
{
yylex();
printf("Number of vowels = %d\nNumber of consonants = %d\n",vowels,conso);
return 0;
}
