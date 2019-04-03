//Anik_Modak
#include<bits/stdc++.h>
#define MX 107
#define mem(x,y) memset(x,y,sizeof(x));
#define set(x) for(int i = 0; i < 26; i++) x[i+65]=i+65;
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

map<char,char>par;

char find(char n)
{
    if(par[n]==n) return n;
    return par[n]=find(par[n]);
}

int union_fn(char x, char y)
{
    char u=find(x);
    char v=find(y);
    if(u==v) return 0;
    else par[u]=v;
    return 1;
}

int main()
{
    int t;
    scanf("%d\n",&t);

    while(t--)
    {
        set(par);
        string s;

        int ans=0;
        while(1)
        {
            if(!getline(cin,s) || s.empty()) break;
            if(s.size()==1) ans=s[0]-64;
            else ans-=union_fn(s[0],s[1]);
        }
        cout<<ans<<endl;
        if(t) cout<<endl;
    }
}
