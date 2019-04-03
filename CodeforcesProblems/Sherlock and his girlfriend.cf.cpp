#include<bits/stdc++.h>
using namespace std;

bool a[100005]={0};

void sive()
{
    int i,j,n=100000;
    a[1]=1;
    for(i=4;i<=n;i=i+2) a[i]=1;
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(a[i]==0)
            for(j=i*i; j<n; j+=i) a[j]=1;
    }
}
map<int,int>mp;
void divisor(int n)
{
    int i,m,c=0;
    m=sqrt(n+1);
    for(i=1;i<=m;i++){
        if(i*i==n){
            if(a[i]==0) mp[i]++;
        }
        else if(n%i==0){
            if(a[i]==0) mp[i]++;
            if(a[n/i]==0) mp[n/i]++;
        }
    }
}
int main()
{
    int n,i,mx=0;
    sive();
    cin>>n;
    vector<int>v;
    for(i=2; i<n+2; i++) divisor(i);

    for(i=2; i<n+2; i++)
    {
        if(mp[i]>=2) v.push_back(2);
        else v.push_back(1);
    }
    if(n<3) cout<<1<<endl;
    else cout<<2<<endl;
    for(i=0; i<n; i++){
        if(i==n-1) cout<<v[i]<<endl;
        else cout<<v[i]<<" ";
    }
}


