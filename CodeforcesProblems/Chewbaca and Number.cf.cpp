#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p,i;
    char a[100];
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;i++){
        m=a[i]-'0';
        p=9-m;
        if(i==0){
            if(p==0) cout<<m;
            else if(m==0) cout<<p;
            else if(p<m) cout<<p;
            else cout<<m;
        }
        else{
            if(p<m) cout<<p;
            else cout<<m;
        }
    }
    cout<<endl;
}
