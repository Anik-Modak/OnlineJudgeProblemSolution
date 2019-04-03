//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int ck = 1, len = s.size()-1;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='0' && ck) ck = 0;
        else cout<<s[i];
    }

    if(ck==0) cout<<s[len];
    cout<<endl;
    return 0;
}


