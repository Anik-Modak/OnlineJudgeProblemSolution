#include<stdio.h>
int main()
{
int n,x,i,y;
double d;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d%d",&x,&y);
    if(y==0)
        printf("divisao impossivel\n");
    else{
        d=(double)x/y;
        printf("%.1lf\n",d);
    }
}
return 0;
}
