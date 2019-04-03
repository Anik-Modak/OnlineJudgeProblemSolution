//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    while(m)
    {
        for(int i=1; i<=n; i++)
        {
            if(m>=i) m -= i;
            else
            {
                cout<<m<<endl;
                return 0;
            }
        }
    }

    cout<<0<<endl;
    return 0;
}
