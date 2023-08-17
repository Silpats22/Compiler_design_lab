%option noyywrap
%{
  int vowel=0,cons=0,whitespace=0
%}

//Lex program to print the number of vowels, consonants, words and whitespaces in a given text

%%
  [aeiouAEIOU] {vowel++;}
  [a-zA-Z] {cons++;}
  [a-zA-Z]+ {word++;}
  [ ] {whitespace++;}
%%

int main(){
  yyin = fopen("input.txt","r");
  yylex();
  printf("Vowels = %d Consonants = %d Whitespace = %d\n",vowel,cons,whitespace);
  return 0;
  }
  
