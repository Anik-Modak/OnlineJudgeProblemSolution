#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long i,n,s,d,x;
    cin>>n;
    while(n--){
        cin>>s>>d;
        x=s+d;
        if(x%2==1) d=x;
        else x=x/2;
        if(s<d||s-x<0) cout<<"impossible"<<endl;
        else cout<<x<<" "<<s-x<<endl;
    }
}
