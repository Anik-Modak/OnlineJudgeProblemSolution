#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=1;
    cin>>n;
    long long s=0,a;
    while(n--){
        scanf("%lld",&a);
        s=s+a;
        if(a==0&&s%2==1) p=0;
    }
    if(p==1&&s%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

