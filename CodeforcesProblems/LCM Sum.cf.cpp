#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,n,s;
    cin>>t;
    while(t--)
    {
        scanf("%d",&n);
        s=(n*n*(n-1))/2 + n;
        printf("%d\n",s);
    }
}
