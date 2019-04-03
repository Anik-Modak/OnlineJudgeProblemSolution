//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        double a, b, d;
        cin>>d;

        if(d*d - 4*d < 0)
            cout<<"N"<<endl;
        else
        {
            a = (d+sqrt(d*d-4*d))/2;
            b = d - a;
            cout<<"Y "<<fixed<<setprecision(10)<<a<<" "<<fixed<<setprecision(10)<<b<<endl;
        }
    }
    return 0;
}

