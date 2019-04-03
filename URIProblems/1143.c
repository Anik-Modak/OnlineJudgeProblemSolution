#include<stdio.h>
int main()
{
int n,i,j,m=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=3;j++){
        if(j==3){
        printf("%d",m);
        m=m*i;}
        else{
         printf("%d ",m);
         m=m*i;}
    }
    printf("\n");
    m=i;
    m++;
}
return 0;
}
