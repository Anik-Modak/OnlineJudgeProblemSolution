//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, ans=0, s=0;
    cin>>n>>m;

    long long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }

    sort(a,a+n);
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }

    long long hi = a[n-1];
    long long nr = hi + n - 1, st = 1;

    for(int i=1; i<n; i++)
    {
        if(a[i]>st)
        {
            st++;
            hi--;
            nr--;
        }
        if(hi == 1) break;
    }

    cout<<s-nr<<endl;
    return 0;
}


