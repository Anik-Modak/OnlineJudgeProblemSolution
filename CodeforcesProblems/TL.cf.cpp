//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m;
    cin>>n>>m;

    int a[n], b[m];
    for(int i=0; i<n; i++)
        cin>>a[i];

    for(int i=0; i<m; i++)
        cin>>b[i];

    sort(a,a+n);
    sort(b,b+m);

    int cn = max(2*a[0], a[n-1]), cm = b[0];
    if(cn >= cm) cout<<-1<<endl;
    else cout<<cn<<endl;

    return 0;
}

