//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin>>n;

    int a, mn=1000, mx = 0, mni, mxi;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(mx<a)
        {
            mx=a;
            mxi=i;
        }
        if(mn>=a)
        {
            mn=a;
            mni=i;
        }
    }

    cnt = mxi + (n-mni-1);
    if(mxi>mni) cnt--;

    cout<<cnt<<endl;
}
