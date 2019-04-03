//Anin_Modak
#include<bits/stdc++.h>
#define MX 1000000000
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    long long a,b;
    for(int i=0; i<m; i++) cin>>a>>b;

    for(int i=0; i<n; i++)
    {
        if(i%2) cout<<1;
        else cout<<0;
    }
    cout<<endl;
}

