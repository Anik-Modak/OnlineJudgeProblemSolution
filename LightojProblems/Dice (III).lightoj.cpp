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
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    fn();

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        double ans=(double)n*a[n];
        printf("Case %d: %.6lf\n",ca,ans);
    }
    return 0;
}
