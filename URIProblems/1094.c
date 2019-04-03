#include<stdio.h>
int main()
{
char m,C,S,R;
int n,x,i,c=0,s=0,r=0,sum=0;
double ca,ra,sa;
scanf("%d",&x);
for(i=1;i<=x;i++){
    scanf("%d %c",&n,&m);
    sum=sum+n;
    if(m=='C')
       c=c+n;
    else if(m=='S')
        s=s+n;
    else if(m=='R')
        r=r+n;
}
ca=((double)c*100)/sum;
ra=((double)r*100)/sum;
sa=((double)s*100)/sum;
printf("Total: %d cobaias\n",sum);
printf("Total de coelhos: %d\n",c);
printf("Total de ratos: %d\n",r);
printf("Total de sapos: %d\n",s);
printf("Percentual de coelhos: %.2lf %%\n",ca);
printf("Percentual de ratos: %.2lf %%\n",ra);
printf("Percentual de sapos: %.2lf %%\n",sa);
return 0;
}
