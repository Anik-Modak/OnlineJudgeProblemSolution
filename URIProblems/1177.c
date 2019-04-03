#include<stdio.h>
int main()
{
    long long n[1000],t,i,y,j,k=0,x;
    scanf("%lld",&t);
    x=1000/t;
    for(i=0;i<=x;i++)
    {
       for(j=0;j<=(t-1);j++)
       {
           if(k==1000)
            break;
           printf("N[%lld] = %lld\n",k,j);
           k++;
       }
    }
return 0;
}
