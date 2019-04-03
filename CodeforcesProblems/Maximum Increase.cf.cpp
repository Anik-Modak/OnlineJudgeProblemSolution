#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    long long a,b=0,mx=0;
    while(n--){
        cin>>a;
        if(b<a) c++;
        else c=1;
        if(mx<c) mx=c;
        b=a;
    }
    cout<<mx<<endl;
}
