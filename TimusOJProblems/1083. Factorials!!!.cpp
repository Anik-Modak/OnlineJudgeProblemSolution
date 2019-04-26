#include<bits/stdc++.h>
using namespace std;

long long fact(int n,int m)
{

    if(n<=1) return 1;
    else return n*fact(n-m,m);
}
int main()
{
    int n,i,c=0;
    char s[21];
    cin>>n>>s;
    for(i=0;i<strlen(s);i++)
        if(s[i]=='!') c++;

   long long ans=fact(n,c);
    cout<<ans<<endl;
}

