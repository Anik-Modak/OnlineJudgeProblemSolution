#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a1,a2,b1,b2,c1,c2,d1,d2,x,y,area;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        d1=c1-(b1-a1);
        d2=c2-(b2-a2);
        area=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2))*sqrt((b1-c1)*(b1-c1)+(b2-c2)*(b2-c2));
        printf("Case %d: %d %d %d\n",i,d1,d2,area);
    }
}
