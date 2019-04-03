#include<stdio.h>
int main()
{
int i,n;
scanf("%d",&i);
if(i%2==0){
    i=i+1;
    n=i+11;}
else{
    i=i;
    n=i+11;}
for(i=i;i<=n;i=i+2){
    printf("%d\n",i);
}
return 0;
}
