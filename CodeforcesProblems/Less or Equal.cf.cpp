#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;

    long long a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);

    if(k==0&&a[0]>1) cout<<a[0]-1<<endl;
    else if(k==0||a[k]==a[k-1]) cout<<-1<<endl;
    else cout<<a[k-1]<<endl;
}

