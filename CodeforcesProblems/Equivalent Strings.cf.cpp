#include<bits/stdc++.h>
using namespace std;

string halfstr(string a,int m,int n)
{
    int i,k=0;
    char ch[a.size()/2+5];
    for(i=m; i<n; i++) ch[k++]=a[i];
    ch[k]='\0';
    return ch;
}

string fn(string s)
{
    int n=s.size();
    if(n%2) return s;
    string a=fn(halfstr(s,0,n/2));
	string b=fn(halfstr(s,n/2,n));
	if(a>b) swap(a,b);
	return a+b;
}

int main()
{
    string a,b;
    cin>>a>>b;
    a=fn(a);
    b=fn(b);
    if(a==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

