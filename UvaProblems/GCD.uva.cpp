#include<bits/stdc++.h>

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    int n,i,j;
    while(1){
        scanf("%d",&n);
        long long g=0;
        if(n==0) break;
        for(i=1;i<n;i++)
            for(j=i+1;j<=n;j++) g+=gcd(i,j);
        printf("%lld\n",g);
    }
}
