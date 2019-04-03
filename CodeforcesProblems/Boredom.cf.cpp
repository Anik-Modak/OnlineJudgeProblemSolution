#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,d,e=0,f;
    scanf("%d",&n);

    int a[n];
    long long s1=0,s2=0,s3=0,mx;

    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);

    d=a[0];
    for(i=0;i<n;i++){
        if(d==a[i]) {
            s1=s1+a[i];
            d=a[i];
        }
        else if(e==0||e==a[i]) {
            s2+=a[i];
            e=a[i];
        }
        else s3+=a[i];
    }
    mx=max(s2,s1+s3);
    cout<<mx<<endl;
}
