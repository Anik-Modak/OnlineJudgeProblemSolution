//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    int n, m;
    cin>>n>>m;

    long long a, g , pre, val;
    cin>>a;
    pre = g = a;

    for(int i=1; i<n ; i++)
    {
        cin>>val;
        g = gcd(g, val - pre);
        pre = val;
    }

    ll p[m];
    for(int i = 0; i < m; i++)
        scanf("%lld", &p[i]);

    for(int i = 0; i < m; i++)
    {
        if(g%p[i] == 0)
        {
           cout << "Yes" << endl;
           cout << a  << " " << i + 1 << endl;
           return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}
