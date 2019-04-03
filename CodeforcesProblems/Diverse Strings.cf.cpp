//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        sort(s.begin(),s.end());
        char ch = s[0];

        int ck = 1;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] != ch+i)
                ck = 0;
        }

        if(ck)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
