//Anik_Modak
#include<bits/stdc++.h>
#define siz 10000
using namespace std;

long long sum = 0,diff=0;

void fn( long long A[], int n )
{
    for( int i = 1; i < n; i++ )
    {
        sum += A[i-1]*(n-i);
        diff += A[i]*i;
    }
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        sum=0; diff=0;
        int n,q,m;
        cin>>n>>q;

        long long a[n];
        for(int i=0; i<n; i++) scanf("%lld",&a[i]);
        fn(a,n);

        printf("Case %d:\n",ca);
        while(q--)
        {
            int ch,x;
            long long v;
            scanf("%d",&ch);
            if(!ch){
                scanf("%d%lld",&x,&v);
                long long s,d;

                s=v*(n-(x+1))-a[x]*(n-(x+1));
                d=v*x-a[x]*x;

                a[x]=v;
                sum+=s;
                diff+=d;
            }
            else printf("%lld\n",sum-diff);
        }
    }
    return 0;
}

