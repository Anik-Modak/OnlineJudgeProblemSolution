//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

string addition(string a, string b)
{
    string ans = "";
    int n = max(a.size(),b.size());

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    a.resize(n,'0');
    b.resize(n,'0');

    int digit, carry = 0, sum = 0;
    for(int i=0; i<n; i++)
    {
        int ca = a[i]-'0';
        int cb = b[i]-'0';

        sum = (carry+ca+cb);
        digit = sum%10;
        carry = sum/10;
        ans += (digit+'0');
    }

    while(carry)
    {
        digit = carry%10;
        carry = carry/10;
        ans += (digit+'0');
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string a, b;
    cin>>a>>b;

    string s1 = addition(a,b);
    s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());
    a.erase(remove(a.begin(), a.end(), '0'), a.end());
    b.erase(remove(b.begin(), b.end(), '0'), b.end());
    string s2 = addition(a,b);

    if(s1==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

