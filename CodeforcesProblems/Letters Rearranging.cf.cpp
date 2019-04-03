//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a, b;
        cin>>a;

        map<char,int>mp;

        for(int i=0; i<a.size(); i++)
            mp[a[i]]++;

        b  = a;
        reverse(a.begin(),a.end());

        if(mp.size()==1)
            cout<<-1<<endl;
        else if(a==b)
        {
            sort(a.begin(),a.end());
            cout<<a<<endl;
        }
        else
            cout<<b<<endl;
    }
}

