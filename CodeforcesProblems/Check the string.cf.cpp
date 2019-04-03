#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,a[3]={0},indx,p=1,q=0;
    for(i=0; i<s.size(); i++)
    {
        int indx=s[i]-97;
        a[indx]++;
        if(s[i]>s[i+1]&&s[i+1]!='\0') p=0;
    }

    for(i=0; i<2; i++)
    {
        if(a[2]==a[i]) q=1;
    }
    if(a[0]==0||a[1]==0) q=0;

    if(p==1&&q==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
