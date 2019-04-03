//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ans1=0,ans2=0;
    cin>>n;

    long long a[n+2],b[n+2],ai=0,bi=0;
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    a[n]=b[n]=0;
    sort(a,a+n);
    sort(b,b+n);
    reverse(a,a+n);
    reverse(b,b+n);

    for(int i=0; i<2*n; i++)
    {
        if(i%2==0)
        {
            //cout<<a[ai]<<" "<<b[bi]<<endl;
            if(a[ai]>b[bi])
            {
                ans1+=a[ai];
                ai++;
            }
            else
            {
               b[bi]=0;
               bi++;
            }
        }
        else
        {
            //cout<<a[ai]<<" "<<b[bi]<<endl;
            if(a[ai]<b[bi])
            {
                ans2+=b[bi];
                bi++;
            }
            else
            {
               a[ai]=0;
               ai++;
            }
        }
    }
    cout<<ans1-ans2<<endl;
}
