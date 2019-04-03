#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ca;
    freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int i,a1[n],a2[n],b1[n],b2[n];

        for(i=0; i<n; i++) scanf("%d",&a1[i]);
        for(i=0; i<n; i++) scanf("%d",&a2[i]);

        for(i=1; i<n; i++) scanf("%d",&b1[i]);
        for(i=1; i<n; i++) scanf("%d",&b2[i]);

        int s=a1[0],mn=0;
        i=1;
        l1:if(i<n){
            if(a1[i]<=(b1[i]+a2[i])){
                s+=a1[i];
                i++; goto l1;
            }
            else{
                s+=(b1[i]+a2[i]);
                i++; goto l2;
            }
        }
        l2:if(i<n){
            if(a2[i]<=(b2[i]+a1[i])){
                s+=a2[i];
                i++; goto l2;
            }
            else{
                s+=(b2[i]+a1[i]);
                i++; goto l1;
            }
        }
        if(mn==0){
            mn=s;
            s=a2[0];
            i=1; goto l2;
        }
        printf("Case %d: %d\n",ca,min(mn,s));
    }
}

