//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    map<int,int>mp;
    vector<int>v1, v2;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
    }

    int ck = 1;
    for(auto it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second==1) v2.push_back(it->first);
        else if(it->second==2)
        {
            v1.push_back(it->first);
            v2.push_back(it->first);
        }
        else
        {
            ck = 0;
            break;
        }
    }

    if(ck)
    {
        cout<<"YES"<<endl;

        cout<<v1.size()<<endl;
        for(int i=0; i<v1.size(); i++)
            cout<<v1[i]<<" ";
        cout<<endl;

        cout<<v2.size()<<endl;
        for(int i=v2.size()-1; i>=0; i--)
            cout<<v2[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"NO"<<endl;
}

