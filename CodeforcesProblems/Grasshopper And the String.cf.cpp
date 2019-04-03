#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[105];
    cin>>s;
    int i,c=1,mx=0,n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y') c=1;
        else c++;
        if(mx<c) mx=c;
    }
     cout<<mx<<endl;
}
