#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map<int,int>mp;
    int a,b,p=1,i;

    for(i=1; i<=n ;i++)
    {
        cin>>a>>b;
        a++;
        while(a<=b){
            mp[a]=1;
            a++;
        }
    }
    for(i=1; i<=m; i++) if(mp[i]!=1) p=0;

    if(p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
