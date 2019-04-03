#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,i,j;
    cin>>n;
    int a[n],c[n],t;
    for(i=0;i<n;i++) cin>>a[i];

    for(i=0;i<n;i++){
        t=0;
        for(j=0;j<n;j++){
            if(a[i]<a[j]){
                t++;
            }
        }
        c[i]=t;
    }
    for(i=0;i<n;i++)
    {
        if(i==n-1) cout<<c[i]+1<<endl;
        else cout<<c[i]+1<<" ";
    }
    return 0;
}


