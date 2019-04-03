#include<stdio.h>
int main()
{
int n,i,a=1,b=2,s=0;
scanf("%d",&n);
if(n==0)
    printf("%d\n",n);
else{
    for(i=1;i<=n;i++)
    {
       if(n%i==0){
        printf("%d\n",i);
       }
    }
}
return 0;
}

