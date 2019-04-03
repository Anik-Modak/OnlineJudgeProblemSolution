#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,p=1,c=0,q=0;
    string a;
    cin>>n>>a;
    for(i=0 ;i<n; i++) if(a[i]=='?') c++;
    for(i=1; i<n; i++)
    {
        if(a[i]!='?'&&a[i-1]!='?'&&a[i-1]==a[i]) p=0;
    }
    if(p==0||c==0){
        cout<<"No"<<endl;
        return 0;
    }
    a[n]='?';
    for(i=1; i<n; i++){
        if(a[i]=='?'){
            if(a[i-1]!='?'&&a[i+1]!='?'&&a[i-1]!=a[i+1]) continue;
            else q=1;
        }
    }
    if(a[0]=='?'||a[n-1]=='?'||q) cout<<"Yes"<<endl;
    else  cout<<"No"<<endl;
    return 0;
}
