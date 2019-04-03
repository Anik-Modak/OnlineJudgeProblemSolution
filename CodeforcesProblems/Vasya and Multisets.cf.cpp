//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++
    }

    string s="";
    for(int i=0; i<n; i++)
    {
        if(mp[a[i]]>=3)
        {
            s[i]='B';
        }
    }
}
