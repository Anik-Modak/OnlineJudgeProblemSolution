#include<bits/stdc++.h>
using namespace std;

bool a[100005]={0};
vector<long long>p;

void sive()
{
    int i,j,n=100000;
    a[1]=1;
    for(i=4; i<=n; i=i+2) a[i]=1;
    for(i=3; i<=sqrt(n); i+=2)
    {
        for(j=i+i;j<=n;j+=i) a[j]=1;
    }
    p.push_back(2);
    for(i=3; i<n; i+=2) if(a[i]==0) p.push_back(i);
}
int prime(int n)
{
    int i,m=sqrt(n);
    if(n<100000) return a[n];
    for(i=0; i<p.size()&&p[i]<=m; i++)
        if(n%p[i]==0) return 1;
    return 0;
}

int main()
{
    long long i,l,r;
    sive();
    while(cin>>l>>r)
    {
        long long c1=0,c2=0,d1,d2,d,mn=10000005,mx=0;
        vector<int>v;
        for(i=l; i<=r; i++) if(prime(i)==0) v.push_back(i);

        for(i=1;i<v.size();i++)
        {
            d=v[i]-v[i-1];
            if(d<mn){
                c1=v[i-1];
                c2=v[i];
                mn=d;
            }
            if(d>mx){
                d1=v[i-1];
                d2=v[i];
                mx=d;
            }
        }
        if(c1&&c2) printf("%lld,%lld are closest, %lld,%lld are most distant.\n",c1,c2,d1,d2);
        else printf("There are no adjacent primes.\n");
        v.clear();
    }
}

