//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    long long a[n], sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }

    sort(a,a+n);
    cin>>m;

    while(m--)
    {
        int q;
        cin>>q;
        cout<<sum-a[n-q]<<endl;
    }
}
