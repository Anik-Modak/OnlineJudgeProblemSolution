//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s, word="";
    cin>>s;

    int ck = 0, cnt = 0, mx = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='(')
            ck = 1;
        else if(s[i]==')')
            ck = 0;

        if(isalpha(s[i]) && ck==0)
            cnt++;
        else
            cnt = 0;

        if(ck)
            word += s[i];
        mx = max(mx, cnt);
    }

    for(int i=0; i<word.size(); i++)
    {
        if(!isalpha(word[i]))
            word[i] = ' ';
    }

    cnt = 0;
    stringstream ss(word);
    while(ss>>word)
        ++cnt;

    cout<<mx<<" "<<cnt<<endl;
}
