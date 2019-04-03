//Anik_Modak
#include<bits/stdc++.h>
#define d double
using namespace std;

double Area(d a,d b, d c)
{
    double area, p=(a+b+c)/2.0;
    area= sqrt(p * (p-a) * (p-b) * (p-c));
    return area;
}

double getAD(double ab, double ac, double bc, double rat1)
{
    double high =ab, low =0.0, mid,pre;
    double AREA = Area(ab, ac, bc);

    while(low <= high)
    {
        mid = (high+low)/2;

        double area,ae,de,rat2;
        ae=(mid/ab)*ac;
        de=(mid/ab)*bc;

        area=Area(mid,ae,de);
        rat2=area/(AREA-area);

        if (rat1 == rat2) return mid;
        else if (rat2 > rat1) high = mid;
        else low = mid;

        if (abs(mid-pre) < 0.0000001) break;
        pre = mid;
    }
    return mid;
}

int main()
{
    int t,ca;
    //freopen(\"input.txt\",\"r\",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        double ab,ac,bc,rat,ans;
        cin>>ab>>ac>>bc>>rat;

        ans=getAD(ab,ac,bc,rat);
        printf("Case %d: %.7lf\n",ca,ans);
    }
    return 0;
}
