//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int divisor(int n)
{
    int i, m=sqrt(n+1);
    for(i=2; i<=m; i++)
    {
        if(i*i==n)
            return i;
        else if(n%i==0)
            return i;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;

    int a[n], mn = 1000, sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
        sum+=a[i];
    }

    int ans = INT_MAX;
    sum-=mn;

    for(int v=1; v<=100; v++)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%v==0)
            {
                ans = min(ans, sum-a[i]+a[i]/v+mn*v);
            }
        }
    }
    cout<<ans<<endl;
}



