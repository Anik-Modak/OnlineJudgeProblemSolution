#include<stdio.h>
int main()
{
int i;
double m=2,s=0;
for(i=1;i<=39;i=i+2){
    if(i==1)
        s=1;
    else{
        s=s+(i/m);
        m=m*2;
    }
}
printf("%.2lf\n",s);
return 0;
}
