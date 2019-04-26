#include<bits/stdc++.h>
using namespace std;

string a;
void abc(){
    int n=10,m=5;
    string b="1000";
    a="1101001000";
    while(n<=999999)
    {
        b=b+'0';
        a=a+b;
        n=n+m;
        m++;
    }
}
int main()
{
    int i,n,t;
    abc();
    cin>>t;
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(i==t) printf("%d\n",a[n-1]);
        else printf("%d ",a[n-1]);
    }
}
