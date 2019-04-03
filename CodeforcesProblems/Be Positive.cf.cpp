//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a, pos = 0, neg = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a>0) pos++;
        if(a<0) neg++;
    }

    int m = (n+1)/2;
    if(pos >= m) cout<<2<<endl;
    else if(neg >= m) cout<<-2<<endl;
    else cout<<0<<endl;

    return 0;
}

