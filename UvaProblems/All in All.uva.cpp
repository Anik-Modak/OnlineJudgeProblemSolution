#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,i,j;
    string s,t;
    while(cin>>s>>t)
    {
        m=0;
        c=0;
        n=s.size();
        for(i=0;i<n;i++){
            for(j=m;j<t.size();j++){
                if(s[i]==t[j]){
                    c++;
                    m=j+1; break;
                }
            }
        }
        if(c==n) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}

