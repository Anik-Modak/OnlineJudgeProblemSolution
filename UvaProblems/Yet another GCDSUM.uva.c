#include<stdio.h>
long long gcd(long long a,long long b)
{
    long long g,t;
    if (a==0) g = a;
    else if(b==0) g = b;
    else {
        while(b!=0){
            t = b;
            b = a % b;
            a = t;
        }
    g=a;
    }
    return g;
}
int main()
{
    long long t,c,i,j,N,S;
    scanf("%lld",&t);
    for(c=1;c<=t;c++){
    S=0;
    scanf("%lld",&N);
    for(i=1;i<=N;i++)
        for(j=1;j<=N;j++)
            if(N%i==0&&N%j==0)
                S+=gcd(i,j);
    printf("%lld\n",S);
    }
}
