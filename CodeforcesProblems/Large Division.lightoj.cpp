#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    string a;
    long int n,m,r;
    for(ca=1;ca<=t;ca++)
    {
        cin>>a;
        cin >> n;
        int i,len=a.size();
        r=0;
        if(a[0]=='-') i=1;
        else i=0;
        for(;i<len;i++)
        {
            r=r*10+(a[i]-'0');
            r=r%n;
        }
        cout<<"Case "<<ca<< ": ";
        if(r) cout<<"not divisible"<< endl;
        else cout<<"divisible"<<endl;
    }
}
