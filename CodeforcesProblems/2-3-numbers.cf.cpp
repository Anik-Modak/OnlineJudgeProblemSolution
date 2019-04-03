#include<bits/stdc++.h>
using namespace std;

int divisor(long long n)
{
    int i,ans=1,m=sqrt(n);
    for(i=2; i<=3; i++)
    {
        int c=1;
        if(n<i) break;
        while(n%i==0){
            n=n/i;
            c++;
        }
        if(c>1) ans*=c;
    }
    if(n>1) return 0;;
    return 1;
}

int main()
{
    long long i,n,m,x,y,c=0;
    cin>>n>>m;
    for(i=n; i<=m; i++){
        if(divisor(i)) c++;
    }
    cout<<c<<endl;
}
