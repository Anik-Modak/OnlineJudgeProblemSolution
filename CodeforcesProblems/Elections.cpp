#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,indx;
    cin>>n>>m;
    int i,j,x[n+1]={0},mx;
    for(i=1;i<=m;i++)
    {
        indx=1;
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(j==1) mx=a;
            if(mx<a){
                mx=a;
                indx=j;
            }
        }
        x[indx]++;
    }
    for(i=1;i<=n;i++)
    {
        if(i==1){
            mx=x[i];
            indx=i;
        }
        if(mx<x[i]){
            mx=x[i];
            indx=i;
        }
    }
    cout<<indx<<endl;
}
