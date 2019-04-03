#include<bits/stdc++.h>
using namespace std;

long long f[20]={1};
void fact()
{
    f[1]=1;
    for (int i=2; i<=20; i++) f[i]=(f[i-1]*i);
}
long long ncrnpr(int n,int r)
{
    long long a,b=1;
    if(n<20){
        a=f[n]/(f[r]*f[n-r]);
        b=f[n]/f[n-r];
    }
    else{
        for(int j=n-r+1; j<=n; j++) b*=j;
        a=b/f[r];
    }
    return a*b;
}
int main()
{
    int t,ca,n,k;
    //freopen("input.txt","r",stdin);
    cin>>t;
    fact();
    for(ca=1;ca<=t;ca++)
    {
        long long ans,m;
        scanf("%d%d",&n,&k);
        if(n<k) ans=0;
        else if(k==0) ans=1;
        else if(k==1) ans=n*n;
        else if(n==k) ans=f[n];
        else ans=ncrnpr(n,k);
        printf("Case %d: %lld\n",ca,ans);
    }
}




