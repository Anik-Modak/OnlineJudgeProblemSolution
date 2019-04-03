//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    int odd = 0, even = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a%2) odd++;
        else even++;
    }

    if(odd%2) cout<<odd<<endl;
    else cout<<even<<endl;
}

