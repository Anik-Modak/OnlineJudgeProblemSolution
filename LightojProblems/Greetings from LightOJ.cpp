#include<iostream>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    int n,m,s;
    for(i=1;i<=t;i++)
    {
        cin>>n>>m;
        s=n+m;
        cout<<"Case "<<i<<": "<<s<<endl;
    }
}
