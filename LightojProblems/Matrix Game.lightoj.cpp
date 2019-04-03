//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,t;
    //freopen("input.txt","r",stdin);
    cin>>t;

    int n,m;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&m);

        long long x,s=0,xs=0;

        for(int i=1; i<=n; i++)
        {
            s=0;
            for(int j=1; j<=m ; j++)
            {
                scanf("%lld",&x);
                s+=x;
            }
            xs=xs^s;
        }
        if(xs==0) printf("Case %d: Bob\n",ca);
        else printf("Case %d: Alice\n",ca);
    }
}

