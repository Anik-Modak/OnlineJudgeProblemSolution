//Anik_Modak
#define MX 100005
#include<bits/stdc++.h>
using namespace std;

const int p = 53;
long long p_pow[MX], h[MX];
const long long m = 1e9 + 9;

void init()
{
    p_pow[0] = 1;
    for (int i = 1; i < MX; i++)
        p_pow[i] = (p_pow[i-1] * p) % m;
}

bool rabin_karp(char s[], char t[])
{
    int S = strlen(s), T = strlen(t);

    memset(h,0,sizeof(h));
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (t[i] - 'A' + 1) * p_pow[i]) % m;

    long long h_s = 0;
    for (int i = 0; i < S; i++)
        h_s = (h_s + (s[i] - 'A' + 1) * p_pow[i]) % m;

    for (int i = 0; i + S - 1 < T; i++)
    {
        long long cur_h = (h[i+S] + m - h[i]) % m;
        if (cur_h == h_s * p_pow[i] % m)
            return 1;
    }
    return 0;
}

int main()
{
    char text[MX];
    scanf("%s",text);

    int q;
    scanf("%d",&q);
    init();

    while(q--)
    {
        char s[2005];
        scanf("%s",s);

        if(rabin_karp(s,text)) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
