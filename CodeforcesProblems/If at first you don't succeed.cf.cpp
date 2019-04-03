//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cin>>a>>b>>c>>n;

    if(a<c||b<c) cout<<-1<<endl;
    else{
        int ans=(a-c)+(b-c)+c;

        if(ans<n) cout<<n-ans<<endl;
        else cout<<-1<<endl;
    }
}
