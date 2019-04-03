#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<endl;
        for(int i=1; i<=n/2;i++)
        {
             if(i==n/2) cout<<2<<endl;
             else printf("2 ");
        }
    }
    else{
        cout<<n/2<<endl;
        for(int i=1; i<=n/2;i++)
        {
             if(i==n/2) cout<<3<<endl;
             else printf("2 ");
        }
    }
}
