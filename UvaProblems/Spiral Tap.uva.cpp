//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define ll long long
using namespace std;

vector<ll>v;
void fn()
{
    for(ll i=1; i<=MX; i+=2)
        v.push_back(i*i);
}

int main()
{
    ll n, m;
    fn();
    while(cin>>n>>m && n|m)
    {
        int pos = upper_bound(v.begin(), v.end(),m-1)-v.begin();
       // cout<<m<<" "<<v[pos]<<endl;

        ll x, y, d;
        x = y =  (n+1)/2 + pos;

        if(v[pos]==m)
            printf("Line = %lld, column = %lld.\n",x,y);
        else
        {
            ll diff=v[pos]-m, z = sqrt(v[pos]);

            z--;
            if((diff-1)/z==0)
            {
                if(diff%z)
                    d =(diff%z);
                else
                    d = z;
                x -= d;
            }
            else if((diff-1)/z==1)
            {
                if(diff%z)
                    d =(diff%z);
                else
                    d = z;
                x -= z;
                y -= d;
            }
            else if((diff-1)/z==2)
            {
                if(diff%z)
                    d = (x-z)+(diff%z);
                else
                    d = x;
                x = d;
                y -= z;
            }
            else
            {
                y = (y-z)+(diff%z);
            }
            printf("Line = %lld, column = %lld.\n",x,y);
        }
    }
}
