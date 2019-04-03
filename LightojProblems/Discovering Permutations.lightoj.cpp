#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if(n<=1) return 1;
    else return n*fact(n-1);
}
int main()
{
    int ca,t,m;
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        int i,m,k;
        cin>>m>>k;
        char c[27];
        string s;

        for(i=0;i<m;i++) c[i]='A'+i;
        c[i]='\0';
        s=c;
        if(m<5&&fact(m)<k) k=fact(m);

        printf("Case %d:\n",ca);
        for(i=1;i<=k;i++){
            cout<<s<<endl;
            next_permutation(s.begin(), s.end());
        }
    }
    return 0;
}



