#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        string s;
        int n,m,len,rx,ry,x=0,y=0;
        cin>>n>>m>>rx>>ry;
        cin>>len>> s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='R') x++;
            if(s[i]=='L') x--;
            if(s[i]=='U') y++;
            if(s[i]=='D') y--;
        }
        if(rx==x&&ry==y) printf("Case %d: REACHED\n",ca);
        else if(x<0||x>n||y<0||y>m) printf("Case %d: DANGER\n",ca);
        else printf("Case %d: SOMEWHERE\n",ca);
    }
}

