//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, v, ans = 0;
    cin>>n>>v;

    if(n <= v) ans = n - 1;
    else
    {
        ans = v;
        int tmp = n - v;
        for(int i = 2; i<=tmp; i++)
            ans += i;
    }
    cout<<ans<<endl;
}

