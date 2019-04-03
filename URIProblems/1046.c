#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d",&a,&b);
if(a>=12){
    c=(24-a)+b;
    printf("O JOGO DUROU %d HORA(S)\n",c);}
else if(a==0&&b==0){
    c=24;
    printf("O JOGO DUROU %d HORA(S)\n",c);}
else{
    c=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",c);}
return 0;
}
