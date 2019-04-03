//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n+1],i,id,s=0,mn=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        s=s+a[i];

        if(i==k)
        {
            mn=s;
            id=1;
        }
        else if(i>k)
            s=s-a[i-k];

        if(i>k&&mn>s)
        {
            mn=s;
            id=(i-k)+1;
        }
    }

    cout<<id<<endl;
    return 0;
}
