//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<int,int>mp;

int main()
{
    int t,ca,n,q;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        cin>>n>>q;
        int arr[n+1],a,b;

        arr[0]=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&arr[i]);
            mp[arr[i]]=1;
            mp[arr[i]]+=mp[arr[i-1]];
        }
        printf("Case %d:\n",ca);

        for(int i=0; i<q; i++)
        {
            scanf("%d%d",&a,&b);
            a--;

            if(a<=0) a=0;
            else if(a >= arr[n]) a=n;
            else a=(upper_bound(arr+1,arr+n+1,a)-arr-1);

            if(b >= arr[n]) b=n;
            else b=(upper_bound(arr+1,arr+n+1,b)-arr-1);

            int ans=mp[arr[b]]-mp[arr[a]];
            printf("%d\n",ans);
        }
        mp.clear();
    }
    return 0;
}
