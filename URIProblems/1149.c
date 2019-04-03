#include<stdio.h>
int main()
{
int n,a,i,x,s=0;
scanf("%d%d",&a,&n);
   l:x=n;
if(x<=0)
{
    scanf("%d",&n);
    goto l;
}
for(i=1;i<=n;i++)
    {
        s=s+a;
        a++;
    }
printf("%d\n",s);
return 0;
}
