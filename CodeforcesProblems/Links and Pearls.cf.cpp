//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int p=0,o=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='-') p++;
        if(s[i]=='o') o++;
    }
    if(p==0|o<=1) cout<<"YES"<<endl;
    else if(p%o==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
