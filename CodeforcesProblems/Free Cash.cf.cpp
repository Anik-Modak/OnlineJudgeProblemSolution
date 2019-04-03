//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,mx=0;
    cin>>n;

    int h1,m1,c,h[n+1],m[n+1];
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&h[i],&m[i]);
        if(i==1)
        {
            h1=h[i];
            m1=m[i];
            c=1;
        }
        else
        {
            if(h1==h[i]&&m1==m[i])
                c++;
            else
            {
                h1=h[i];
                m1=m[i];
                c=1;
            }
        }
        if(mx<c)
            mx=c;
    }
    cout<<mx<<endl;
}


