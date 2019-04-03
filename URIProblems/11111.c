#include<stdio.h>
int main()
{
int a,b,i,j,sum,n;
scanf("%d",&n);
for(j=1;j<=n;j++){
    scanf("%d%d",&a,&b);
    sum=0;
    if(a>b){
        if(b%2==0)
            for(i=b+1;i<a;i=i+2){
                sum=sum+i;}
        else
            for(i=b+2;i<a;i=i+2){
                sum=sum+i;}
        }
    else{
        if(a%2==0)
            for(i=a+1;i<b;i=i+2){
                sum=sum+i;}
        else
            for(i=a+2;i<b;i=i+2){
                sum=sum+i;}
        }
printf("%d\n",sum);
}
return 0;
}
