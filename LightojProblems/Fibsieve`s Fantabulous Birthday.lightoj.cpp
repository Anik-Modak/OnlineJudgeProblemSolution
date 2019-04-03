#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    long long n,m,s,p,x,y;
    for(i=1;i<=t;i++){
        cin>>n;
        m=sqrt(n);
        if(m*m!=n) m++;
        s=m*m;
        if(s%2==0){
            if(m*m==n){
                x=m;
                y=1;
            }
            else{
                p=s-m+1;
                if(n>=p){
                    x=m;
                    y=m-(n-p);
                }
                else{
                    y=m;
                    x=m-(p-n);
                }
            }
        }
        else{
            if(m*m==n){
                y=m;
                x=1;
            }
            else{
                p=s-m+1;
                if(n>=p){
                    y=m;
                    x=m-(n-p);
                }
                else{
                    x=m;
                    y=m-(p-n);
                }
            }
        }
        printf("Case %d: %lld %lld\n",i,x,y);
    }
}
