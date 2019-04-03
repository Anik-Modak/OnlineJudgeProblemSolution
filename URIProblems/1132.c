#include<stdio.h>
int main()
{
int x,y,s=0;
scanf("%d%d",&x,&y);
if(x>y){
    for(; y<=x;y++){
        if(y%13!=0)
        s=s+y;
    }
}
else{
    for(;x<=y;x++){
        if(x%13!=0)
        s=s+x;
        }
}
printf("%d\n",s);
return 0;
}
