#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,mx=0;
    cin>>n;
    int a,b,p=0;
    for(i=1;i<=n;i++){
        cin>>a>>b;
        if(a!=b) p=1;
        if(mx<b) mx=b;

    }
    if(p==0) cout<<"Poor Alex"<<endl;
    else if(p==1||mx==100000) cout<<"Happy Alex"<<endl;
}
