//Anik_Modak
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, r;
    getline(cin,s);
    getline(cin,r);

    map<char, int> mp1, mp2;
    for(int i=0; i<s.size(); i++)
        mp1[s[i]]++;

    for(int i=0; i<r.size(); i++)
        mp2[r[i]]++;


    int ck = 1;
    for(int i=0; i<r.size(); i++)
        if(r[i] != ' ' && mp1[r[i]] < mp2[r[i]])
            ck = 0;

    if(ck)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

