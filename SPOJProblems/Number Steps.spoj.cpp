//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x, y, ans;
        cin>>x>>y;

        if(x==y)
        {
            if(x%2==0)
                ans = 2*x;
            else
                ans = 2*(x-1)+1;
            cout<<ans<<endl;
        }
        else if(x-y==2)
        {
            if(x%2==0)
                ans = x+y;
            else
                ans = 2*y+1;
            cout<<ans<<endl;
        }
        else
            cout<<"No Number"<<endl;
    }
}
