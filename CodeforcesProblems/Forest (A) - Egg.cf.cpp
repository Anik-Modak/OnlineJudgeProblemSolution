//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n], ans=1, mx;
    for(int i=0; i<n; i++) cin>>a[i];

    mx=a[0];
    for(int i=1; i<n; i++)
    {
        if(mx<a[i])
        {
            mx=a[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}

