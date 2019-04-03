#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    int i,j,a[x+1],s=0;
    for(i=1;i<=x;i++) scanf("%d",&a[i]);

    for(i=1,j=x;i<=n;i++) a[j--]=m;

    for(i=1;i<=x;i++) s=s+a[i];
    cout<<s<<endl;
}
