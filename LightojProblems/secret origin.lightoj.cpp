#include<bits/stdc++.h>
using namespace std;

long long binary(long long n)
{
    string r,s="0";
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    s+=r;
    next_permutation(s.begin(), s.end());
    return bitset<32>(s).to_ulong();;
}

int main()
{
    int t,ca;
    cin>>t;
    long long  n,m;
    for(ca=1;ca<=t;ca++)
    {
        cin>>n;
        m=binary(n);
        printf("Case %d: %lld\n",ca,m);
    }
}
