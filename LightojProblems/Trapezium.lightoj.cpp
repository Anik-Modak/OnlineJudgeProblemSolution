//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        double a,b,c,d,p,h,ans;
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);

        p=(pow(a-c,2) + d*d - b*b)/(2*(a-c));
        h=sqrt(d*d-p*p);

        ans=0.5*(a+c)*h;
        printf("Case %d: %.8lf\n",ca,ans);
    }
    return 0;
}
