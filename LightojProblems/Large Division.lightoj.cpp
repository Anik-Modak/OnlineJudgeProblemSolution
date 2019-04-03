#include<bits/stdc++.h>
using namespace std;

int riminder(char *a, int n)
{
    int m,i,r=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='-') continue;
        m=a[i]-'0';
       // cout<<m<<endl;
        r=(r*10+m)%n;
    }
    return r;
}
int main()
{
    char s[1005];
    int t,ca,n,r;
    cin>>t;
    getchar();
    for(ca=1;ca<=t;ca++)
    {
        scanf("%s %d",&s,&n);
        r=riminder(s,n);
        if(r==0) printf("Case %d: divisible\n",ca);
        else printf("Case %d: not divisible\n",ca);
    }
}

