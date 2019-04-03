//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;

    map<char,int>mp;

    for(int i=0; i<a.size(); i++) mp[a[i]]++;
    for(int i=0; i<b.size(); i++) mp[b[i]]++;

    int cnt=0;

    for(int i=0; i<26; i++)
    {
        if(mp['a'+i]%2==1) cnt++;
    }
    if(cnt<=1) cout<<"YES\n";
    else cout<<"NO\n";
}
