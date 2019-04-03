//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int len, n;
string str, ans;
map<string,bool> mp;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void subset(int i)
{
    if(i==len)
    {
        if(ans.size()==n)
        {
            mp[ans] = 1;
        }
        return;
    }

    subset(i+1);
    ans.push_back(str[i]);
    subset(i+1);
    ans.pop_back();
}

int main()
{
    faster();
    while(cin>>str>>n)
    {
        sort(str.begin(),str.end());
        len = str.size();
        subset(0);

        for(auto it=mp.begin(); it!=mp.end(); it++)
           cout<<it->first<<endl;

        ans.clear();
        mp.clear();
    }
    return 0;
}
