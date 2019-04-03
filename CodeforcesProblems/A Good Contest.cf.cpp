#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n;
    cin>>t;
    string s;
    int a,b,p=0;
    while(t--){
        cin>>s>>b>>a;
        if(b>=2400){
            if(a-b>0) p=1;
        }
    }
    if(p)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
