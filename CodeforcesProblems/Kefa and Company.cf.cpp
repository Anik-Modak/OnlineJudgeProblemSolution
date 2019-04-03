//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n, d ;
    cin >> n >> d;

    long long a, b, sum = 0, mx = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        mx=max(mx,b);
        if(a<d) sum+=b;
    }

    cout<<max(sum,mx)<<endl;
}
