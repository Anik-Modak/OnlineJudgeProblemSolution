//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s1,s2;
    cin>>n;

    if(n<3) cout<<"No\n";
    else
    {
      cout<<"Yes\n";
      int s=(n*(n+1))/2;

      if(s%2==0)
      {
          cout<<1<<" "<<2<<endl;
          cout<<n-1<<" ";

          for(int i=1; i<=n; i++)
          {
              if(i==2) continue;
              else cout<<i<<" ";
          }
      }
      else
      {
          int id=3;
          while(__gcd(s-id,id)==1) id++;

          cout<<1<<" "<<id<<endl;
          cout<<n-1<<" ";

          for(int i=1; i<=n; i++)
          {
              if(i==id) continue;
              else cout<<i<<" ";
          }
      }
    }
}

