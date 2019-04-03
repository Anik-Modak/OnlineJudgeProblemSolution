#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a,c,s=0,mx=0;
    cin>>n;
    for (i=0;i<n;i++)
    {
        scanf("%d",&a);
        if (a>mx)mx=a;
        s+=a;
    }
    c=n*mx-s;
    cout<<c<<endl;
}

