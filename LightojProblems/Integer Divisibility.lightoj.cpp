#include<bits/stdc++.h>
using namespace std;

char ch;
int division(int n)
{
    int i=1,r=0;
    while(1)
    {
        r=r*10+(ch-'0');
        r=r%n;
        if(r==0) break;
        i++;
    }
    return i;
}
int main()
{
    int t,n,ca;
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d %c",&n,&ch);
        int ans=division(n);
        printf("Case %d: %d\n",ca,ans);
    }
}
