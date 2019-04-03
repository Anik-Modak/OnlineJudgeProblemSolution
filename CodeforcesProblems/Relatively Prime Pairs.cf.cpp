//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long l,r,len;
    cin>>l>>r;

    cout<<"YES"<<endl;
    for(long long i=l; i<=r; i+=2)
    {
        printf("%lld %lld\n",i,i+1);
    }
}
