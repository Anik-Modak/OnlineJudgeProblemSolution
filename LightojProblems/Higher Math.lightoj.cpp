#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    int a[3];
    for(c=1;c<=t;c++)
    {
        scanf("%d%d%d",&a[0],&a[1],&a[2]);
        sort(a,a+3);
        if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) printf("Case %d: yes\n",c);
        else printf("Case %d: no\n",c);
    }
}
