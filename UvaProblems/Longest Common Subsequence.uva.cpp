#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    string a,b;
    while(cin>>a>>b){
        map<char,int>mp;
        for(i=0; i<a.size(); i++) mp[a[i]]++;
        for(i=0; i<b.size(); i++) mp[b[i]]++;
    }
}
