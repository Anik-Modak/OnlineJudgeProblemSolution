#include<stdio.h>
int main()
{
int n,i,j,m=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=3;j++){
        printf("%d ",m);
        m=m+1;
    }
    printf("PUM\n");
    m++;
}
return 0;
}
