#include<bits/stdc++.h>
using namespace std;

int main()
{
    int d,f,g,x;
    while(cin>>d>>f>>g){
        if(d>=12) cout<<"N"<<endl;
        else{
            x=(12-d)+f;
            if(x<=g) cout<<"S"<<endl;
            else cout<<"N"<<endl;
        }
    }
}
