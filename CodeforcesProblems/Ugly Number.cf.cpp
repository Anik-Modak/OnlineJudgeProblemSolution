//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, mn=10;
    cin>>n;

    string x,s;
    cin>>x;
    s=x;

    sort(s.begin(),s.end());

    if(s[0]=='0')
    {
        for(int i=1; i<s.size(); i++)
        {
            if(s[0]<s[i])
            {
                swap(s[i],s[0]);
                break;
            }
        }
    }

    if(s>=x) cout<<"Yes\n";
    else cout<<"No\n";
}

