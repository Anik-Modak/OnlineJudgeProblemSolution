//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n;

    vector<int> v;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        sum += a;
        v.push_back(sum);
    }

    int m, b;
    cin>>m;

    while(m--)
    {
        cin>>b;
        int ans = lower_bound(v.begin(), v.end(),b)-v.begin();
        cout<<ans+1<<endl;
    }
}
