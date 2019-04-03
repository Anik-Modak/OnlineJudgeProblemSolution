//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
#define MX 10001
using namespace std;

int grundy[MX]={0};
bool vis[MX];

int grundyNumber()
{
    for(int i=1; i<=MX; i++)
    {
        mem(vis,0);
        for(int j=1; j*2<i; j++)
            vis[grundy[j]^grundy[i-j]]=1;

        int ret=0;
        while(vis[ret]) ret++;
        grundy[i]=ret;
    }
}
int main()
{
    int ca,t;
    //freopen("input.txt","r",stdin);
    cin>>t;

    grundyNumber();
    int n;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int x,s=0;

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&x);
            s=s^grundy[x];
        }
        if(s==0) printf("Case %d: Bob\n",ca);
        else printf("Case %d: Alice\n",ca);
    }
}


