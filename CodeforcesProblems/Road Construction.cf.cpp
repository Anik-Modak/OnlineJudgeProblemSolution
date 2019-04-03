//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

int main()
{
    int n, m, s;
    cin>>n>>m;

    map<int,bool> mp;
    while(m--)
    {
        int a, b;
        cin>>a>>b;
        mp[a] = true;
        mp[b] = true;
    }

    for(int i=1; i<=n; i++)
    {

        if(mp[i]==false)
        {
            s = i;
            break;
        }
    }

    cout<<n-1<<endl;
    for(int i=1; i<=n; i++)
    {
        if(i==s) continue;
        cout<<s<<" "<<i<<endl;
    }
    return 0;
}
