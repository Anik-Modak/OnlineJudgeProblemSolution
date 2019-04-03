#include<bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

long long lcm(long long a, long long b)
{
    long long temp=gcd(a,b);
    return temp ? (a/temp*b):0;
}
int main()
{
    long long n,a,b,p,q,y,x;
    cin>>n>>a>>b>>p>>q;
    x=((n/a)-n/(lcm(a,b)))*p+(n/b)*q;
    y=(n/a)*p+((n/b)-n/lcm(a,b))*q;
    cout<<max(x,y)<<endl;
}
