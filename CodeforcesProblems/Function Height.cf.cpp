//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, ans;
    cin>>n>>m;

    ans=m/n;
    if(double(m)/n > m/n) ans++;
    cout<<ans<<endl;
}
