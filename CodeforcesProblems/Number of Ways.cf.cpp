//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[n], sum =0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    if(sum%3==0)
    {
        long long s = 0, cnt[n+2] = {0} , ans =0;

        for(int i=0; i<n; i++)
        {
            s += a[i];
            if(sum/3 == s) cnt[i] = 1;
        }
        for(int i=1; i<n; i++)
        {
            cnt[i] += cnt[i-1];
        }

        s = 0;
        for(int i = n-1; i > 1; i--)
        {
             s += a[i];
             if(sum/3 == s)
                ans += cnt[i-2];
        }
        cout<<ans<<endl;
    }
    else cout<<0<<endl;
}
