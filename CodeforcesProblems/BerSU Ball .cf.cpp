//AnikModak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,g;
    cin>>n;

    int i,a[n];
    for(i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);

    cin>>g;
    int j,b[g];

    for(i=0; i<g; i++) cin>>b[i];
    sort(b,b+g);

    int ans=0,c;
    for(i=0; i<n; i++)
    {
        c=0;
        for(j=0; j<g; j++)
            if(abs(a[i]-b[j])<=1){
                    c++;
                    b[j]=1000;
                    break;
            }

        if(c) ans++;
    }

    cout<<ans<<endl;
}




