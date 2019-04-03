#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

double area(double a, double b, double c)
{
    double s,ar;
    s=(a+b+c)/2.0;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
double angle(double a, double b, double c)
{
    double rad;
    rad=(b*b+c*c-a*a)/(2.0*b*c);
    return acos(rad);
}
int main()
{
    int t,i;
    cin>>t;
    double r1,r2,r3,A,B,C,a,b,c,s,ar,ans;

    for(i=1;i<=t;i++)
    {
        cin>>r1>>r2>>r3;
        a=r1+r2;
        b=r1+r3;
        c=r2+r3;
        ar=area(a,b,c);
        A=angle(c,b,a);
        B=angle(b,a,c);
        C=angle(a,c,b);
        s=(0.5*r1*r1*A)+(0.5*r2*r2*B)+(0.5*r3*r3*C);
        ans=abs(ar-s);
        printf("Case %d: %.10lf\n",i,ans);
    }
}

