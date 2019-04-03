#include<bits/stdc++.h>
using namespace std;

double len(double x1,double x2,double y1,double y2)
{
    double l=sqrt((x1-y1)*(x1-y1)+(x2-y2)*(x2-y2));
    return l;
}
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double o1,o2,a1,a2,b1,b2,r,ab,ans;
        cin>>o1>>o2>>a1>>a2>>b1>>b2;

        r=len(o1,o2,a1,a2);
        ab=len(b1,b2,a1,a2);

        ans=acos(1-0.5*(ab/r)*(ab/r))*r;
        printf("Case %d: %.8lf\n",i,ans);
    }
}
