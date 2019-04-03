#include<bits/stdc++.h>
using namespace std;

int k=0,a[100000000/32+31],p[5761500];;
unsigned int Mul[5761500];

int on(int n,int pos){
  return (n|(1<<pos));
}
bool check(int n,int pos){
    return (n&(1<<pos));
}
void bitsive(int n)
{
    int i,j;
    for(i=3; i<=sqrt(n); i++)
    {
        if(check(a[i/32],i%32)==0){
            for(j=i*i; j<=n; j+=2*i)
                a[j/32]=on(a[j/32],j%32);
        }
    }
    p[k++]=2;
    for(i=3; i<=n; i+=2){
        if(check(a[i/32],i%32)==0) p[k++]=i;
    }
}
int main()
{
    int ca,t,n;
    //freopen("input.txt","r",stdin);
    bitsive(100000000);
    Mul[0]= p[0];
    for(int i=1; i<k; i++) Mul[i] = Mul[i-1]*p[i];

    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        scanf("%d",&n);
        int pos = upper_bound(p, p+k, n)-p-1;
        unsigned int ans=Mul[pos];
        long long j,m;

        for(int i=0; p[i]<=sqrt(n); i++)
        {
            m=p[i];
            for(j=p[i]*p[i]; j<=n; j*=p[i]) m=j;
            ans*=m/p[i];
        }
        printf("Case %d: %u\n",ca,ans);
    }
}

