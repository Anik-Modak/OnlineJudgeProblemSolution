//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long x,p,mx=1;
        scanf("%lld",&x);

        int t;
        if(x<0){
            t=1;
            x*=-1;
        }
        else t=0;

        for(int i=2; i<=100000; i++)
        {
            double y=log(x)/log(i);
            p=y;
            if(powl(i,p)==x)
                if((t==1&&p%2==1)||t==0) mx=max(mx,p);
        }
        printf("Case %d: %lld\n",ca,mx);
    }
    return 0;
}

