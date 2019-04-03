#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,n,m;
    cin>>t;

    for(c=1;c<=t;c++)
    {
       cin>>n>>m;

       char ch;
       long long i,a[n],d,x,y;

       for(i=0;i<n;i++) cin>>a[i];
       while(m--)
       {
            cin>>ch;
            if(ch=='P'){
                cin>>x>>y;
                swap(a[x],a[y]);
            }
            if(ch=='S'){
                cin>>d;
                for(i=0; i<n; i++) a[i]+=d;
            }
            if(ch=='M'){
                cin>>d;
                for(i=0; i<n; i++) a[i]*=d;
            }
            if(ch=='D'){
                cin>>d;
                for(i=0; i<n; i++) a[i]/=d;;
            }
            if(ch=='R') reverse(a,a+n);
       }
       printf("Case %d:\n",c);
       for(i=0;i<n;i++)
       {
           if(i==n-1) cout<<a[i]<<endl;
           else cout<<a[i]<<" ";
       }
    }
}


