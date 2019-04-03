//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int x[2*100001];
bool t[2*100001];

int main()
{
    int n, m;
    cin>>n>>m;

    vector<long long>v;
    map<long long,int>mp;

    for(int i=0; i<n+m; i++) cin>>x[i];
    for(int i=0; i<n+m; i++)
    {
        cin>>t[i];
        if(t[i])
        {
            v.push_back(x[i]);
            mp[x[i]]=1;
        }
    }

    long long p1=v[0], p2=v[0];
    for(int i=0, j=0; i<n+m; i++)
    {
        if(p2 < x[i])
        {
            p1=p2;
            j++;
            if(j<v.size()) p2=v[j];
            else p2=v[v.size()-1];
        }
        if(t[i]) continue;

        if(abs(x[i]-p1)==abs(x[i]-p2))
        {
            if(p1<=p2) mp[p1]++;
            else mp[p2]++;
        }
        else if(abs(x[i]-p1)<abs(x[i]-p2)) mp[p1]++;
        else mp[p2]++;
    }

    map<long long,int>:: iterator it;
    for(it=mp.begin(); it!=mp.end(); it++)
        cout<<it->second-1<<" ";
    cout<<endl;
}
