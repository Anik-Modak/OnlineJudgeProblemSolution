#include<stdio.h>
int main()
{
    long long n,i,a,s=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&a);
        if(a%2==1) s=1;
    }
    if(s==1) printf("First\n");
    else printf("Second\n");
    return 0;
}

