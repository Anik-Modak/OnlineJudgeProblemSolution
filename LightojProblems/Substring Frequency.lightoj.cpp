//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

int lps[MX];
void lps_calclulation(char s_str[])
{
    int i = 1,j = 0;
    while(s_str[i])
    {
        if(s_str[i]==s_str[j])
        {
            lps[i] = ++j;
            i++;
        }
        else
        {
            if(j)
                j = lps[j-1];
            else
                lps[i++] = 0;
        }
    }
}

int str_match(char txt[],char s_str[],int str_len)
{
    int i=0, j=0, cnt=0;
    while(txt[i])
    {
        if(txt[i]==s_str[j])
        {
            i++;
            j++;
            if(j==str_len)
            {
                cnt++;
                j=lps[j-1];
            }
        }
        else
        {
            if(j)
                j = lps[j-1];
            else
                i++;
        }
    }
    return cnt;
}

int main()
{
    int t;
    scanf("%d",&t);

    for(int ca=1; ca<=t; ca++)
    {
        char str[MX], s[MX];
        scanf("%s %s",str,s);

        mem(lps,0);
        lps_calclulation(s);

        int ans = str_match(str,s,strlen(s));
        printf("Case %d: %d\n",ca,ans);
    }
}

