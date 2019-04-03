#include<bits/stdc++.h>
using namespace std;
int leap(long long n)
{
    if(n%400==0) return 1;
    else if(n%4==0&&n%100!=0) return 1;
    else return 0;
}
int main()
{
    int t,ca;
    cin>>t;
    string m1,m2;
    char ch;
    for(ca=1; ca<=t; ca++)
    {
        long long r1,c1,r2,c2,a,b,ans;
        cin>>r1>>c1>>r2>>c2;
        a=abs(r2-r1);
        b=abs(c2-c1);
        if(a==b) ans=1;
        else if((a%2==0&&b%2==0)||(a%2==1&&b%2==1)) ans=2;
        else ans=0;
        if(ans) printf("Case %d: %lld\n",ca,ans);
        else printf("Case %d: impossible\n",ca);
    }
}

