#include<stdio.h>
int main()
{
int n,i=2;
scanf("%d",&n);
if(n>0){
    for(i=2;i<=10000;i=i+n){
    printf("%d\n",i);
    }
}
else if(n<0){
     for(i=2;i>=-10000;i=i+n){
        printf("%d\n",i);
     }
}
return 0;
}
