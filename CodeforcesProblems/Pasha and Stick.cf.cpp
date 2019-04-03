#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long m,n,i,c=0;
    cin>>n;

    if(n%2!=0) cout<<0<<endl;
    else{
        m=n/2;
        if(m%2==0) c=1;
        cout<<m/2-c<<endl;
    }
}

