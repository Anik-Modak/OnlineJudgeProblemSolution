#include<stdio.h>
int main()
{
    int t,i,n,m,d;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&n,&m);
        if(n<=m) d=19+(4*m);
        else
            d=19+((n-m)+n)*4;
        printf("Case %d: %d\n",i,d);
    }
    return 0;
}
