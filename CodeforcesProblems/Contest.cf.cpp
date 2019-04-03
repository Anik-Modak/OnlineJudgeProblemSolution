#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,v,m;
    cin>>a>>b>>c>>d;
    m=max(3*a/10,a-a*c/250);
    v=max(3*b/10,b-b*d/250);
    if(m>v)cout<<"Misha"<<endl;
    else if(v>m) cout<<"Vasya"<<endl;
    else cout<<"Tie"<<endl;
}

