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
        cin>>n;

        long long a,b;

        map<long long,int>mp;
        map<long long,int>::iterator it;

        for(int i=0; i<n; i++)
        {
            scanf("%lld %lld",&a,&b);
            mp[a]++;
            mp[b+1]--;
        }

        int c=0,ans=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            c+=it->second;
            ans=max(c,ans);
        }
        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}

