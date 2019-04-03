#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int i,a[n],b,s=0;

        for(i=0;i<n;i++) scanf("%d",&a[i]);

        sort(a,a+n);
        b=a[0];
        for(i=1;i<n;i++)
        {
            b=b+a[i];
            s=s+b;
        }
        printf("%d\n",s);
    }
}
