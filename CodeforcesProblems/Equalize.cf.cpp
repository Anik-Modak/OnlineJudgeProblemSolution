//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;

    string a,b;
    cin>>a>>b;

    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i+1]!=b[i+1] && a[i+1]!=a[i] && i+1<n) swap(a[i],a[i+1]);
            else a[i]=b[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}


