#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,k,m;
    cin>>a>>b;
    long long ar[a],br[b];
    cin>>k>>m;
    int i=0;
    while(i<a)
    {
        cin>>ar[i];
        i++;
    }
    i=0;
    while(i<b)
    {
        cin>>br[i];
        i++;
    }

    if(ar[k-1]<br[b-m])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
