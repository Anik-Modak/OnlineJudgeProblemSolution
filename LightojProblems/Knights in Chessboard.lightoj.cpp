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
        int n,m,x,ans;
        scanf("%d%d",&n,&m);
        if(n>m) swap(n,m);
        if(n==1) ans=m*n;
        else if(n==2){
             x=(n*m/4);
             if(x%2) ans=((x+1)/2)*4;
             else ans=2*x+(n*m%4);
        }
        else if(m%2==0) ans=(m/2)*n;
        else{
            ans=(m/2+1)*n;
            ans-=n/2;
        }
        printf("Case %d: %d\n",ca,ans);
    }
}


