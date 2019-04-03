#include<bits/stdc++.h>
using namespace std;

int main()
{
   int m,n,mx,mn,c=0;
   cin>>n>>m;
   mx=max(m,n);
   mn=min(m,n);
   if(n==1&&m==1) cout<<c<<endl;
   else{
       while(1){
            mx=mx-2;
            mn++;
            if(mx<=2){
                m=mx;
                mx=max(mx,mn);
                mn=min(m,mn);
            }
            c++;
            if(mx<=0||mn<=0) break;
       }
       cout<<c<<endl;
   }
}
