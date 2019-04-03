//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define mem(x,y) memset(x,y,sizeof(x));

using namespace std;

int vis[MX];
int dis[MX];

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        int n;
        cin>>n;

        int a,b,c;
        mem(dis,0);
        mem(vis,0);

        int c1=0,c2=0;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b>>c;
            if(vis[a]==0&&dis[b]==0){
                vis[a]=dis[b]=1;
                c1+=c;
            }
            else{
                vis[b]=dis[a]=1;
                c2+=c;
            }
        }
        int ans=min(c1,c2);
        printf("Case %d: %d\n",ca,ans);
    }
}







