#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    string s;
    cin>>s;

    int a[10], ck =0 ;
    for(int i=1; i<=9; i++)
        cin>>a[i];

    for(int i=0; i<n; i++)
    {
        m = s[i] - '0';

        if(a[m]==m) continue;
        if(a[m] > m)
        {
            s[i] = (a[m] + '0');
            ck = 1;
        }
        else if(ck)
            break;
    }
    cout<<s<<endl;
}


