//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

unsigned long long phi[5000005]={0};

void sive()
{
    int i,j,n=5000001;

    for(i=2; i<n; i++)
    {
        if(phi[i]==0)
        {
            phi[i]=i-1;
            for(j=2*i; j<n; j+=i)
            {
                if(phi[j]==0) phi[j]=j;
                phi [j] *= (i - 1);
                phi [j] /= i;
            }
        }
    }

    for(int i=2; i<n; i++)
    {
        phi[i] *= phi[i];
        phi[i] += phi[i - 1];
    }
}
int main()
{
    int ca,t;
    //freopen("input.txt","r",stdin);
    cin>>t;
    sive();

    int m,n;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&m);
        cout<<phi[m]<<" "<<phi[n-1]<<endl;
        unsigned long long ans=phi[m]-phi[n-1];
        printf("Case %d: %llu\n",ca,ans);
    }
}
