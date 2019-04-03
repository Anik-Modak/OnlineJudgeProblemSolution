//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int c[22], ans=0;
    bool ch=1;

    for(int i=0; i<n; i++) cin>>c[i];

    for(int i=0; i<n/2; i++)
    {
        if(c[i]==c[n-1-i])
        {
            if(c[i]==2) ans+=2*min(a,b);
        }
        else if(c[i]==2 && c[n - 1 - i] != 2)
        {
            if(c[n-1-i]==0) ans+=a;
            else ans+=b;
        }
        else if(c[i] != 2 && c[n-1-i]==2)
        {
            if(c[i]==0) ans+=a;
            else ans+=b;
        }
        else if(c[i] != c[n - 1 - i]) ch=0;
    }
    if(n%2==1 && c[n/2]==2) ans+=min(a,b);

    if(ch) cout<<ans<<endl;
    else cout<<-1<<endl;
}
