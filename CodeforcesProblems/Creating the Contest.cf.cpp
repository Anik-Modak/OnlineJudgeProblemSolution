//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a[n], mx=0, cnt=0;
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]<=2*a[i]) cnt++;
        else cnt=0;
        mx=max(mx,cnt);
    }
    cout<<mx+1<<endl;
}
