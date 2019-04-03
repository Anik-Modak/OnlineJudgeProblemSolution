//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,t;

    //freopen("input.txt","r",stdin);
    cin>>t;

    int n,m;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        long long k,s=0,c=0;

        m=n;
        while(n--)
        {
            scanf("%lld",&k);
            s=s^k;
            if(k==1) c++;
        }

        if(c==m){
            if(c%2) printf("Case %d: Bob\n",ca);
            else printf("Case %d: Alice\n",ca);
        }
        else if(s==0) printf("Case %d: Bob\n",ca);
        else printf("Case %d: Alice\n",ca);
    }
}
