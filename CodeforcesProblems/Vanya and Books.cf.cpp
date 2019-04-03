#include<stdio.h>
#include<math.h>
int main()
{
int exp(int a,int n)
{
    if(n==0)
        return 1;
    int ret=exp(a*a,n/2);
    if(n%2==1)
        ret=ret*a;
    return ret;
}
    long long i,j,n,m,s,p,t;
    scanf("%lld",&n);
    p=9;
    t=p;
    if(n<10)
        printf("%lld\n",n);
    else
    {
        for(i=1;i<=9;i++)
        {
            if(exp(10,i)<=n&&n<exp(10,i+1))
            {
                s=p;
                m=n+1-exp(10,i);
                for(j=1;j<=m;j++)
                {
                    s=s+i+1;
                }
            }
            p=p+t*(i+1)*exp(10,i);
        }
        printf("%lld\n",s);
    }
    return 0;
}
