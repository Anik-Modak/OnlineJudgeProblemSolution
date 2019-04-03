//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0){
            for(int j=0; j<n; j++)
                if(a[j]==a[i]) a[j]=a[i]-1;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(i==n-1) cout<<a[i]<<endl;
        else cout<<a[i]<<" ";
    }
    return 0;
}
