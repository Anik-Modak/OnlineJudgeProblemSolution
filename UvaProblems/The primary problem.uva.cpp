#include<bits/stdc++.h>
using namespace std;

bool a[100000005]={0};

void sive()
{
    long long i,j,n=100000000;
    a[1]=1;
    for(i=4;i<=n;i=i+2) a[i]=1;
    for(i=3;i<=sqrt(n);i+=2)
    {
        for(j=i+i;j<=n;j+=i) a[j]=1;
    }
}
int main()
{
    int i,n;
    sive();
    while(1){
        scanf("%d",&n);
        if(n==0) break;
        if(n==1||n==2) printf("%d:\nNO WAY!\n",n);
        else{
            for(i=2;i<=n/2;i++){
                if(a[i]==0&&a[n-i]==0) break;
            }
            if(i==n/2+1) printf("%d:\nNO WAY!\n",n);
            else printf("%d:\n%d+%d\n",n,i,n-i);
        }
    }
    return 0;
}
