//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long x,y,mx=0;
    for(int i=0; i<n; i++)
    {
        cin>>x>>y;
        mx=max(mx,x+y);
    }
    cout<<mx<<endl;
}
