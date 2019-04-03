#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans;
    cin>>n>>m;
    ans=(n+m)/3;
    if(m<ans) cout<<m<<endl;
    else if(n<ans) cout<<n<<endl;
    else cout<<ans<<endl;
}
