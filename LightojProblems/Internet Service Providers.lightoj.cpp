#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        long long i,n,c,t,a,b,mx=-46;
        cin>>n>>c;
        if(c==0||n==0) t=0;
        else{
            for(i=0;i*i<=i*c;i++){
                a=i*c;
                b=i*i*n;
                if(a-b<0) break;
                if(a-b>mx){
                    mx=a-b;
                    t=i;
                }
            }
        }
        printf("Case %d: %lld\n",ca,t);
    }
}

