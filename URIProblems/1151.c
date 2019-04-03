#include<stdio.h>
int main()
{
int n,i=1,j=0,s=0;
scanf("%d",&n);
printf("%d %d",j,i);
for(i=1;i<=n;i++){
    s=i+j;
    printf(" %d",s);
    j++;
}
return 0;
}
