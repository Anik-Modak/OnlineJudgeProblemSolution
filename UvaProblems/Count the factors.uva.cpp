#include<bits/stdc++.h>
using namespace std;

bool a[10000005]={0};
int main()
{
    long long n,i,j;
    vector<int>v;
    a[1]=1;
    for(i=4;i<=1000000;i=i+2) a[i]=1;
    for(i=3;i<=sqrt(1000000);i+=2)
    {
        for(j=i+i;j<=1000000;j+=i) a[j]=1;
    }
    for(i=1;i<=1000000;i++) if(a[i]==0) v.push_back(i);
    while(1){
        scanf("%lld",&n);
        if(n==0) break;
        int m=n,c=0;
        for(i=0;i<v.size();i++) if(m%v[i]==0) c++;
        printf("%lld : %d\n",n,c);
    }
}
