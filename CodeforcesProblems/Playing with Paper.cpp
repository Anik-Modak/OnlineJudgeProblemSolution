#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,m,c=0,ans;
    cin>>a>>b;
    if(b<4){
        if(a%b==0) ans=a/b;
        else ans=a/b+b;
    }
    else{
        while(b>0)
        {
           m=b;
           b=a-b;
           a=m;
           if(a<b){
                m=a;
                a=b;
                b=m;
           }
           c++;
        }
        ans=c;
    }
    cout<<ans<<endl;
}
