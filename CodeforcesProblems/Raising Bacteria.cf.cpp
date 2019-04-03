#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    for(i=31;i>=0;i--)
        if(n&(1<<i)) c++;
    cout<<c<<endl;
}

