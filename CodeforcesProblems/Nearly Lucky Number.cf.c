#include<stdio.h>

int digit(long long n)
{
    long long s=0,r,i=0;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(r==4||r==7)
            s++;
    }
    if(s==4||s==7)
        return 1;
    else
        return 0;
}

int main()
{
    long long l,n;
    scanf("%lld",&n);
    l=digit(n);
    if(l==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

