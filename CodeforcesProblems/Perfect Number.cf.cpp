#include<bits/stdc++.h>
using namespace std;

int a[100005];

int digit(long long n)
{
    int r,s=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r;
    }
    return s;
}

int main()
{
    long long m,n=19;
    for(int i=1;i<=10000;){
        if(digit(n)==10){
            a[i]=n;
            i++;
        }
        n+=9;
    }
    cin>>m;
    cout<<a[m]<<endl;
}
