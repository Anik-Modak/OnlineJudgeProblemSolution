#include<iostream>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+1],i,c1=0,c2=0,ans;

    for(i=1; i<=n; i++) cin>>a[i];

    for(i=m+1; i<=n ;i++){
        c1++;
        if(a[i]&&k>=a[i]) break;
    }
    if(i==n+1) c1=0;
    for(i=m-1; i>=1 ;i--){
        c2++;
        if(a[i]&&k>=a[i]) break;
    }
    if(i==0) c2=0;
    if(c1==0||c2==0) ans=max(c1*10,c2*10);
    else ans=min(c1*10,c2*10);
    cout<<ans<<endl;
}
