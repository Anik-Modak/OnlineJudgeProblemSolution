#include<stdio.h>
int main()
{
    int m,n,i,j,c=1,d=0;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if (i%2!=0)printf("#");
            else{
                if(j==1||j==n){
                    if(c!=j&&d!=i){
                        printf("#");
                        c=j;
                        d=i;
                    }
                    else printf(".");
                }
                else printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}
