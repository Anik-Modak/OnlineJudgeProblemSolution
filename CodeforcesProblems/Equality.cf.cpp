//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans=100005;
    cin>>n>>k;

    string s;
    cin>>s;

    map<char,int>mp;
    for(int i=0; i<s.size(); i++) mp[s[i]]++;

    for(int i=0; i<k; i++)
        ans=min(ans,mp[i+'A']);

    cout<<k*ans<<endl;
}
