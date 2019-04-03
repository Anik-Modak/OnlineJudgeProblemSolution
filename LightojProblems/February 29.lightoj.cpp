#include<bits/stdc++.h>
using namespace std;
int leap(long long n)
{
    if(n%400==0) return 1;
    else if(n%4==0&&n%100!=0) return 1;
    else return 0;
}
int main()
{
    int t,ca;
    cin>>t;
    string m1,m2;
    char ch;
    for(ca=1; ca<=t; ca++)
    {
        long long i,d1,d2,y1,y2,ans,c,p;
        cin>>m1>>d1>>ch>>y1;
        cin>>m2>>d2>>ch>>y2;

        if(!(m1=="January"||m1=="February")) y1++;
        if(m2=="January"||(m2=="February"&&d2<29)) y2--;
        y1--;
        c=(y2/400)-(y1/400);
        p=(y2/100)-(y1/100);
        ans=(y2/4)-(y1/4);
        ans+=(c-p);
        printf("Case %d: %lld\n",ca,ans);
    }
}
