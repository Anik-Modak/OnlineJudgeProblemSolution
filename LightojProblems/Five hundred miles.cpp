#include<bits/stdc++.h>
using namespace std;

double d[1000005];
void fact()
{
    int i,n=1000000;
    double x=0;
    d[0]=0;
    for(i=1; i<=n; i++){
        x+=log10(i);
        d[i]=x;
    }
}
int main()
{
    int ca,t;
    cin>>t;

    fact();
    for(ca=1; ca<=t; ca++)
    {
        long long n,ans,p,s=0;
        cin>>n;
        p=(d[n]/log10(5))+1;
        ans=(n-p)/4;

        cout<<ans<<endl;
    }
    return 0;
}

