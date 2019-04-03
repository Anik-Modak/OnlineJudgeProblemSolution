//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    map<string,int>mp;

    for(int i=0; i<n; i++)
    {
        cin>>s;
        mp[s]++;
    }
    cout<<6-mp.size()<<endl;

    if(mp["purple"]==0) cout<<"Power"<<endl;
    if(mp["green"]==0) cout<<"Time"<<endl;
    if(mp["blue"]==0) cout<<"Space"<<endl;
    if(mp["orange"]==0) cout<<"Soul"<<endl;
    if(mp["red"]==0) cout<<"Reality"<<endl;
    if(mp["yellow"]==0) cout<<"Mind"<<endl;

    return 0;
}

