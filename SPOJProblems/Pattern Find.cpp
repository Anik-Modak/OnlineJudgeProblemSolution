//Anik_Modak
#define MX 1000005
#include<bits/stdc++.h>
using namespace std;

const int p = 31;
long long p_pow[MX], h[MX];
const long long m = 1e9 + 9;

void init()
{
    p_pow[0] = 1;
    for (int i = 1; i < MX; i++)
        p_pow[i] = (p_pow[i-1] * p) % m;
}

vector<int>v;
void rabin_karp(char s[], char t[])
{
    int S = strlen(s), T = strlen(t);

    memset(h,0,sizeof(h));
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m;

    long long h_s = 0;
    for (int i = 0; i < S; i++)
        h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m;

    for (int i = 0; i + S - 1 < T; i++)
    {
        long long cur_h = (h[i+S] + m - h[i]) % m;
        if (cur_h == h_s * p_pow[i] % m)
            v.push_back(i+1);
    }
    return;
}

int main()
{
    int q;
    scanf("%d",&q);
    init();

    while(q--)
    {
        char text[MX], s[MX];
        scanf("%s %s",text,s);
        rabin_karp(s,text);

        if(v.size()==0) printf("Not Found\n");
        else
        {
            int len = v.size();
            printf("%d\n",len);

            for(int i=0; i<len; i++)
            {
                if(i==len-1) printf("%d\n",v[i]);
                else printf("%d ",v[i]);
            }
        }

        if(q) printf("\n");
        v.clear();
    }
    return 0;
}

