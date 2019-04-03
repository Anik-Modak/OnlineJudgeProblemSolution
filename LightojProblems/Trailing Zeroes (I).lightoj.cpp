#include<bits/stdc++.h>
using namespace std;

bool a[1000005]={0};
int k=-1,p[100000];

void sive()
{
    int i,j,n=1000000;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
    p[++k]=2;
    for(i=3; i<n; i+=2) if(a[i/2]==0) p[++k]=i;
}
int divisor(long long n)
{
    int i,ans=1,m=sqrt(n);
    for(i=0; i<=k&&p[i]<=m; i++)
    {
        int c=1;
        if(n<p[i]) break;
        while(n%p[i]==0){
            n=n/p[i];
            c++;
        }
        if(c>1) ans*=c;
    }
    if(n>1) ans*=2;
    return ans-1;
}

int main()
{
    int ca,t;
    cin>>t;
    sive();
    for(ca=1;ca<=t;ca++)
    {
        long long i,j,n,c=0;
        scanf("%lld",&n);
        c=divisor(n);
        printf("Case %d: %lld\n",ca,c);
    }
}



