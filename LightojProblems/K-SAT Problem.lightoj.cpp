#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        int n,m,k,p;
        cin>>n>>m>>k;
        int i,j,a[n][k];
        for(i=0;i<n;i++){
            for(j=0;j<k;j++) scanf("%d",&a[i][j]);
        }
        cin>>p;
        int b[p],l,ans=0,c=0;
        for(i=0;i<p;i++) cin>>b[i];

        for(i=0; i<n; i++){
            ans=0;
            for(j=0; j<k; j++){
                if(a[i][j]>0){
                    for(l=0; l<p; l++)
                        if(a[i][j]==b[l]) ans=1;
                }
                else{
                    int x=1;
                    for(l=0; l<p; l++){
                        if(abs(a[i][j])==b[l]) x=0;
                    }
                    if(x) ans=1;
                }
            }
            if(ans) c++;
        }

        if(c==n) printf("Case %d: Yes\n",ca);
        else printf("Case %d: No\n",ca);
    }
}


