#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0&&m==0) break;

        int i,c=0;
        long long n1,m1;
        map<long, long>a;
        for(i=0;i<n;i++){
            scanf("%lld",&n1);
            a[n1]=1;
        }
        for(i=0;i<m;i++)
        {
            scanf("%lld",&m1);
            if(a[m1]==1) c++;
        }
        printf("%d\n",c);
    }
}
