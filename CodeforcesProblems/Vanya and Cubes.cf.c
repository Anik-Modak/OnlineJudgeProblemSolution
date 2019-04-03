#include<stdio.h>
int main()
{
int i,j,n,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        sum=sum+j;
    }
    if(sum>=n) break;
}
if(sum!=n)i--;
printf("%d\n",i);
return 0;
}

