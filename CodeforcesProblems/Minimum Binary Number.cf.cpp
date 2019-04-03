//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    if(s.size()==1) cout<<s<<endl;
    else{
        int c=0;
        for(int i=0; i<s.size(); i++) if(s[i]=='0') c++;

        cout<<1;
        for(int i=0; i<c; i++) cout<<0;
        cout<<endl;
    }

}
