//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n+5];
    map<int,int>mp;

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }

    int mx = a[n];
    cout<<n-mp[mx]<<endl;

    for(int i=n; i>=1; i--)
    {
        if(a[i]==mx) continue;
        if(a[i] > mx)
            cout<<2<<" "<<i<<" "<<i+1<<endl;
        else
           cout<<1<<" "<<i<<" "<<i+1<<endl;
    }
}


