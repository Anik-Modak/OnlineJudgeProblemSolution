#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=0;
    cin>>n>>m;

    int a,s=0,i;
    for(i=0;i<n;i++){
        cin>>a;
        if(i<n-1){
            s+=a+10;
            ans+=2;
        }
        else s+=a;
    }
    if(s>m) cout<<-1<<endl;
    else{
        ans+=(m-s)/5;
        cout<<ans<<endl;
    }
}
