//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    long long a = 1, b, time = 0;
    while(m--)
    {
        cin>>b;
        if(a>b) time += (n-a) + b;
        else time += (b-a);
        a = b;
    }
    cout<<time<<endl;
}
