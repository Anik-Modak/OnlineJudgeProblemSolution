#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,x,ans;
    cin>>n>>m;
    if(n>m)
        ans=n-m;
    else
    {
        int i=0;
        while(m>n)
        {
            if(m%2) m++;
            else m=m/2;
            i++;
        }
        ans=i+(n-m);
    }
    cout<<ans<<endl;
}

