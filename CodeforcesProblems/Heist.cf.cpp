//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a, mx=0, mn=1000000005;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        mx=max(mx,a);
        mn=min(mn,a);
    }
    long long ans =1+(mx-mn)-n;
    cout<<ans<<endl;
}
