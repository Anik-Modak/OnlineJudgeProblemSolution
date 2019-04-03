#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int i,j,t,m;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m;
        string a,b;
        pair<string,string>sp[10001];
        int k=0,p=1,l;
        for(j=1;j<=m;j++){
            cin>>a>>b;
            sp[k].first=a;
            sp[k].second=b;
            for(l=0;l<=k;l++)
                if(sp[l].second==a&&sp[l].first==b) p=0;
            k++;
        }
        if(p) printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}



