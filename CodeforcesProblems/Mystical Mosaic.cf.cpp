#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p=1;
    cin>>n>>m;
    string a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    for(int j=0; j<m; j++){
        for(int i=1; i<n; i++){
            if(a[i-1][j]=='#'&&a[i][j]=='#') p=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=1; j<m; j++){
            if(a[i][j-1]=='#'&&a[i][j]=='#') p=0;
        }
    }
    if(p) cout<<"Yes"<<endl;
    else  cout<<"No"<<endl;
    return 0;
}

