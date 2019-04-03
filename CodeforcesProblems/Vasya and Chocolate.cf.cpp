//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a, b, c, s, ans, tmp;
        cin>> s >> a >> b >> c;

        tmp = (s/(a*c));
        ans = tmp*a + tmp*b;
        ans += (s%(a*c))/c;

        cout<<ans<<endl;
    }
}
