#include<iostream>
using namespace std;

int main()
{
    long long mx,f,t,n,k;
    cin>>n>>k;
    int i=1;
    while(n--){
        cin>>f>>t;
        if(t>k) f=f+k-t;
        if(i==1) mx=f;
        if(mx<f) mx=f;
        i++;
    }
    cout<<mx<<endl;
}
