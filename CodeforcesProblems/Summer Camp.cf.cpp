#include<bits/stdc++.h>
#include<string>
using namespace std;

string a="123456789";

void fn()
{
    int i=10;
    while(i<500){
        ostringstream ss;
        ss<<i;
        a=a+ss.str();
        i++;
    }
}
int main()
{
    int n;
    cin>>n;
    fn();
    cout<<a[n-1]<<endl;
}
