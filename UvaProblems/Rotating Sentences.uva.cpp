#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,m=0,n=0;

    string a[1005];
    while(getline(cin, a[n]))
    {
        if(m<a[n].size()) m=a[n].size();
        n++;
    }
    for(i=0; i<m; i++)
    {
        for(j=n-1; j>=0; j--){
            if(a[j].size()>i) cout<<a[j][i];
            else cout<<' ';
        }
        cout<<endl;
    }
}
