#include<stdio.h>
int main()
{
int n,i,j,m,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
    k=i;m=i;
    for(j=1;j<=3;j++){
       if(j==3)
        printf("%d",m);
        else
         printf("%d ",m);
         m=m*i;
    }
    printf("\n");
    for(j=1;j<=3;j++){
        if(j==3)
            printf("%d",k-i);
        else
            printf("%d ",k);
            k=k*i+1;
    }
    printf("\n");
}
return 0;
}
