//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, ch=0;
    cin>>n;

    while(n--)
    {
        cin>>a;
        if(a) ch=1;
    }
    if(ch) cout<<"HARD\n";
    else cout<<"EASY\n";
}
