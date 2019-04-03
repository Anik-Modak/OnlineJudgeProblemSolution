//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long b,long long p,long long m)
{
    int p1,p2,h;
    if(p==0) return 1;
    if(p%2==1){
        p1=b%m;
        p2=bigmod(b,p-1,m)%m;
        return (p1*p2)%m;
    }
    else{
        h=bigmod(b,p/2,m)%m;
        return (h*h)%m;
    }
}

int main()
{
    int t,ca,n,k;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&k);

        double p=log10(n)*k;
        p-=floor(p);
        p=pow(10,p);

        int ans1=p*100,ans2=bigmod(n,k,1000);
        printf("Case %d: %03d %03d\n",ca,ans1,ans2);
    }
    return 0;
}

