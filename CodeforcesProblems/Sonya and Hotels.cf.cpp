//Anin_Modak
#include<bits/stdc++.h>
#define MX 1000000000
using namespace std;

int main()
{
    long long n,d;
    cin>>n>>d;

    long long a[n],ans=2;
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
    {
        if(abs(a[i]-a[i-1])>2*d) ans+=2;
        else if (abs(a[i]-a[i-1])==2*d) ans++;
    }
    cout<<ans<<endl;
}
