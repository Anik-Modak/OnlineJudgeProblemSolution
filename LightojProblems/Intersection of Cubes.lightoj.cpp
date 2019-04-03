#include<bits/stdc++.h>
#define mx 1000005
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    int x1,x2,y1,y2,z1,z2;
    for(ca=1;ca<=t;ca++)
    {
        cin>>n;
        int ax=0,ay=0,az=0,bx=mx,by=mx,bz=mx;
        long long ans;
        while(n--){
            cin>>x1>>y1>>z1>>x2>>y2>>z2;
            ax=max(ax,x1);
            bx=min(bx,x2);
            ay=max(ay,y1);
            by=min(by,y2);
            az=max(az,z1);
            bz=min(bz,z2);
        }
        ax=bx-ax;
        ay=by-ay;
        az=bz-az;
        ans=ax*ay*az;
        if(ans<0) ans=0;
        printf("Case %d: %lld\n",ca,ans);
    }
}



