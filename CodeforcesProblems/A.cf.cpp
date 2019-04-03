//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ck=1;
    cin>>n;

    string s;
    cin>>s;


    for(int i=1; i<n; i++)
    {
        if(s[i-1]>s[i] && ck==1) ck=0;
        else cout<<s[i-1];
    }
    if(ck==0) cout<<s[n-1]<<endl;
    else cout<<endl;
}
