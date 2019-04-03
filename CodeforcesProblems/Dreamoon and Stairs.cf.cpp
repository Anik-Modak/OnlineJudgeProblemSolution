#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,mn=10000,c;
    cin>>n>>m;
    for(i=0;i<=n/2;i++){
        c=n-2*i;
        c=c+i;
        if(c%m==0&&mn>c) mn=c;
    }
    if(mn==10000) cout<<"-1"<<endl;
    else cout<<mn<<endl;
}
