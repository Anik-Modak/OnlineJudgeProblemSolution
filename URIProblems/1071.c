#include<stdio.h>
int main()
{
int a,b,sum=0;
scanf("%d%d",&a,&b);
if(b>a){
if(a%2==0){
    a=a+1;
    for( ;a<b;a=a+2){
        sum=sum+a;}
}
else{
    a=a+2;
    for(;a<b;a=a+2){
        sum=sum+a;}
}
printf("%d\n",sum);
}
else{
   if(b%2==0){
    b=b+1;
    for( ;b<a;b=b+2){
        sum=sum+b;}
}
else{
    b=b+2;
    for(;b<a;b=b+2){
        sum=sum+b;}
}
printf("%d\n",sum);
}
return 0;
}
