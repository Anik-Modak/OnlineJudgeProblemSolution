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
        for(i=1; ; i++)
        {
            if(m%2!=0)
            {
                m++;
                continue;
            }
            m=m/2;
            if(m>n)
                continue;
            else
                break;
        }
        ans=i+(n-m);
    }
    cout<<ans<<endl;
}
