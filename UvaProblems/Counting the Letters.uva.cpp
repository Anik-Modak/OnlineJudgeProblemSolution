#include<bits/stdc++.h>
using namespace std;

long double fact(int n)
{
    if(n<=1) return 1;
    else return n*fact(n-1);
}

int main()
{
    int ca,t,n;
    cin>>t;
    string a;
    map<char,int>mp;
    for(ca=1;ca<=t;ca++)
    {
        cin>>a;
        n=a.size();
        unsigned long int ans;
        long long i,m=1;
        for(i=0; i<n; i++) mp[a[i]]++;
        for(i=0; i<26; i++){
            if(mp[i+'A']>1) m*=fact(mp[i+'A']);
        }
        ans=fact(n)/m;
        printf("Data set %d: %u\n",ca,ans);
        mp.clear();
    }
}



