#include<stdio.h>
int main()
{
int n,i,x;
scanf("%d",&x);
for(i=1;i<=x;i++){
scanf("%d",&n);
if(n==0)
    printf("NULL\n");
else if(n%2!=0&&n>0)
    printf("ODD POSITIVE\n");
else if(n%2!=0&&n<0)
    printf("ODD NEGATIVE\n");
else if(n%2==0&&n>0)
    printf("EVEN POSITIVE\n");
else if(n%2==0&&n<0)
    printf("EVEN NEGATIVE\n");
    }
return 0;
}
