//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int a[20];
int fn(int m, int n)
{
    for(int i=m; i<n; i++)
    {
        if(a[i]>a[i+1])
            return 0;
    }
    return 1;
}

int check(int lo, int hi)
{
    if(lo == hi)
        return 1;

    if(fn(lo, hi))
        return hi - lo + 1;

    int mid = (lo + hi) / 2;
    int p1 = check(lo, mid);
    int p2 = check(mid + 1, hi);

    return max(p1,p2);
}

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>a[i];

    int ans = check(0,n-1);
    cout<<ans<<endl;
}
