//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    int ac = a*c;
    int bd = abs(b*c - a*d);
    int g = __gcd(ac, bd);

    ac /= g;
    bd /= g;

    cout<<bd<<"/"<<ac<<endl;
}
