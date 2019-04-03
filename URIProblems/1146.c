#include<stdio.h>
int main()
{
int i,n;
for(;;){
    scanf("%d",&n);
    if(n==0)
        break;
    else
        for(i=1;i<=n;i++){
            if(i==n)
                printf("%d",i);
            else
                 printf("%d ",i);
            }
    printf("\n");
}
return 0;
}
