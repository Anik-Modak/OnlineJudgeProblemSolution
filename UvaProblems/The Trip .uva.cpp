//Anik_Modak
#include<bits/stdc++.h>
#define d double
using namespace std;


int main()
{
    int t;
    //freopen("input.txt","r",stdin);
    while(cin>>t&&t!=0)
    {
        double a[t],ans1=0.0,ans2=0.0,s=0.0;
        for(int i=0; i<t; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        s=round(s / t * 100) / 100;

        for(int i=0; i<t; i++)
        {
            if(s<a[i]) ans1+=(a[i]-s);
            else ans2+=(s-a[i]);
        }
        printf("$%.2f\n", min(ans1, ans2));
    }
}


