#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a[6],mx=0,s=0;
    map<int,int>mp;

    for(i=0;i<5;i++)
    {
        cin>>a[i];
        if(mp[a[i]]<3)mp[a[i]]++;
        s=s+a[i];
    }
    for(i=1;i<=100;i++)
    {
        if(mp[i]>1&&mx<mp[i]*i) mx=mp[i]*i;
    }
    cout<<s-mx<<endl;
}

