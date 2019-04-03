#include<iostream>
using namespace std;

int main()
{
    int i,a,b,c,b1,c1,ans;
    cin>>a>>b>>c;
    for(i=1;;i++){
        b1=2*i;
        c1=4*i;
        if(i<=a&&b1<=b&&c1<=c) continue;
        else break;
    }
    ans=(i-1)*7;
    cout<<ans<<endl;
}
