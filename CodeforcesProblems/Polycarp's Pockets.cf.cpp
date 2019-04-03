//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    cin>>n;

    map<int,int>mp;
    while(n--)
    {
        cin>>a;
        mp[a]++;
    }
    int ans=0;
    for(int i=1; i<=100; i++)
        ans=max(ans,mp[i]);

    cout<<ans<<endl;
    return 0;
}
