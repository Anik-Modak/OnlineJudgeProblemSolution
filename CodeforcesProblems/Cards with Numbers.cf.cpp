//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, m;
    scanf("%d",&n);

    vector<int>v[5005];
    map<int, bool> mp;

    for(int i=1; i<=2*n; i++)
    {
        scanf("%d",&m);
        mp[m] = true;
        v[m].push_back(i);
    }

    int ck = 0;
    for(int i=1; i<=5000; i++)
        if(v[i].size()%2)
            ck = 1;

    if(ck)
        printf("-1\n");
    else
    {
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            int i = it->first;
            for(int j=1; j<v[i].size(); j+=2)
               printf("%d %d\n",v[i][j-1],v[i][j]);
        }
    }

    return 0;
}
