#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,mx=0;
    cin>>n;
    char a[1005][10];
    for(i=0;i<n;i++) scanf("%s",a[i]);

    for(j=0;j<7;j++)
    {
        int c=0;
        for(i=0;i<n;i++) if(a[i][j]=='1') c++;
        if(mx<c) mx=c;
    }
    cout<<mx<<endl;
}
