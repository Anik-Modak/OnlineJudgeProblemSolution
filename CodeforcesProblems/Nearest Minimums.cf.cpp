#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,id,d;
    cin>>n;
    long long a[n+1],ans=n,mn;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i==1||mn>a[i]){
            mn=a[i];
            id=i;
        }
    }
    for(i=id+1;i<=n;i++)
    {
        if(mn==a[i]){
            d=i-id;
            id=i;
        }
        if(ans>d||ans==n) ans=d;
    }
    cout<<ans<<endl;
}
