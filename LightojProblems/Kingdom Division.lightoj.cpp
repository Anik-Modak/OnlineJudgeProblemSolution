//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

double a[MAX];
void fn()
{
    a[1]=1.0;
    for(int i=2; i<=MAX; i++)
        a[i]=a[i-1]+1.0/i;
}

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;
    fn();

    for(ca=1; ca<=t; ca++)
    {
        double a,b,c,p,q;
        scanf("%lf%lf%lf",&a,&b,&c);

        p=(a*c)/b;
        if(b-p<=0) printf("Case %d: -1\n",ca);
        else {
            q=(p*p+p*a+p*c+a*c)/(b-p);
            printf("Case %d: %.8lf\n",ca,p+q);
        }
    }
    return 0;
}

