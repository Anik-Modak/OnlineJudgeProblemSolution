//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int main()
{
    int t,ca,n,m;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&m);
        long long x,y[n],ans=1,r=0;

        for(int i=0; i<n; i++)
            scanf("%lld%lld",&x,&y[i]);

        sort(y,y+n);

        for(int i=1; i<n; i++)
        {
            r+=abs(y[i]-y[i-1]);
            if(r>m){
                ans++;
                r=0;
            }
        }
        printf("Case %d: %lld\n",ca,ans);
    }
    return 0;
}

