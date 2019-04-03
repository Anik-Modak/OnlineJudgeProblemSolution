//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    long long a, pre = 0, sum = 0;
    map<long long, int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum += a;
        mp[i] = max(pre, a);
        pre = mp[i];
    }

    int ck = 0, q;
    cin>>m;

    while(m--)
    {
        cin>>q;
        if(mp[q]>=q && ck==0)
        {
            cout<<sum-mp[q]<<endl;
            ck = 1;
        }
        else cout<<sum-q<<endl;
    }
}
