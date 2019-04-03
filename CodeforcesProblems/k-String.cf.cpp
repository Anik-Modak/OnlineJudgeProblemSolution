//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ck = 1;
    cin>>n;

    string s;
    cin>>s;
    map<char, int> mp;

    for(int i=0; i<s.size(); i++)
        mp[s[i]]++;

    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second % n)
            ck = 0;
    }

    if(ck)
    {
        for(int i=0; i<n; i++)
            for(auto it=mp.begin(); it!=mp.end(); it++)
                for(int j=0; j<it->second/n; j++)
                    cout<<it->first;
        cout<<endl;
    }
    else
        cout<<-1<<endl;

    return 0;
}


