//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca,n,m;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);

        string a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        int ans=0;

        for(int i=1; i<n; i++)
        {
            if(a[i-1]==a[i].substr(0,a[i-1].size()))
            {
                ans=1;
                break;
            }
        }

        if(ans)  printf("Case %d: NO\n",ca);
        else printf("Case %d: YES\n",ca);
    }
    return 0;
}


