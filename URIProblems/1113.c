#include<stdio.h>
int main()
{
int n,m;
l:scanf("%d%d",&n,&m);
    if(n<m){
        printf("Crescente\n");
        goto l;}
    else if(n>m){
        printf("Decrescente\n");
        goto l;}
    else if(n==m)
return 0;
}
