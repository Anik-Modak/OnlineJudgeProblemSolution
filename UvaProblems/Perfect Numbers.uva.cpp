#include<bits/stdc++.h>
using namespace std;

long long power(long long a,long long n)
{
    if(n==0) return 1;
    long long ret=power(a*a,n/2);
    if(n%2==1) ret=ret*a;
    return ret;
}

int Prime(long long n)
{
    if(n<2||n>131072) return 0;
    long long i;
    if(n!=2&&n%2==0) return 0;
    for(i=3; i<=sqrt(n); i=i+2) if(n%i==0) return 0;
    return 1;
}
int main()
{
    int t;
    cin>>t;

    long long n,p;
    while(t--)
    {
        scanf("%lld,",&p);
        n=power(2,p)-1;
        if(Prime(p)&&Prime(n)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
