#include<iostream>
using namespace std;

long double fact(int n)
{
    if(n<=1) return 1;
    else return n*fact(n-1);
}

int main()
{
    int n,m;
    while(cin>>n>>m){
        long long s=fact(n)+fact(m);
        cout<<s<<endl;
    }
    return 0;
}
