#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n],mx=2,c=2;
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=2; i<n; i++){
        if(a[i]==a[i-1]+a[i-2]) c++;
        else c=2;
        mx=max(mx,c);
    }
    if(n==1) cout<<1<<endl;
    else cout<<mx<<endl;
}


