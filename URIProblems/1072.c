#include<stdio.h>
int main()
{
int n,x,i,c=0,s=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d",&x);
    if(10<=x&&x<=20)
        c=c+1;
    else
        s=s+1;
}
printf("%d in\n",c);
printf("%d out\n",s);
return 0;
}
