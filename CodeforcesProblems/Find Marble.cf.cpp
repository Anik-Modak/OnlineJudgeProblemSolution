//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, t;
    cin>>n>>s>>t;

    int p[n+2];
    for(int i=1; i<=n; i++)
        cin>>p[i];

    if(s==t)
    {
        cout<<0<<endl;
        return 0;
    }

    int i=1;
    while(i<=n)
    {
        s = p[s];
        if(s==t) break;
        i++;
    }

    if(i==n+1)
        cout<<-1<<endl;
    else
        cout<<i<<endl;

    return 0;
}
