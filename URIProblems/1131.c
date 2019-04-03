#include<stdio.h>
int main()
{
int m,n,b,c=0,i=0,g=0,e=0;
for(;;)
{
    scanf("%d%d",&n,&m);
    printf("Novo grenal (1-sim 2-nao)\n");
    c=c+1;
    scanf("%d",&b);
    if(n>m)
        i=i+1;
    else if(n<m)
        g=g+1;
    else
        e=e+1;
    if(b!=1)
        break;
}
printf("%d grenais\n",c);
printf("Inter:%d\n",i);
printf("Gremio:%d\n",g);
printf("Empates:%d\n",e);
if(i>g)
    printf("Inter venceu mais\n");
else if(i<g)
    printf("Gremio venceu mais\n");
else
    printf("Nao houve vencedor\n");
return 0;
}

