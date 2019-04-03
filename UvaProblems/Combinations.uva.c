#include<stdio.h>

long long fact(int n)
{
    int i;
    unsigned long long f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int n,m,store;
    long double temp;
    unsigned long long ans;
    while(scanf("%d %d",&n,&m))
    {
        if(n==0&&m==0)
            break;
        temp=1;
        store=n;
        if(m>=(n-m))
        {
            while(n>m)
            {
                temp*=n;
                n--;
            }
            temp=temp/fact(store-m);
        }
        else
        {
            while(n>store-m)
            {
                temp*=n;
                n--;
            }
            temp=temp/fact(m);
        }
        ans=temp;
        printf("%d things taken %d at a time is %lld exactly.\n",store,m,ans);
    }
    return 0;
}
