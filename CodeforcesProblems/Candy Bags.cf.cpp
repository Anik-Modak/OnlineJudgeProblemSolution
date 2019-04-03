//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n][n], cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<n; j++)
                a[j][i] = ++cnt;
        }
        else
        {
            for(int j=n-1; j>=0; j--)
                a[j][i] = ++cnt;
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
