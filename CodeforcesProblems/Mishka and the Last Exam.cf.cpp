//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long b[n/2+2], a[n+2];
    for(int i=1; i<=n/2; i++)
        cin>>b[i];

    long long id = 0;
    for(int i=1; i<=n/2; i++)
    {
        if(i==1)
        {
            a[i] = id;
            a[n-i+1] = b[i];
        }
        else if(b[i-1] < b[i])
        {
            id += (b[i] - b[i-1]);
            a[i] = id ;
            a[n-i+1] = b[i] -id;

            if(a[i]>a[n-i+1])
            {
                swap(a[i],a[n-i+1]);
                id  = b[i] -id;
            }
        }
        else
        {
            a[i] = id;
            a[n-i+1] = b[i] -id;
        }
    }
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
