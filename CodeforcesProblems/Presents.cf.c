#include<stdio.h>
int main()
{
    int p[101],n,x[101],i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&p[i]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==p[j]) break;
        }
        if(i==n) printf("%d\n",j);
        else
            printf("%d ",j);
    }
    return 0;
}
