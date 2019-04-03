//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long y, k, n, m;
    cin>>y>>k>>n;

    m = k*((y+k)/k) ;
    if(m > n)
        cout<<-1<<endl;
    else
    {
        while(m<=n)
        {
            cout<<m-y<<" ";
            m += k;
        }
        cout<<endl;
    }

    return 0;
}
