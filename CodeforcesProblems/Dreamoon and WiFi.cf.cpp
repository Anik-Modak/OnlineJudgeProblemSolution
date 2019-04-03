//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

long double fact(int n)
{
    if(n<=1) return 1.0;
    else return n*fact(n-1);
}

long double nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    string s1, s2;
    cin>>s1>>s2;

    int p1, n1, p2, n2, q;
    p1 = p2 = n1 = n2 = q = 0;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='+') p1++;
        if(s1[i]=='-') n1++;
        if(s2[i]=='+') p2++;
        if(s2[i]=='-') n2++;
        if(s2[i]=='?') q++;
    }

    if(p1==p2 && n1==n2) cout<<1<<endl;
    else if(q+p2<p1 || q+n2<n1) cout<<0<<endl;
    else
    {
        p1 -= p2;
        long double t1 = nCr(q, p1);
        double ans = t1/pow(2.0,q);
        printf("%.9f",ans);
    }
    return 0;
}
