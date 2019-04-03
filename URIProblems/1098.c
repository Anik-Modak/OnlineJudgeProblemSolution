#include<stdio.h>
int main()
{
double i,j,eps=.000000001;
int n;
for(i=0;i<=2;i=i+0.2){
    for(j=1;j<=3;j++){
        n=i+eps;
//printf("db %d %lf\n",n,i);
        if(i-n<eps){
            printf("I=%.0lf J=%.0lf\n",i,j+i);
        }
        else
        {
            printf("I=%.1lf J=%.1lf\n",i,j+i);
        }

    }
}
return 0;
}
