//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ch=0;
    string s;

    cin>>n>>s;
    s[n]='*';

    for(int i=1; i<n; )
    {
        if(s[i-1]=='o'&&s[i+1]=='o'&&s[i]=='g')
        {
            ch=1;
            i+=2;
        }
        else
        {
            if(ch) cout<<"***";
            else cout<<s[i-1];

            ch=0;
            i++;
        }
    }
    if(ch==0) cout<<s[n-1]<<endl;
    else cout<<"***"<<endl;
}
