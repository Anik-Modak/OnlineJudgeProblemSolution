#include<stdio.h>
int main()
{
int h1,h2,m2,m1,m,h;
scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
if(m2>=m1){
    m=m2-m1;
    if(h1>=h2)
        h=(h2+24)-h1;
    else
        h=h2-h1;
}
else if(m2<m1){
    m=(m2+60)-m1;
   if(h1>=h2)
        h=(h2+23)-h1;
    else
        h=h2-1-h1;
}
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
return 0;
}
