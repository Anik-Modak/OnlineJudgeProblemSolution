//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100006
using namespace std;

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long n,a,b;
        scanf("%lld",&n);

        a=n+n/9;
        b=a-1;

        if(n%9==0) printf("Case %d: %lld %lld\n",ca,b,a);
        else printf("Case %d: %lld\n",ca,a);
    }
    return 0;
}


