#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,p=1;
    cin>>n;
    while(n--){
        cin>>a;
        if(a==1) p=0;
    }
    if(p==0) cout<<-1<<endl;
    else cout<<p<<endl;
}
