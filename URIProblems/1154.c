#include<stdio.h>
int main()
{
int n,c=0;
double avg,s=0;
for(;;){
    scanf("%d",&n);
    if(n<0)
        break;
    else{
        s=s+n;
        c=c+1;}
    }
avg=s/c;
printf("%.2lf\n",avg);
return 0;
}
