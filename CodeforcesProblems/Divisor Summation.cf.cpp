#include<bits/stdc++.h>
using namespace std;
int divisor(long long int n)
{
    long long int i,m,c=0;
    m=sqrt(n+1);
    for(i=1;i<=m;i++){
        if(i*i==n) c=c+i;
        else if(n%i==0) c=c+i+n/i;
    }
    c=c-n;
    return c;
}
int main()
{
    int t,a,i,c;
    cin>>t;
    for(i=1;i<=t;i++){
        scanf("%d",&a);
        c=divisor(a);
        cout<<c<<endl;
    }
}
