#include<bits/stdc++.h>
using namespace std;

map<long long,bool>mp;
void fn(long long n)
{
    while(n%10==0)
        n/=10;
    if(mp[n]==true)
        return;
    mp[n] = true;
    fn(n+1);
}

int main()
{
    long long n;
    cin>>n;
    mp[n] = true;
    fn(n+1);
    cout<<mp.size()<<endl;
    mp.clear();
}

