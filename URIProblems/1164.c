#include<stdio.h>
int main()
{
int i,j,x,n,c,s;
scanf("%d",&x);
    for(i=1;i<=x;i++){
            s=0;
        scanf("%d",&n);
        for(j=1;j<n;j++){
            if(n%j==0){
            c=j;
            s=s+c;}
        }
    if(n==s)
        printf("%d eh perfeito\n",n);
    else
        printf("%d nao eh perfeito\n",n);
    }
return 0;
}
