#include<bits/stdc++.h>
using namespace std;

long long binary(long long n)
{
    long long i;
    if(n==0) return 0;
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    istringstream (r) >> i;
    return i;
}
int main()
{
    int t,ca;
    cin>>t;
    long long a,b,c,d,m,n,o,p;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
        scanf("%lld.%lld.%lld.%lld",&m,&n,&o,&p);
        if(binary(a)==m&&binary(b)==n&&binary(c)==o&&binary(d)==p)
              printf("Case %d: Yes\n",ca);
        else  printf("Case %d: No\n",ca);

    }
}
