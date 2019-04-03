#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,n,m;
    cin>>n;
    r=2*n+1;
    m=r-1;
    int i,j,k,l=r/2;
    for(i=1;i<=r;i++)
    {
        if(i<=l+1){
            for(j=1;j<=m;j++) printf(" ");
            int p=-1;
            for(k=2*i-1;k>0;k--){
                if(p<k){
                    if(k==1)cout<<++p<<endl;
                    else cout<<++p<<" ";
                }
                else{
                    if(k==1)cout<<--p<<endl;
                    else cout<<--p<<" ";
                }
            }
            m=m-2;
        }
        else{
            m=m+2;
            for(j=1;j<=m+2;j++) printf(" ");
            int p=-1;
            for(k=2*l-1;k>0;k--){
                if(p<k){
                    if(k==1)cout<<++p<<endl;
                    else cout<<++p<<" ";
                }
                else{
                    if(k==1)cout<<--p<<endl;
                    else cout<<--p<<" ";
                }
            }
            l--;
        }
    }
}

