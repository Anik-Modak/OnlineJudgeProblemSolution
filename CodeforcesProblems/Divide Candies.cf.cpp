//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<long long>v;
void divisor(ll n, ll m)
{
    for(int i=1; i<=n/2; i++)
    {
        if(m*m==n)
            v.push_back(n);
        else if(i%m==0)
        {
            v.push_back(i);
            v.push_back(n-i);
        }
    }
    return ;
}

int main()
{
    ll n, m;
    cin>>n>>m;

    ll nn=n*n+n*n;
    divisor(nn,m);

    cout <<v.size()<< endl;
    return 0;
}

