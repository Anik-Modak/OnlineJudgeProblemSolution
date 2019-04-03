#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n+1],mx,mn;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1){
            mx=a[i];
            mn=a[i];
        }
        if(mx<a[i]) mx=a[i];
        if(mn>a[i]) mn=a[i];
    }
    int j,s=(mx+mn);

    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]+a[j]==s){
                cout<<i<<" "<<j<<endl;
                a[i]=0;
                a[j]=0;
                break;
            }
        }
    }
}
