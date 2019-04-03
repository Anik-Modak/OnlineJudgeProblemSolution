//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, ans = 0;
    cin>>n;

    x = n - 10;
    if(x==10) ans = 15;
    else if(x>0 && x<=11) ans = 4;
    else ans = 0;

    cout<<ans<<endl;
}


