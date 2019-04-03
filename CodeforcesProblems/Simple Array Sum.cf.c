#include<stdio.h>
int main()
{
    long long s=0,i,t;
    scanf("%lld",&t);
    long long a[t];
    for(i=0;i<t;i++){
        scanf("%lld",&a[i]);
        s=s+a[i];
    }
    printf("%lld\n",s);
    return 0;
}

