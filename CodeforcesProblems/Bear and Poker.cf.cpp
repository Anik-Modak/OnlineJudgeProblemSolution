#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

long long lcm(int a, int b)
{
    long long temp=gcd(a,b);
    return temp ? (a/temp*b):0;
}

int main()
{
    int n,i;
    cin>>n;

    long long r,a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
        while (a[i] % 2 == 0) a[i]/=2;
        while (a[i] % 3 == 0) a[i]/=3;
    }
    r=accumulate(a,a+n,1,lcm);

    for(i=0;i<n;i++) if(r/a[i]>3) break;

    if(r>0&&i==n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
