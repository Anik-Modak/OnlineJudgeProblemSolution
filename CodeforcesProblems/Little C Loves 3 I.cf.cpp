//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,c;
    cin>>n;

    a = 1;
    b = 1;
    c = n-(a+b);
    if(c%3==0)
    {
        b++;
        c--;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
}
