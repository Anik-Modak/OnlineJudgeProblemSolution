#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        int i,ans,a,b;
        cin>>a>>b;

        if(a==b){
            if(a%3==1) ans=0;
            else ans=1;
        }
        else{
            a--;
            int c1=0,c2=0;
            if(a%3) c1=1;
            if(b%3) c2=1;
            c1=c1+a/3;
            c2=c2+b/3;
            //ans=(((b-1)/3)*2+(b-1)%3) - (((a-2)/3)*2+(a-2)%3);
            ans=(b-a)-(c2-c1);
        }
        printf("Case %d: %d\n",ca,ans);
    }
}

