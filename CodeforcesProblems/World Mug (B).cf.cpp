//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    queue<int>q;
    long long a[n],win=0,loss=0;

    for(int i=0; i<n; i++) cin>>a[i];

    sort(a,a+n);
    reverse(a,a+n);

    int k=log2(n),id=0;
    win = k*a[0];

    for(int i=1; i<n; i++)
    {
        if(log2(i)>=id) id++;
        win += (k-id)*a[i];
        loss += a[i];
    }
    cout<<win-loss<<endl;
}

