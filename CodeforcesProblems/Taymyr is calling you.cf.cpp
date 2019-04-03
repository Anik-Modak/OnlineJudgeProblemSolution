#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,z;
    cin>>n>>m>>z;
    int i,j,a,c=0;
    for(i=1;n*i<=z;i++)
    {
        a=n*i;
        for(j=1;j*m<=z;j++) if(a==m*j) c++;
    }
    cout<<c<<endl;
}
