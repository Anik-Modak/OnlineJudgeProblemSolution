//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, m;
    cin>>n>>d>>m;

    map<pair<int, int>,int>mp;
    for(int i = 0; i <= d; i++)
    {
       for(int j = 0; j <= (n-d); j++)
       {
           int p1=i+j, p2=d+j-i;

           if(i>0 && mp[make_pair(p1,p2+2)])
           {
                mp[make_pair(p1,p2+1)]=1;
               // cout<<p1<<" "<<p2+1<<endl;
           }
           mp[make_pair(p1,p2)]=1;
          // cout<<p1<<" "<<p2<<endl;
       }
    }

    int x,y;
    while(m--)
    {
        cin>>x>>y;
        if(mp[make_pair(x,y)]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
