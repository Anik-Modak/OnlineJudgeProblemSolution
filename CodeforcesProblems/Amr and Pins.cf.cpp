#include<bits/stdc++.h>
using namespace std;

int main()
{
    double r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    double a,b,n;
    a=(x1-x2)*(x1-x2);
    b=(y1-y2)*(y1-y2);
    n=ceil(sqrt(a+b)/(2*r));
    cout<<n<<endl;
}
