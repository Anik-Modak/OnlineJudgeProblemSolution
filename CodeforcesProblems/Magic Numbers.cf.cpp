#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p=1,i;
    string s;
    cin>>s;

    if(s[0]!='1') p=0;

    for(i=1;i<s.size();i++){
        if(s[i]=='1') continue;
        else if(s[i]=='4'){
            if(s[i-1]=='1'||s[i-1]=='4'&&s[i-2]=='1') continue;
            else p=0;
        }
        else p=0;
    }
    if(p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
