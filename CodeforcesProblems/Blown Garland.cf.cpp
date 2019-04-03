//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    map<char,int>mp;
    for(int i=0; i<4; i++)
    {
        char ch = '#';
        int j = i, cnt = 0;
        while(j<s.size())
        {
            if(s[j]!='!') ch = s[j];
            mp[s[j]]++;
            j += 4;
            cnt++;
        }
        mp[ch] = cnt-mp[ch];
    }

    if(!mp['R']) mp['R'] = mp['#'];
    if(!mp['B']) mp['B'] = mp['#'];
    if(!mp['Y']) mp['Y'] = mp['#'];
    if(!mp['G']) mp['G'] = mp['#'];

    cout<<mp['R']<<" "<<mp['B']<<" "<<mp['Y']<<" "<<mp['G']<<endl;
}
