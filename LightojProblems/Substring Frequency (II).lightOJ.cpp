//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
#define MX 1000005
using namespace std;

int lps[MX];
void ComputeLPS(char ptrn[])
{
    int id = 0, i = 1;
    while(i<strlen(ptrn))
    {
        if(ptrn[i]==ptrn[id])
        {
            lps[i] = id+1;
            id++;
            i++;
        }
        else
        {
            if(id) id = lps[id-1];
            else lps[i++] = 0;
        }
    }
}

int StrMatch(char txt[], char ptrn[], int len)
{
    int i = 0, j = 0, cnt = 0;
    while(txt[i])
    {
        if(txt[i]==ptrn[j])
        {
            i++;
            j++;
            if(j==len)
            {
                cnt++;
                j=lps[j-1];
            }
        }
        else
        {
            if(j) j = lps[j-1];
            else i++;
        }
    }
    return cnt;
}

int main()
{
    int t, n;
    scanf("%d",&t);

    for(int ca=1; ca<=t; ca++)
    {
        char str[MX], s[MX];
        scanf("%d %s",&n,str);

        printf("Case %d:\n",ca);
        while(n--)
        {
            scanf("%s",s);
            mem(lps,0);
            ComputeLPS(s);

            int ans = StrMatch(str,s,strlen(s));
            printf("%d\n",ans);
        }
    }
}
