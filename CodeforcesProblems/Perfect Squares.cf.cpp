#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a,mx=-10000000;

    while(n--)
    {
        cin>>a;
        if(a>=0){
            int d=sqrt(a);
            if(d*d!=a&&mx<=a) mx=a;
        }
        else if(mx<=a) mx=a;
    }
    cout<<mx<<endl;
}
