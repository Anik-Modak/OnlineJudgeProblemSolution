#include<bits/stdc++.h>
#define mn -1000000000000000005
using namespace std;

int main()
{
   long long n,m;
   cin>>n>>m;
   long long i,j,a[n],b[m],id;

    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<m; i++) cin>>b[i];

    long long p,mx=mn,ans=mn;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            p=a[i]*b[j];
            if(mx<p){
                mx=p;
                id=i;
            }
        }
    }
    mx=mn;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(id==i) continue;
            else{
                p=a[i]*b[j];
                if(mx<p) mx=p;
            }
        }
        ans=max(mx,ans);

    }
   cout<<ans<<endl;
}



