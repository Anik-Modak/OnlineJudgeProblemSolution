#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans;
    string a;
    cin>>n;
    getline(cin,a);
    if(a[4]=='w'){
        if(n>=5){
            m=366-(n-4);
            ans=m/7+1;
            m=m%7;
            if(m>=n) ans++;
        }
        else{
            ans=363/7;
            m=363%7;
            if(m>=n) ans++;
        }
    }
    else{
        if(n<30) ans=12;
        else if(n==30) ans=11;
        else ans=7;
    }
    cout<<ans<<endl;
}

