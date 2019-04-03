#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,co=0;
    char c;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>c;
            if(c=='C'||c=='M'||c=='Y') co=1;
        }
    }
    if(co==0) cout<<"#Black&White"<<endl;
    else cout<<"#Color"<<endl;
}
