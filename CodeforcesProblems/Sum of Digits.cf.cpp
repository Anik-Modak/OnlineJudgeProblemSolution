//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int digit(long long n)
{
    int r, s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s += r;
    }
    return s;
}

int main()
{
    string s;
    cin>>s;

    if(s.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }

    long long n = 0, ans = 1;
    for(int i=0; i<s.size(); i++)
        n += (s[i]-'0');

    while(n>9)
    {
        n = digit(n);
        ans++;
    }

    cout<<ans<<endl;
    return 0;
}

