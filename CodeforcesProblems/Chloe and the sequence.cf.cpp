//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, ans = 1;
    cin>>n>>k;

    while(k%2==0)
    {
        k /=2;
        ans ++;
    }
    cout<<ans<<endl;
}
