//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int d = k/n, r = k%n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(r && i==j) cout<<d+r<<" ";
            else cout<<d<<" ";
        }
        cout<<endl;
    }
}

