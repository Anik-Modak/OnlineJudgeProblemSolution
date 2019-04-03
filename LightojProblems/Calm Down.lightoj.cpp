#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

int main()
{
    int i,t;
    double R,n,r,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>R>>n;
        c=pi/n;
        r=(R*sin(c))/(sin(c)+1);
        printf("Case %d: %.10lf\n",i,r);
    }
    return 0;
}


