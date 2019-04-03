#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int i,a,s=0,m=0,c=0;

    for(i=0; i<n; i++)
    {
        cin>>a;
        m=m+a;

        if(m>8)
        {
            s=s+8;
            m=m-8;
        }
        else
        {
            s=s+m;
            m=0;
        }
        c++;
        if(s>=k) break;
    }
    if(s<k)
        cout<<-1<<endl;
    else
        cout<<c<<endl;
}
