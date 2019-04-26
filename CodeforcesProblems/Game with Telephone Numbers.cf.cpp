//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    queue<int>q, r;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] != '8')
            q.push(i);
        else
            r.push(i);

    }

    int len = s.size(), ck = 1, i = 1;
    while(len-i>=11)
    {
        if(i%2==0)
        {
            if(r.size()<2)
                ck = 0;
            else
                r.pop();
        }
        else
        {
            if(!q.empty())
                q.pop();
        }
        i++;
    }

    if(ck)
    {
        if(q.empty()||q.front()>r.front())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}

