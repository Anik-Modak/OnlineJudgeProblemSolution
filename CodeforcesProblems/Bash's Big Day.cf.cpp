#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;
void divisor(int n)
{
    int i,m,c=0;
    m=sqrt(n+1);
    for(i=1;i<=m;i++)
    {
        if(i*i==n) mp[i]++;
        else if(n%i==0){
            mp[i]++;
            mp[n/i]++;
        }
    }
}
int main()
{
    int n,a,mx=1;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        divisor(a);
    }
    for(int i=2; i<=100000; i++) mx=max(mx,mp[i]);
    cout<<mx<<endl;
}



