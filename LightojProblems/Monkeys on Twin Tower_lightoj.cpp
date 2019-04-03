//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int i,a1[n],a2[n],b1[n],b2[n];

        for(i=0; i<n; i++) scanf("%d",&a1[i]);
        for(i=0; i<n; i++) scanf("%d",&a2[i]);

        for(i=1; i<n; i++) scanf("%d",&b1[i]);
        for(i=1; i<n; i++) scanf("%d",&b2[i]);

        for(int i=1; i<n; i++)
        {
            a1[i]+=min(a1[i-1],a2[i-1]+b2[i]);
            a2[i]+=min(a2[i-1],a1[i-1]+b1[i]);
        }
        printf("Case %d: %d\n",ca,min(a1[n-1],a2[n-1]));
    }
}


