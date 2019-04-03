//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    int e = a[k-1], cnt = 0;
    for(int i=n-1; i>=0; i--)
    {
        if(a[i] == e) cnt ++;
        else break;
    }

    if(n-k>cnt) cout<<-1<<endl;
    else cout<<n-cnt<<endl;
    return 0;
}
