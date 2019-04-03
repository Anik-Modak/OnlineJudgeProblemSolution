#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int ca,t,n;
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        double r1,r2,h,p,r,ans;
        cin>>r1>>r2>>h>>p;
        r=r2+(r1-r2)*p/h;
        ans=(pi*p*(r*r+r*r2+r2*r2))/3;
        printf("Case %d: %.8lf\n",ca,ans);
    }
}


