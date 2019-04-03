#include<stdio.h>
int main()
{
    long long int n,m,i,j,s=0,d;
    scanf("%lld%lld",&n,&m);
    int a[m];
    for(i=1;i<=m;i++)
        scanf("%d",&a[i]);
    a[0]=1;
    for(i=1,j=0;i<=m;j++,i++){
        d=a[i]-a[j];
        if(d<0) d=n+d;
        s=s+d;
    }
    printf("%lld\n",s);
    return 0;
}
