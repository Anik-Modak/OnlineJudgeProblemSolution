//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int a[n],s=0;
    vector<int>v;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        v.push_back(a[i]);
    }
    sort(a,a+n);
    for(int i=k; i>0; i--)
    {
        s+=a[n-i];
        mp[a[n-i]]++;
    }
    cout<<s<<endl;

    int m=0,cnt=0,ind=0;
    for(int i = 0; i < n; i++)
    {
        cnt++;
        m++;
        if(mp[a[i]])
        {
            ind++;
            mp[a[i]]--;
            if(ind == k) printf("%d\n", n - m + cnt);
            else printf("%d ", cnt);
            cnt = 0;
        }
    }
}

