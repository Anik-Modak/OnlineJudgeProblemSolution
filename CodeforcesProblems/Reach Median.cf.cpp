//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s, ans=0;
    cin>>n>>s;

    long long a[n+5];
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);

    ans=abs(a[n/2]-s);
    for(int i=0; i<n; i++)
    {
        if(i<n/2&&a[i]>s) ans+=(a[i]-s);
        else if(i>n/2&&s>a[i]) ans+=(s-a[i]);
    }
    cout<<ans<<endl;
}
