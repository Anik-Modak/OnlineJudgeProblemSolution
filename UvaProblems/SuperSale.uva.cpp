//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

int DP[31];

int main()
{
    int t,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    while(t--)
    {
        scanf("%d",&n);
        mem(DP,0);
        int cost,weight;

        for(int i=0; i<n; i++)
        {
            scanf("%d%d",&cost,&weight);
            for(int j=30; j>=weight; j--)
                DP[j]=max(DP[j],DP[j-weight]+cost);
        }
        int g,cw;
        scanf("%d",&g);

        long long ans=0;
        while(g--)
        {
            scanf("%d",&cw);
            ans+=DP[cw];
        }
        printf("%lld\n",ans);
    }
}
