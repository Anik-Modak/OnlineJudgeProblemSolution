#include<bits/stdc++.h>
using namespace std;

bool a[5000005];
vector<int>p;

void sive()
{
    int i,j,n=10000000;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
    p.push_back(2);
    for(i=3; i<n; i+=2) if(a[i/2]==0) p.push_back(i);
}

long long divisor(long long n)
{
    while(n%2==0) n/=2;
    int i,ans=1,m=sqrt(n);
    for(i=0; i<p.size()&&p[i]<=m; i++)
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
    long long n;
    sive();
    for(ca=1; ca<=t; ca++)
    {
        scanf("%lld",&n);
        printf("Case %d: %lld\n",ca,divisor(n));
    }
}

