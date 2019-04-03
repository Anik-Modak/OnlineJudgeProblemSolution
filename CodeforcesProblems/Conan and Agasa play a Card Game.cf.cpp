#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,a,c,mx=1;
    cin>>n;
    map<int,int>mp;

    i=n;
    while(i--){
        cin>>a;
        mp[a]++;
    }
    for(i=1;i<=1000000;i++){
        if(mx<=mp[i]) mx=mp[i];
    }
    if(mx%2==0) cout<<"Agasa"<<endl;
    else cout<<"Conan"<<endl;
}


