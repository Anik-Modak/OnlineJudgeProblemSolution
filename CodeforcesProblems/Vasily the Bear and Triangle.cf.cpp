//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin>>x>>y;

    long long xy = abs(x)+abs(y);

    if(x<0 && y>0)
    {
        cout<<-xy<<" "<<0<<" ";
        cout<<0<<" "<<xy<<endl;
    }
    else if(y<0 && x>0)
    {
        cout<<0<<" "<<-xy<<" ";
        cout<<xy<<" "<<0<<endl;
    }
    else if(x<0 && y<0)
    {
        cout<<-xy<<" "<<0<<" ";
        cout<<0<<" "<<-xy<<endl;
    }
    else
    {
        cout<<0<<" "<<xy<<" ";
        cout<<xy<<" "<<0<<endl;
    }
}
