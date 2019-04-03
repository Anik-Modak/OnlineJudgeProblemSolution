#include<bits/stdc++.h>
using namespace std;

vector<long long>v;
void divisor(long long n,long long m)
{
    long long i,x;
    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            x=n/i;
            if(i>m)
                v.push_back(i);
            if(x>m&&x!=i)
                v.push_back(x);
        }
    }
}

int main()
{
    int ca,t;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long i,n,m;
        cin>>n>>m;

        divisor(n-m,m);
        sort(v.begin(),v.end());
        int s=v.size();

        if(n==0&&m==0)
            printf("Case %d: 1\n",ca);
        else if(s)
        {
            printf("Case %d: ",ca);
            for(i=0; i<s; i++)
            {
                if(i==s-1)
                    printf("%lld\n",v[i]);
                else
                    printf("%lld ",v[i]);
            }
        }
        else
            printf("Case %d: impossible\n",ca);
        v.clear();
    }
}




