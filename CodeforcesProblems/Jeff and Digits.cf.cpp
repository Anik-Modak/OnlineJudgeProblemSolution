#include<bits/stdc++.h>
using namespace std;

int division(int n)
{
    int i, r=0;
    for(i=0; i<n; i++)
    {
        r=r*10+5;
        r=r%9;
    }
    return r;
}

int main()
{
    int n, a;
    cin>>n;

    int five = 0, zero = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==5) five++;
        else zero++;
    }

    if(zero==0) cout<<-1<<endl;
    else if(five<9) cout<<0<<endl;
    else
    {
        while(division(five)) five--;
        while(five--) cout<<5;
        while(zero--) cout<<0;
        cout<<endl;
    }
    return 0;
}

