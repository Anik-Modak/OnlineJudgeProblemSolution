//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

int lps[MX];
void lps_calclulation(string str)
{
    int i = 1,j = 0;
    while(str[i])
    {
        if(str[i]==str[j])
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

int match(string txt, string str)
{
    int i=0, j=0;
    while(txt[i])
    {
        if(txt[i]==str[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j)
                j = lps[j-1];
            else
                i++;
        }
    }
    return j;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t,ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        string s, rs;
        cin>>s;

        rs=s;
        reverse(rs.begin(),rs.end());
        mem(lps,0);
        lps_calclulation(rs);

        int ans = match(s,rs);
        ans += (s.size()-ans)*2;
        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}




