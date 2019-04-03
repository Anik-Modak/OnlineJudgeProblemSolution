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
        double a,ab,r,s,p;
        scanf("%lf : %lf",&a,&ab);

        r=sqrt((a*a+ab*ab))/2.0;
        s=acos(1-0.5*(ab/r)*(ab/r))*r;
        p=200.0/(a+s);

        a*=p; ab*=p;
        printf("Case %d: %.8lf %.8lf\n",i,a,ab);
    }
}

