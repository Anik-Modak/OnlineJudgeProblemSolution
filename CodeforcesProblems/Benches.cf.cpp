//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a, mx=0, mn;
    double sum = m;

    for(int i=0; i<n; i++)
    {
        cin>>a;
        mx=max(mx,a);
        sum+=a;
    }
    mn = sum/n;
    if(mn<sum/n) mn++;
    if(mn<mx) mn=mx;

    mx += m;
    cout<<mn<<" "<<mx<<endl;
}
