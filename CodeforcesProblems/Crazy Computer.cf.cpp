#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,s,c;
    cin>>n>>s;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0) c=1;
        else if(a[i]-a[i-1]<=s) c++;
        else c=1;
    }
    cout<<c<<endl;
}

