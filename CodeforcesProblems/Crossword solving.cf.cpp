//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ls, lt, mx =0;
    cin>>ls>>lt;

    string s, t, ans;
    cin>>s>>t;

    for(int i=0; i<=lt-ls; i++)
    {
        int cnt = 0;
        string tmp = t.substr(i, ls);

        for(int j = 0; j<ls; j++)
            if(s[j]==tmp[j])
                cnt++;

        if(mx<=cnt)
        {
            mx = cnt;
            ans = tmp;
        }
    }

    cout<<ls-mx<<endl;
    for(int i=0; i<ls; i++)
    {
        if(s[i] != ans[i])
            cout<<i+1<<" ";
    }
    cout<<endl;
    return 0;
}
