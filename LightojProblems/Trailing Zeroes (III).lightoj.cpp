#include<bits/stdc++.h>
using namespace std;

long long fn(long long n)
{
    long long i,s=0;
    for(i=5; i<=n; i*=5) s+=(n/i);
    return s;
}

int main()
{
    int ca,t;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long n,p=0;
        cin>>n;

        long long a=0,b=100000000,c;
        while(1)
        {
            c=(a+b)/2;
            if(fn(c*5)==n) break;
            else if(fn(c*5)>n) b=c;
            else a=c;
            if(b-a==1&&fn(a*5)<n&&fn(b*5)>n){
                    p=1; break;
            }
        }
        if(p) printf("Case %d: impossible\n",ca);
        else printf("Case %d: %lld\n",ca,c*5);
    }
    return 0;
}


