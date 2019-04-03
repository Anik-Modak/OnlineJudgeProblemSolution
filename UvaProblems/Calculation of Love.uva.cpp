//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int fn(string c)
{
    int n, s=0;
    for(int i=0; i<c.size(); i++)
    {
        if(c[i]>='a'&&c[i]<='z') n=c[i]-96;
        else if(c[i]>='A'&&c[i]<='Z') n=c[i]-64;
        else n=0;
        s=s+n;
    }
    return s;
}

int digit(int s)
{
    int n=0, a;
    while(s>0)
    {
        a=s%10;
        n=n+a;
        s=s/10;
    }
    if(n>9) return n%9;
    else return n;
}

int main()
{
    int n, m, s1, s2;
    double p;

    string str1, str2;
    while(getline(cin,str1))
    {
        getline(cin,str2);

        s1=fn(str1);
        s2=fn(str2);

        n=digit(s1);
        m=digit(s2);

        if(n<m) p = ((double)n/m)*100.0;
        else p = ((double)m/n)*100.0;

        printf("%.2lf %%\n",p);
    }
    return 0;
}

