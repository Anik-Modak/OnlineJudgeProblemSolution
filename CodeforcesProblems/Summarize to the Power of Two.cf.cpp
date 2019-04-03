//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;

   long long a[n];
   map<long long,int>mp;

   for(int i=0; i<n; i++)
   {
       cin>>a[i];
       mp[a[i]]++;
   }

   if(n==1){
        cout<<1<<endl;
        return 0;
   }
   int ans=n,c=0;

   for(int i=0; i<n; i++)
   {
        long long m=log2(a[i])+1;
        long long id=pow(2,m),x;

        x=id-a[i];
        while(x<=1000000000)
        {
            if(x==a[i]&&mp[x]>1){
                c++;
                break;
            }
            else if(x!=a[i]&&mp[x]){
                c++;
                break;
            }
            m++;
            id=pow(2,m);
            x=id-a[i];
        }
   }
   cout<<ans-c<<endl;
}



