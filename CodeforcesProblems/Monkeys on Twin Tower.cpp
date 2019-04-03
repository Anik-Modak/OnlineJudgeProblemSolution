#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,ca;
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int i,a1[n],a2[n],b1[n],b2[n];

        for(i=0; i<n; i++) scanf("%d",&a1[i]);
        for(i=0; i<n; i++) scanf("%d",&a2[i]);

        for(i=1; i<n; i++) scanf("%d",&b1[i]);
        for(i=1; i<n; i++) scanf("%d",&b2[i]);

        int s=a1[0],mn,x=2;
        i=1;
        while(x--)
        {
            l1: if(i>=n) break;
            if(a1[i]<b1[i]+a2[i]){
                s+=a1[i];
                i++; goto l1;
            }
            else{
                s+=b1[i]+a2[i];
                i++; goto l2;
            }
            l2: if(i>=n) break;
            if(a2[i]<b2[i]+a1[i]){
                s+=a2[i];
                i++; goto l2;
            }
            else{
                s+=b2[i]+a1[i];
                i++; goto l1;
            }
            if(x==2){
                mn=s;
                s=a2[i];
                i=1; goto l2;
            }
        }
        if(mn>s) mn=s;
        printf("Case %d: %d\n",ca,mn);
    }
}
