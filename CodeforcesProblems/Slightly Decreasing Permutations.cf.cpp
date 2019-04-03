
//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int cnt = 0, m = n;
    for(int i=1; i<=n; i++)
    {
        if(k)
        {
            cout<<m--<<" ";
            k--;
        }
        else cout<<++cnt<<" ";
    }
    cout<<endl;
}


