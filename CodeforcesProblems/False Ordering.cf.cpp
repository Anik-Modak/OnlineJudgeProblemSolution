#include<bits/stdc++.h>
using namespace std;
int Prime(long long n)
{
    long long i,m,p=1;
    m=sqrt(n);
    for(i=2;i<=m;i++){
        if(n%i==0){
            p=0;
            break;
        }
    }
    return p;
}
int main()
{
    long long t,a,p;
    cin>>t;
    while(t--){
        scanf("%I64d",&a);
        p=sqrt(a);
        if(a>3&&p*p==a&&Prime(p)) puts("YES");
        else puts("NO");
    }
}
