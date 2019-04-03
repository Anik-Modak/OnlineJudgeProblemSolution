//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

bool a[1005]={0};

void sive()
{
    int i,j,n=1000;
    a[1]=1;
    for(i=4; i<=n; i=i+2) a[i]=1;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(a[i]==0)
            for(j=i*i; j<n; j+=i) a[j]=1;
    }
}
int factor(int n,int m)
{
    int mx=0;
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i==0){
            if(a[i]==0) mx=max(i,mx);
            if(a[n/i]==0) mx=max(n/i,mx);
        }
        if(n+mx==m) return 1;
    }
    return mx;
}

int main()
{
    int t,ca,n,m;
    //freopen("input.txt","r",stdin);
    cin>>t;
    sive();

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&m);

        if(a[m]==0) printf("Case %d: -1\n",ca);
        else if(n==m) printf("Case %d: 1\n",ca);
        else{
            int sum=0,ans=1;
            while(1){
                sum=factor(n,m);
                cout<<sum<<endl;
                if(sum==1||n==m) break;
                else n=n+sum;
                ans++;
            }
            printf("Case %d: %d\n",ca,ans);
        }
    }
    return 0;
}



