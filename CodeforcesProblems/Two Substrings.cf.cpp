//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int ab = s.find("AB");
    int ba = s.find("BA");

    if(ab == -1 || ba == -1)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    int ch = 0;
    if(s.find("BA",ab+2)!=-1) ch=1;
    if(s.find("AB",ba+2)!=-1) ch=1;

    if(ch) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
