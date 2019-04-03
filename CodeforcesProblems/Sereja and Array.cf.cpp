//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    long long a[n+2], x, sum = 0;
    for(int i=1; i<=n; i++)
    cin>>a[i];

    int t, v;
    while(m--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>v>>x;
            a[v] = x-sum;
        }
        if(t==2)
        {
            cin>>x;
            sum += x;
        }
        if(t==3)
        {
            cin>>v;
            cout<<sum+a[v]<<endl;
        }
    }
    return 0;
}
