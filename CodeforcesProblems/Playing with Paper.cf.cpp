#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,m,c=0;
    cin>>a>>b;

    while(a!=0)
    {
        if(a<b){
            m=a;
            a=b;
            b=m;
        }
        c=c+a/b;
        a=a%b;

    }
    cout<<c<<endl;
}
