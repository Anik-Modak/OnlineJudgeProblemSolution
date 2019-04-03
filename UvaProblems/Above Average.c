#include<stdio.h>
int main()
{
    long long i,j,k,t,x,n[10000],c,s;
    double p,a;
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        s=0;
        scanf("%lld",&x);
        for(j=0;j<x;j++)
        {
            scanf("%lld",&n[j]);
            s=s+n[j];
        }
        p=(double)s/x;
        c=0;
        for(i=0;i<x;i++)
        {
            if(n[i]>p)
                c=c+1;
        }
        a=(double)c*100/x;
        printf("%.3lf%%\n",a);
    }
    return 0;
}
