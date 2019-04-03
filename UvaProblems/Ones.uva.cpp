//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

string a="111";

int division(int n)
{
    int i,r=0;
    for(i=0; i<a.size(); i++)
    {
        r=r*10+(a[i]-'0');
        r=r%n;
        if(r==0) return i+1;
    }
}

int main()
{
    int n;
    a.resize(a.size()+1000000,'1');
    while(cin>>n)
    {
        long long ans;
        ans=division(n);
        cout<<ans<<endl;
    }
}
