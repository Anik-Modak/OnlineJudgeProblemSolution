#include<stdio.h>
int main()
{
int i,j,b;
scanf("%d%d",&i,&j);
if(i<j){
    for(i=i+1;i<j;i++)
    {
        b=i%5;
        if(b==2||b==3)
        printf("%d\n",i);
    }
}
else{
    for(j=j+1;j<i;j++)
    {
        b=j%5;
        if(b==2||b==3)
        printf("%d\n",j);
    }
}
return 0;
}
