#include<stdio.h>
int main()
{
int n,i,a=0,b=1,s=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i==1){
        printf("%d ",a);
        continue;
    }
    if(i==2){
        printf("%d ",b);
        continue;
    }
    s=a+b;
    a=b;
    b=s;
    if(i==n)
         printf("%d\n",s);
    else
        printf("%d ",s);
}
return 0;
}
