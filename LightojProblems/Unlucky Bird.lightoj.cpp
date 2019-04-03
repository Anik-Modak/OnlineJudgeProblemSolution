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
        double v1,v2,v3,a1,a2,t1,t2,d,b;
        cin>>v1>>v2>>v3>>a1>>a2;
        t1=v1/a1;
        t2=v2/a2;
        d=(v1*t1-0.5*a1*t1*t1)+(v2*t2-0.5*a2*t2*t2);
        b=v3*max(t1,t2);
        printf("Case %d: %.10lf %.10lf\n",ca,d,b);
    }
}

