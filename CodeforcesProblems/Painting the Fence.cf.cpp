//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

bool compare(pii a, pii b)
{
    return abs(a.first - a.second)>abs(b.first - b.second);
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<pii> v;
    for(int i=0; i<m; i++)
    {
        int st, ed;
        cin>>st>>ed;
        v.push_back({st,ed});
    }

    sort(v.begin(),v.end(),compare);

    int ans = 0;
    for(c=0; c<n; c++)
    {
        temp=2e9;
        memset(cnt, 0, sizeof(cnt));
        memset(psum, 0, sizeof(psum));
        memset(one, 0, sizeof(one));
        for(i=0; i<n; i++)
        {
            if(i==c) continue;
            cnt[lr[i].first]++;
            cnt[lr[i].second+1]--;
        }
        for(i=1; i<5050; i++)
            psum[i]=psum[i-1]+cnt[i];
        for(i=1; i<5050; i++)
            one[i]=one[i-1]+(psum[i]==1?1:0);
        for(i=c+1; i<n; i++)
        {
            temp=min(temp, one[lr[i].second]-one[lr[i].first-1]);
        }
        for(i=1; i<5050; i++)
            one[i]=one[i-1]+(psum[i]>=1?1:0);
        ans=max(ans, one[5049]-temp);
    }
    cout<<ans<<endl;
}
