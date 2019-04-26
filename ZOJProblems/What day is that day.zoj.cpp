//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

char s[] = "154145560460660201600156306601465660245066043034456356556160566045265560354556134655632623345245445056455634154456243445023544521512234134334645344523043345132334612433410401123023223534233412632234021223501322306360012612112423122301521123610112460211265256601501001312011260410012506001356100154145";

string v;
long long bigmod ( long long a, long long p, long long m )
{
    long long res = 1;
    long long x = a;

    while ( p )
    {
        if ( p & 1 )
        {
            res = ( res * x ) % m;
        }
        x = ( x * x ) % m;
        p = p >> 1;
    }
    return res;
}

void fn()
{
    for(int ca = 1; ca<=300; ca++)
    {
        int ans = 0;
        for(int i=1; i<=ca; i++)
        {
            ans = (ans + bigmod(i,i,7)) % 7;
        }
        v.push_back(ans+'0');
    }
}

int fn2()
{
    for(int i=1; i<=1000; i++)
    {
        if(v.substr(0, i) == v.substr(i,i)) {
            return i;
        }
    }
}

int main()
{
    int t, n;
    scanf("%d",&t);

    char day[8][15] ={"Saturday","Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int mod = 294;

    for(int ca = 1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int m = (n-1) % mod;
        m = s[m] - '0';
        puts(day[m]);
    }
    return 0;
}
