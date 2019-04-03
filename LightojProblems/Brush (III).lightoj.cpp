//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int main()
{
    int t,ca,n,m,k;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d%d",&n,&m,&k);
        long long x,y[n],ans=1,r=0;

        for(int i=0; i<n; i++)
            scanf("%lld%lld",&x,&y[i]);

        sort(y,y+n);

        int c=0;
        for(int i=1; i<n; i++)
        {
            r+=abs(y[i]-y[i-1]);
            if(r>m){
                c++;
                r=0;
            }
            else ans++;
            if(c>k) break;
        }
        printf("Case %d: %lld\n",ca,ans);
    }
    return 0;
}


