#include<stdio.h>
int main()
{
int x,y;
double w,z;
scanf("%d%d",&x,&y);
if(x==1)
    w=4.00;
else if(x==2)
    w=4.50;
else if(x==3)
    w=5.00;
else if(x==4)
    w=2.00;
else if(x==5)
    w=1.50;
z=w*y;
printf("Total: R$ %.2lf\n",z);
return 0;
}
