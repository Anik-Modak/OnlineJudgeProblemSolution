#include<stdio.h>
int main()
{
int n,x,y;
scanf("%d",&n);
for(i=1;i<=n;i++){
    scanf("%d%d",&x,&y);
    if(x>y)
        for(y=1;y<=x;y++){
            sum=sum+y;
        }
    else
        for(x=1;x<=y;x++){
        sum=sum+x;
        }
}
return 0;
}
