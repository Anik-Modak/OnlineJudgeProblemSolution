#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    long long i,t;
    double r,a,b;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lf",&r);
        b=2*r;
        a=r*r*pi;
        a=b*b-a;
        printf("Case %lld: %.2lf\n",i,a);
    }
    return 0;
}

