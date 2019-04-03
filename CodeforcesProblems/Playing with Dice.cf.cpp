#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,x,y,w=0,d=0,l=0;
    cin>>n>>m;
    for(int i=1;i<=6;i++){
        x=abs(i-m);
        y=abs(i-n);
        if(x>y) w++;
        else if(y>x) l++;
        else d++;
    }
    cout<<w<<" "<<d<<" "<<l<<endl;
}
