//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    map<string,int>mp;

    for(int i=0; i<n; i++)
    {
        string s,tmp="";
        cin>>s;

        set<char>v;
        set<char>::iterator it;

        for(int j=0; j<s.size(); j++) v.insert(s[j]);
        for(it=v.begin(); it!=v.end(); it++) tmp+=(*it);
        mp[tmp]=1;
    }
    cout<<mp.size()<<endl;
}
