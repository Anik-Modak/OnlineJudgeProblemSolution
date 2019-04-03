#include<stdio.h>
int main()
{
int i,n,max=0,c=1,s;
    for(i=1;i<=100;i++){
        scanf("%d",&n);
        if(n>max){
            max=n;
            s=c;
        }
    c=c+1;
    }
printf("%d\n",max);
printf("%d\n",s);
return 0;
}
