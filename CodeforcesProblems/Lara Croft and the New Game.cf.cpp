//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long n,m,k;
   cin>>n>>m>>k;

   long long row, col, x, y, z;
   if(k<n) cout<<k+1<<" "<<1<<endl;
   else{
        x=k-n;
        row=n-x/(m-1);
        z=x/(m-1);
        if(z%2==0) col=2+x%(m-1);
        else col=m-x%(m-1);
        cout<<row<<" "<<col<<endl;
   }
}

