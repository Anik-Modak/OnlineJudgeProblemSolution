#include<stdio.h>
int main()
{
int n,c=2002;
l:scanf("%d",&n);
    if(n==c)
        printf("Acesso Permitido\n");
    else{
        printf("Senha Invalida\n");
        goto l;}
return 0;
}
