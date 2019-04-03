#include<bits/stdc++.h>
#define siz 1000000
using namespace std;

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);

    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        int a,n;
        cin>>n;
        map<int,int>mp;

        long long ans=0;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            mp[a]++;
            if(mp[a]==1) ans+=(a+1);
            if(mp[a]==a+1) mp[a]=0;
        }
        printf("Case %d: %lld\n",ca,ans);
    }
}

