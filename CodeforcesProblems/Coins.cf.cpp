//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s;
    cin>>n>>s;

    if(n>=s) cout<<1<<endl;
    else{
        long long ans=s/n;
        if(s%n) ans++;
        cout<<ans<<endl;
    }
    return 0;
}

