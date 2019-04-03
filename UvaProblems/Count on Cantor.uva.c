#include<stdio.h>

int main()
{
    long long n,i,j,l,k;
    while(scanf("%lld",&n)!=EOF)
    {
        long long s=0,i=1;
        while(s<n)
        {
            s+=i;
            i++;
        }
        i--;
        if(i%2) printf("TERM %lld IS %lld/%lld\n",n,1+s-n,i+n-s);
        else printf("TERM %lld IS %lld/%lld\n",n,i+n-s,1+s-n);
    }
    return 0;
}
