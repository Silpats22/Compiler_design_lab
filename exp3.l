%option noyywrap
%{
    #include<stdio.h>
    int lines=0,words=0,chara=0;
%}
%%
[a-zA-Z]+ { words++; chara+=strlen(yytext); }
\n { lines++; chara++; }
. { chara++; }
%%
int main()
{
yyin=fopen("file.txt","r");
yylex();
printf("Number of lines = %d\nNumber of words = %d\nNumber of characters = %d\n",lines,words,chara);
return 0;
}
