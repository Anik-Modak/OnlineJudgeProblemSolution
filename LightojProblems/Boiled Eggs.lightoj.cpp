#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ca,t;
    cin>>t;
    int n,p,q;

    for(ca=1;ca<=t;ca++)
    {
        cin>>n>>p>>q;
        int a,c=0,s=0;
        while(n--){
            cin>>a;
            s+=a;
            if(c<p&&s<=q) c++;
        }
        printf("Case %d: %d\n",ca,c);
    }
}


