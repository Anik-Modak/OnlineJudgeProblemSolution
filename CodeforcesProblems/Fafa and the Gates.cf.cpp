#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,ans=0,s1=0,s2=0,p=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0; i<n; i++)
    {
        if(a[i]=='R') s1++;
        else s2++;
        int m;
        if(s1==s2) m=0;
        else if(s1>s2) m=1;
        else m=2;
        if(p==1&&m==2||p==2&&m==1) ans++;
        if(m) p=m;
    }
    cout<<ans<<endl;
}







