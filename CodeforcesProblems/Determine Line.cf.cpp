//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, ans;
    cin>>n;

    ans=n;
    map<int,int>mp;
    while(n--)
    {
        cin>>m;
        while(m--)
        {
            cin>>a;
            mp[a]++;
        }
    }

    for(int  i=1; i<=100; i++)
    {
        if(mp[i]==ans) cout<<i<<" ";
    }
    cout << endl;
    return 0;
}

