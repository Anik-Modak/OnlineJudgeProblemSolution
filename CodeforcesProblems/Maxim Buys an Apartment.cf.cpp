#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,mn,mx;
    cin>>n>>k;
    if(k==0) cout<<0<<" "<<0<<endl;
    else{
        if(n>k) mn=1;
        else mn=0;
        mx=(n-k);
        if(mx>k*2) mx=k*2;
        cout<<mn<<" "<<mx<<endl;
    }
}
