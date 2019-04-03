//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, m, k, l;
    cin>>n>>m>>k>>l;

    long long cnt = (l+k)/m;
    if((l+k)%m) cnt++;

    if(cnt*m > n) cout<<-1<<endl;
    else cout<<cnt<<endl;
}
