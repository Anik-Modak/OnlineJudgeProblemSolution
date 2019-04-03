#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1,a2,b2,a3,b3,n;
    double cup,med;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3>>n;
    cup=a1+a2+a3;
    med=b1+b2+b3;
    cup=ceil(cup/5);
    med=ceil(med/10);
    if(n>=cup+med) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
