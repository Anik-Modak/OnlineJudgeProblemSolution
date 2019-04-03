//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long c1, c2, c3, c4;
    cin>>c1>>c2>>c3>>c4;

    int ck = 1;
    if(c3>0)
    {
        if(c1>0 && c4>0) ck = 1;
        else ck = 0;
    }

    if(c1==c4 && ck==1) cout<<1<<endl;
    else cout<<0<<endl;
}
