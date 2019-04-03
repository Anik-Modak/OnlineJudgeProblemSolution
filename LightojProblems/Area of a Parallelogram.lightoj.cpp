#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;

    int a1,a2,b1,b2,c1,c2,d1,d2;
    double a,b,c,s,area;

    for(i=1;i<=t;i++)
    {
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        d2=a2+(c2-b2);
        d1=c1-(b1-a1);
        a=sqrt(pow((a1-b1),2.0)+pow((a2-b2),2.0));
        b=sqrt(pow((b1-c1),2.0)+pow((b2-c2),2.0));
        c=sqrt(pow((a1-c1),2.0)+pow((a2-c2),2.0));
        s=(a+b+c)/2;
        area=2*sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Case %d: %d %d %.0lf\n",i,d1,d2,area);
    }
}
