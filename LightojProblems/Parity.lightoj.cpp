#include<bits/stdc++.h>
using namespace std;

int binary(int n)
{
    string r;
    while(n!=0){
        if(n%2!=0) r="1"+r;
        n/=2;
    }
    int s=r.size();
    return s;
}
int main()
{
    int t,i;
    cin>>t;
    int n,m;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        m=binary(n);
        if(m%2==0) printf("Case %d: even\n",i);
        else printf("Case %d: odd\n",i);
    }
}
