//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin>>n;

    int mx = 0, sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        sum -= a;
        sum += b;
        mx = max(sum, mx);
    }
    cout<<mx<<endl;
}


