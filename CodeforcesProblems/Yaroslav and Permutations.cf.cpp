//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    map<int,int> mp;
    int mx = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
        mx = max(mp[a],mx);
    }

    if(n==1 || mx <= (n+1)/2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}



