#include<stdio.h>
int main()
{
int i,j,s;
for(;;){
    scanf("%d",&j);
    s=0;
    if(j==0)
        break;
    else if(j%2==0){
        for(i=1;i<=5;i++){
            s=s+j;
            j=j+2;
        }
    printf("%d\n",s);
    }
else{
    j=j+1;
    for(i=1;i<=5;i++){
            s=s+j;
            j=j+2;
        }
    printf("%d\n",s);
    }
}
return 0;
}
