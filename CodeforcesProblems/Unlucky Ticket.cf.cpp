//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    // freopen("input.txt","r",stdin);
    cin>>n;

    vector<int>v1,v2;
    string str;
    cin>>str;

    for(int i=0; i<2*n; i++)
    {
        m=str[i]-'0';
        if(i<n)
            v1.push_back(m);
        else
            v2.push_back(m);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int s1=0,s2=0;
    for(int i=0; i<n;  i++)
    {
        if(v1[i]>v2[i])
            s1++;
        else if(v1[i]<v2[i])
            s2++;
    }

    if(s1==n||s2==n)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

