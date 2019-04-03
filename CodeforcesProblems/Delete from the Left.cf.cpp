//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;

    int a=s.size();
    int b=t.size();

    int ans1=a+b,i=1,ans2=0;

    while(i<=min(a,b)&&s[a-i]==t[b-i])
    {
        ans2++;
    	i++;
    }
    cout<<ans1-2*ans2<<endl;
}

