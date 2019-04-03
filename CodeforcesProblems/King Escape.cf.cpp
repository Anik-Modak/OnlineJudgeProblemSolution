//Anik_modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ax, ay, bx, by, cx, cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;

    if(cx<ax && bx<ax)
    {
        if(cy<ay && by<ay) cout<<"YES\n";
        else if(cy>ay && by>ay) cout<<"YES\n";
        else cout<<"NO\n";

    }
    else if(cx>ax && bx>ax)
    {
        if(cy<ay && by<ay) cout<<"YES\n";
        else if(cy>ay && by>ay) cout<<"YES\n";
        else cout<<"NO\n";
    }
    else cout<<"NO\n";
}
