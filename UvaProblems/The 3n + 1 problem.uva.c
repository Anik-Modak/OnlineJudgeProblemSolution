#include<stdio.h>
int main()
{
    long long m,n,c,max,x;
    while(scanf("%lld%lld",&m,&n)!=EOF){
            printf("%lld %lld ",m,n);
            max=0;
            if(m>n){ x=n;
                     n=m;
                     m=x;}
        while(n>=m){
            c=1;
            x=m;
            while(x!=1){
                if(x%2==0)x=x/2;
                else x=3*x+1;
                c++;
            }
            if(max<c) max=c;
            m++;
        }
     printf("%lld\n",max);
    }
    return 0;
}
