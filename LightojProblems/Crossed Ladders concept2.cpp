//Anik_Modak
#include<bits/stdc++.h>
#define d double
using namespace std;

double solve(double x, double y, double c)
{
    double high = min(x,y), low =0.0, mid;

    while(low < high)
    {
        mid = (high+low)/2.0;

        double p=sqrt(x*x-mid*mid);
        double q=sqrt(y*y-mid*mid);
        double rat=(p*q)/(p+q);

        if(abs(rat-c)<0.0000001) return mid;
        else if (rat < c) high = mid;
        else low = mid;

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

        ans=solve(x,y,c);

        printf("Case %d: %.6lf\n",ca,ans);
    }
    return 0;
}

