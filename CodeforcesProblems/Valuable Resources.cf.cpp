#include<bits/stdc++.h>
using namespace std;

long long mx=1000000005;
int main()
{
    long long n,a=mx,b=mx,p=-mx,q=-mx,y,x;
    cin>>n;
    while(n--){
        cin>>x>>y;
        if(a>x) a=x;
        if(b>y) b=y;
        if(p<x) p=x;
        if(q<y) q=y;
    }
    //cout<<q<<b<<endl;
    x=(p-a)*(p-a);
    y=(q-b)*(q-b);
    cout<<max(x,y)<<endl;
}

