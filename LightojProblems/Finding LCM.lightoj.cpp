#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    int ca,t;
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        long long i,a,b,l,m,d,c=0;
        cin>>a>>b>>l;
        m=a*b/gcd(a,b);
        if(l%m) printf("Case %d: impossible\n",ca);
        else
        {
            c=l/m;
            d=gcd(c,m);
            while(d!=1)
            {
                c=c*d,
                m=m/d;
                d=gcd(c,m);
            }
            printf("Case %d: %lld\n",ca,c);
        }
    }
}
