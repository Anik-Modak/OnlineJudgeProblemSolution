#include<stdio.h>
int main()
{
int i,j,k,x,n,s;
scanf("%d",&x);
for(k=1;k<=x;k++){
scanf("%d%d",&j,&n);
    s=0;
    if(j%2==0){
        j=j+1;
        for(i=1;i<=n;i++){
            s=s+j;
            j=j+2;
        }
    printf("%d\n",s);
    }
else{
    for(i=1;i<=n;i++){
            s=s+j;
            j=j+2;
        }
    printf("%d\n",s);
    }
}
return 0;
}
