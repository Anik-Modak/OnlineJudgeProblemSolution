//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;

    while(n+m)
    {
        if(n>m)
        {
            if(n)
                cout<<'B';
            if(m)
                cout<<'G';
        }
        else
        {
            if(m)
                cout<<'G';
            if(n)
                cout<<'B';
        }
        if(n)
            n--;
        if(m)
            m--;
    }

    cout<<endl;
    return 0;
}


