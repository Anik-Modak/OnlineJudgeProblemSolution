//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    string s, e;
    map<string,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        mp[s]++;
    }
    cin>>e;

    int best = 0, worst = 0;
    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        s = it->first;
        if(s.size()<e.size()) best++;
        if(s.size()<=e.size()) worst++;
    }

    best += (best/k)*5;
    worst += ((worst-1)/k)*5;

    cout<<best+1<<" "<<worst<<endl;
}
