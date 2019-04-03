//Anik_<<Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    string s[n];
    int a[m]={0};

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        for(int j=0; j<m; j++)
            a[j]+=s[i][j]-'0';
    }
    for(int i=0; i<n; i++)
    {
        int ch=1;
        for(int j=0; j<m; j++) if(a[j]-(s[i][j]-'0')==0) ch=0;
        if(ch){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
}
