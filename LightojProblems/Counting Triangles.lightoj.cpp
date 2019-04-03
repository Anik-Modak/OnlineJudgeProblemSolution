//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t,ca,n,q;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        cin>>n;
        ll cnt=0,a[n];

        for(int i=0; i<n; i++) scanf("%lld",&a[i]);
        sort(a,a+n);

        for(int i = 0; i<n; i++)
            for(int j = i+1; j<n-1; j++)
            {
                int id = lower_bound(a, a+n, a[i]+a[j]) -a-1;
                cnt+=max(0,id - j);
            }
        printf("Case %d: %lld\n",ca,cnt);

    }
    return 0;
}



