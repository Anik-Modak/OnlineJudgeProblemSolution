//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    int a[n], b[n], cnt2 = 0, cnt1 = 0;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        if(m==0) cnt1++;
        else cnt2++;

        a[i] = cnt1;
        b[i] = cnt2;
    }

    int ans = max(b[n-1],a[n-1]);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int x = abs(a[i]-a[j]);
            int y = abs(b[i]-b[j]);
            //cout<<x<<" "<<y<<endl;
            if(x>y) ans = max(ans,b[i]+b[n-1]-b[j]+x);
        }
    }

    if(n == b[n-1]) ans = n-1;
    cout<<ans<<endl;
    return 0;
}
