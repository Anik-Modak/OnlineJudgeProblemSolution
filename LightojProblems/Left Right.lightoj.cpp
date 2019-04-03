//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,t;
    //freopen("input.txt","r",stdin);
    cin>>t;

    int n;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        long long x,y,s=0,d;

        for(int i=1; i<=n; i++)
        {
            scanf("%lld%lld",&x,&y);
            d=(y-x)-1;
            s=s^d;
        }
        if(s==0) printf("Case %d: Bob\n",ca);
        else printf("Case %d: Alice\n",ca);
    }
}

