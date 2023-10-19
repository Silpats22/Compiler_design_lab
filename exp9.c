#include<stdio.h>
int i=0;
char input[50];
int E(void){
if(T())
{
        if(EPRIME()){
                return 1;
        }
        else{
                return 0;
        }
}
else{
        return 0;
}
}
int EPRIME(void)
{
        if(input[i]=='+'||input[i]=='-'){
                i++;
                if(T()){
                        if(EPRIME()){
                                return 1;
                        }
                        else{
                                return 0;
                        }
                }
                else{
                        return 0;
                }
        }
        else{
                return 1;
        }
}

int T(void)
{
        if(F()){
                if(TPRIME()){
                        return 1;
                }
                else{
                        return 0;
                }
        }
        else{
                return 0;
        }
}
int TPRIME(void)
{
        if(input[i]=='*'||input[i]=='/'){
                i++;
                if(F()){
                        if(TPRIME()){
                                return 1;
                        }
                        else{
                                return 0;
                        }
                }
                else{
                        return 0;
                }
        }
        else{
                return 1;
        }
}
int F(void)
{
        if(input[i]=='('){
                i++;
                if(E()){
                        if(input[i]==')'){
                                i++;
                                return 1;
                        }
                        else{
                                return 0;
                        }
                }
                else{
                        return 0;
                }
        }
        else if(input[i]>='a'&&input[i]<='z'||input[i]>='A'&&input[i]<='Z'){
                i++;
                return 1;
        }
        else{
                return 0;
        }
}
int main()
{
        printf("Enter an arithmetic expression : ");
        scanf("%s",input);
        if(E())
        {
                if(input[i+1]=='\0'){
                printf("String is accepted..\n");
                }
                else{
                        printf("String is not accepted..\n");
                }
        }
        else{
                printf("String is not accepted..\n");
        }
}
