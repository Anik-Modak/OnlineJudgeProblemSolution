//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;

        int u = 0, l = 0, d = 0, len = s.size()-1;

        for(int j=0; j<len; j++)
        {
            if(s[j]>='a'&&s[j]<='z') l++;
            else if(s[j]>='A'&&s[j]<='Z') u++;
            else d++;

            if(j==len-1)
            {
                if(s[len]>='a'&&s[len]<='z')
                {
                    l++;
                    if(d==0&&u==0)
                    {
                        s[len]='Z';
                        s[len-1]='9';
                    }
                    else if(d==0)
                    {
                        if(l>1) s[len]='9';
                        else s[len-1]='9';
                    }
                    else if(u==0)
                    {
                        if(l>1) s[len]='Z';
                        else s[len-1]='Z';
                    }
                }
                else if(s[len]>='A'&&s[len]<='Z')
                {
                    u++;
                    if(d==0&&l==0)
                    {
                        s[len]='z';
                        s[len-1]='9';
                    }
                    else if(d==0)
                    {
                       if(u>1) s[len]='9';
                       else s[len-1]='9';
                    }
                    else if(l==0)
                    {
                        if(u>1) s[len]='z';
                        else s[len-1]='z';
                    }
                }
                else
                {
                    //cout<<u<<" "<<l<<endl;
                    d++;
                    if(u==0&&l==0)
                    {
                        s[len]='Z';
                        s[len-1]='z';
                    }
                    else if(u==0)
                    {
                        if(d>1) s[len]='Z';
                        else s[len-1]='Z';
                    }
                    else if(l==0)
                    {
                        if(d>1) s[len]='z';
                        else s[len-1]='z';
                    }
                }
            }
        }
        cout<<s<<endl;
    }
}
