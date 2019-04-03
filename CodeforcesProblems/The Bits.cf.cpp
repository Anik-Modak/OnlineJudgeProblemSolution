//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

long long one_f(string s)
{
    long long c=0;
    for(long long i=0; i<s.size(); i++)
        if(s[i]=='1') c++;
    return c;
}
long long zero_f(string s)
{
    long long c=0;
    for(long long i=0; i<s.size(); i++)
        if(s[i]=='0') c++;
    return c;
}

int main()
{
    long long n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    long long one=0, zero=0;
    for(long long i=0; i<n; i++)
    {
        if(b[i]=='0'){
            if(a[i]=='1') one ++;
            else zero ++;
        }
    }
    long long s1,s2,ans;
    s1=one*zero_f(a);
    s2=zero*(one_f(a)-one);

    ans=s1+s2;
    cout<<ans<<endl;
}

