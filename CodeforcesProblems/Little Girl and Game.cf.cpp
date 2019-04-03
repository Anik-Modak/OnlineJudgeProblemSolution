//Anik_Modak
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;
    cin>>s;

    map<char, int> mp;
    for(int i=0; i<s.size(); i++)
        mp[s[i]]++;

    int cnt = 0;
    for(int i=0; i<26; i++)
    {
        if(mp['a'+i]%2==1) cnt++;
    }

    if(cnt<=1) cout<<"First"<<endl;
    else
    {
        if(cnt%2==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    return 0;
}
