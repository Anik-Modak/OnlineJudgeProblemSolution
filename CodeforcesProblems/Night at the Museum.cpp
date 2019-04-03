#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,s=0;
    string a;
    cin>>a;
    char b='a';
    for(i=0;i<a.size();i++)
    {
        n=abs(a[i]-b);
        if(n>13) n=26-n;
        s=s+n;
        b=a[i];
    }
    cout<<s<<endl;
}
