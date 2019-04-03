#include<stdio.h>
int main()
{
    int i,m=0,n,k;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        m=m+5*i;
        if(m+k>240) break;
    }
    printf("%d",i-1);
    return 0;
}
