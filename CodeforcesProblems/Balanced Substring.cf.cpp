#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    string s;
    cin>>n>>s;

    vector<int> v(2*n+2, 0);
    int sm=0,ans=0;
    for(int i=1;i<=n;i++){
        if(s[i-1]=='0')sm--;
        else sm++;

        if(sm==0) ans = i;
        else{
            if(v[sm+n]==0) v[sm+n]=i;
            else ans = max(ans, i-v[sm+n]);
        }
    }

    cout<<ans<<'\n';

    return 0;
}
