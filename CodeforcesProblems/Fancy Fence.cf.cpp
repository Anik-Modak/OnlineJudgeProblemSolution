#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(360%(180-n)==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
