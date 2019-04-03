#include<bits/stdc++.h>
using namespace std;

string fn(string s)
{
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ') continue;
        if(s[i]>96) s[i]-=32;
    }
    sort(s.begin(),s.end());
    return s;
}
int main()
{
    int t,c;
    cin>>t;

    string a,b;
    //getchar();

    for(c=1;c<=t;c++)
    {
        getchar();
        getline(cin, a);
        getchar();
        getline(cin, b);
        a.erase(remove(a.begin(), a.end(), ' '), a.end());
        b.erase(remove(b.begin(), b.end(), ' '), b.end());
        //a=fn(a);
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        sort(a.begin(),a.end());
        cout<<a<<endl;
        b=fn(b);
        if(a==b) printf("Case %d: Yes\n",c);
        else printf("Case %d: No\n",c);
    }
}

