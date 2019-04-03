#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b="Bulbasaur";
    map<char,int>mp;
    map<char,int>mb;
    int i,ans=1000000;
    cin>>a;

    for(i=0; i<a.size(); i++) mp[a[i]]++;
    for(i=0; i<b.size(); i++) mb[b[i]]++;

    for(i=0; i<b.size(); i++)
        ans=min(ans,mp[b[i]]/mb[b[i]]);

    cout<<ans<<endl;
}

