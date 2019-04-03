#include<stdio.h>
int main()
{
int n,i,j,m;
scanf("%d%d",&m,&n);
for(i=1;i<=n;){
    for(j=1;j<=m;j++){
        if(j==m)
            printf("%d",i);
        else
            printf("%d ",i);
            i++;
        }
    printf("\n");
}
return 0;
}
