//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca,n;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int a,s=0,p=0,g;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a>0) p++;
            s+=abs(a);
        }
        g=__gcd(s,p);
        if(p) printf("Case %d: %d/%d\n",ca,s/g,p/g);
        else printf("Case %d: inf\n",ca);

    }
}
