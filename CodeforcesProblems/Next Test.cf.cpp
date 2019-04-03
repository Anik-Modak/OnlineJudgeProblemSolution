//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    map<int,bool>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]=true;
    }

    for(int i=1; i<=3001; i++)
    {
        if(mp[i]==false)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
