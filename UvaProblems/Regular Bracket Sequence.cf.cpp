//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a, sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum+=a;
    }
    if(sum%2) cout<<0<<endl;
    else cout<<1<<endl;
}
