#include<stdio.h>
int main()
{
int m,n,sum=0;
for(;;){
    scanf("%d%d",&m,&n);
    sum=0;
    if(n<=0||m<=0)
        break;

    else if(n>m){
      for(;m<=n;m++){
        printf("%d ",m);
        sum=sum+m;
        }
    }
    else{
        for(;n<=m;n++){
            printf("%d ",n);
            sum=sum+n;}
    }
printf("Sum=%d\n",sum);
}
return 0;
}

