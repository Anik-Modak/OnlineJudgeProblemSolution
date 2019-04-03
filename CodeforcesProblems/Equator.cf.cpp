#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    //freopen("out.txt","r",stdin);
    cin>>n;
    int i,a[n],ans;

    long long s=0,sh=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    s=(s/2)+s%2;
    for(i=0; i<n; i++)
    {
        sh+=a[i];
        if(sh>=s) break;
    }
    ans=i+1;
    cout<<ans<<endl;
    return 0;
}
