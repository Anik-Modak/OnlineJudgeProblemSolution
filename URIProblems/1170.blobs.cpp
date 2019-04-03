#include<iostream>
using namespace std;

int fn(double n)
{
    int i=0;
    while(n>1){
        n=n/2;
        i++;
    }
    return i;
}

int main()
{
    int t;
    cin>>t;
    double d;
    while(t--){
        cin>>d;
        cout<<fn(d)<<" dias"<<endl;
    }
    return 0;
}

