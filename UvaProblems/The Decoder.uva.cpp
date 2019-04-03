#include<bits/stdc++.h>
using namespace std;


int main()
{
    int i,n;
    string b;
    while(cin>>b)
    {
        for(i=0;i<b.size();i++) b[i]=b[i]-7;
        cout<<b<<endl;
    }
}

