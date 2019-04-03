//Anik_Modak
#include<bits/stdc++.h>
#define d double
using namespace std;

double solve(double x, double y, double c)
{
    double high =x, low =0.0, mid,pre=0;

    while(low <= high)
    {
        mid = (high+low)/2.0;

        double rat=pow(mid,4.0)-2.0*c*pow(mid,3.0)+pow(c-mid,2.0)*(y*y-x*x);
        //double rat=pow(mid,2)+pow(x,2)-pow(y,2)-pow(c*mid,2)/pow(mid-c,2);
        if (rat==0) return mid;
        else if (rat > 0) high = mid;
        else low = mid;

        if (abs(mid-pre)<0.0000001) break;
        pre=mid;
    }
    return mid;
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        double x,y,c,hx,ans;
        cin>>x>>y>>c;

        hx=solve(x,y,c);
        ans=sqrt(x*x-hx*hx);

        printf("Case %d: %.7lf\n",ca,ans);
    }
    return 0;
}
