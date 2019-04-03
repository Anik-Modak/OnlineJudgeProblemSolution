//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    vector<int> a;
    set<int> s;

    int x, l;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        a.push_back(x);
    }

    for(int i=n-1; i>=0; i--)
    {
        s.insert(a[i]);
        a[i] = s.size();
    }

    for(int i=0; i<m; i++)
    {
        scanf("%d",&l);
        int ans = a[l-1];
        printf("%d\n",ans);
    }
    return 0;
}
