//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a, cnt = 0, mn;
    map<long long, int> mp;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;

        if(i==0) mn = a;
        if(mn > a)
        {
            mn = a;
            cnt = i;
        }
    }

    if(mp[mn]>1) cout<<"Still Rozdil"<<endl;
    else cout<<cnt+1<<endl;

    return 0;
}

