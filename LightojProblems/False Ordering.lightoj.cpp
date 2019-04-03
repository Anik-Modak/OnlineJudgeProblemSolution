#include<bits/stdc++.h>

int divisor(int n)
{
    int i,m,c=0;
    m=sqrt(n);
    for(i=1;i<=m;i++){
        if(i*i==n) c++;
        else if(n%i==0) c=c+2;
    }
    return c;
}
int main()
{
    int c,t,n,a[1005];
    scanf("%d",&t);
    for(c=1;c<=t;c++){
        scanf("%d",&n);
        int i,j,k,b[1005];
        for(i=1;i<=1000;i++){
            a[i]=divisor(i);
        }
        for(i=1,k=1;i<=32;i++){
            for(j=1000;j>0;j--)
                if(a[j]==i) b[k++]=j;
        }
        printf("Case %d: %d\n",c,b[n]);
    }
   return 0;
}

