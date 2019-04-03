//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        double w,h;
        scanf("%lf%lf",&h,&w);

        double s,x1,x2,ans1=0,ans2=0;
        s=w+h;

        x1 = (4 * s + sqrt(16 * s * s - 48 * w * h)) / 24.0;
		x2 = (4 * s - sqrt(16 * s * s - 48 * w * h)) / 24.0;

        if(x1>0) ans1=(h - 2 * x1) * (w - 2 * x1) * x1;
        if(x2>0) ans2= (h - 2 * x2) * (w - 2 * x2) * x2;

        printf("Case %d: %.8lf\n",ca,max(ans1,ans2));
    }
    return 0;
}
