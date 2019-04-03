#include<stdio.h>
int main()
{
int x,n,i,j,c;
scanf("%d",&x);
for(i=1;i<=x;i++){
    scanf("%d",&n);
    c=1;
if(n==0){
     printf("%d nao eh primo\n",n);}
else{
    for(j=2;j<=n/2;j++){
        if(n%j==0){
            c=0;
            break;}
    }
    if(c==0)
         printf("%d nao eh primo\n",n);
    else
        printf("%d eh primo\n",n);
    }
}
return 0;
}
