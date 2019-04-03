//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int ca,t;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        double x1,y1,x2,y2;
        scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

        long long x,y,ans;
        y=abs(y2-y1);
        x=abs(x2-x1);

        if(x==0||y==0){
           if(x) ans=x;
           else if(y) ans=y;
           else ans=0;
        }
        else{
            long long d=y/__gcd(x,y);
            ans=y/d;
        }
        printf("Case %d: %lld\n",ca,ans+1);
    }
}
