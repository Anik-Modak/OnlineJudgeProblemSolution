#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,mx=0;
    cin>>n;
    string a;
    cin>>a;
    set<char>s;
    for(i=0; i<n; i++)
    {
        if(a[i]>='A'&&a[i]<='Z') s.clear();
        else s.insert(a[i]);
        if(mx<s.size()) mx=s.size();
    }
    cout<<mx<<endl;
}



