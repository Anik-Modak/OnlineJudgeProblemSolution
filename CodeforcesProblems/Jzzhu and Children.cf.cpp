#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],v[n]={0},i,id,p=0;
    for(i=0;i<n;i++) cin>>a[i];

    while(p!=n){
        p=0;
        for(i=0;i<n;i++)
        {
            if(a[i]<=v[i]){
                p++;
                continue;
            }
            v[i]=v[i]+m;
            id=i;
        }
    }
    cout<<id+1<<endl;
}
