#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;
vector<int>v;
bool arr[500000] = {0};
int  mx = 0;

void sive()
{
    int i, j, n=500000;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(arr[i/2]==0){
            for(j=i*i; j<n; j+=i*2) arr[j/2]=1;
       }
    }
    v.push_back(2);
    for(i=3; i<n; i+=2) if(arr[i/2]==0) v.push_back(i);
}

void primeFactors(int n)
{
    int ch = 0;
    while (n%2 == 0)
    {
        n = n/2;
        ch = 1;
    }
    if(ch) mx=max(mx,++mp[2]);

    for (int i=1; v[i]*v[i]<=n; i++)
    {
        ch = 0;
        while(n%v[i]==0)
        {
            n = n/v[i];
            ch = 1;
        }
        if(ch) mx=max(mx,++mp[v[i]]);
    }
    if(n>2) mx=max(mx,++mp[n]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;
    sive();

    int a[n], gcd=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        gcd=__gcd(a[i],gcd);
    }

    for(int i=0; i<n; i++)
    {
        a[i]/=gcd;
        primeFactors(a[i]);
    }
    if(mx==0) cout<<-1<<endl;
    else cout<<n-mx<<endl;
}


