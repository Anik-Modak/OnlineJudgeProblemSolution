//Anik_Modak
#include<bits/stdc++.h>
#define PI acos(-1.0)
#define d double
using namespace std;

double solve(double arc,double l)
{
    double high =2*PI, low =0.0, mid, ans=0;

    while(low < high)
    {
        mid = (high+low)/2.0;
        double rat, rad;

        rad=arc/mid;
        rat=2*rad*sin(mid/2.0);
        ans=rad-(rad*cos(mid/2.0));

        if (abs(rat-l)<0.0000000000000001) return ans;
        else if (rat < l) high = mid;
        else low = mid;
    }
    return ans;
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        double n,c,l,arc,ans;
        cin>>l>>n>>c;

        arc=(1+n*c)*l;
        ans=solve(arc,l);

        printf("Case %d: %.8lf\n",ca,ans);
    }
    return 0;
}

