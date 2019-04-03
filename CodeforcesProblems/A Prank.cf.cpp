//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mx=0, cnt=0;
    cin>>n;

    int a[n+5];
    for(int i=1; i<=n; i++)
        cin>>a[i];

    a[n+1]=1001, a[0]=0;
    for(int i=1; i<=n ; i++)
    {
        if(a[i-1]+1==a[i] && a[i]+1==a[i+1]) cnt++;
        else
        {
            mx=max(cnt,mx);
            cnt=0;
        }
    }

    mx=max(cnt,mx);
    cout<<mx<<endl;
}

