#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1],i,m,c,s=0;
    vector<int>v;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());

    for(c=0;c<n;c++)
    {
        s=s+v[c];
        if(s==k){
            m=v[c];
            c++;
            break;
        }
        else if(s>k){
            m=v[c-1];
            break;
        }
    }
    cout<<c<<endl;
    int j=1;
    i=1;
    while(j<=c){
        if(a[i]<=m){
            if(j==c)cout<<i<<endl;
            else cout<<i<<" ";
            j++;
        }
        i++;
    }
}
