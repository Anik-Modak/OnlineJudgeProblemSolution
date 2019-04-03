#include<stdio.h>
int main()
{
    int t,i,j,n[100],max,min,a,b;
    scanf("%d",&t);
    printf("Lumberjacks:\n");
    for(i=1;i<=t;i++){
        a=0;
        b=0;
        for(j=0;j<10;j++){
            scanf("%d",&n[j]);
            if(j==0){
                max=n[j];
                min=n[j];
            }
            if(n[j]>=max){
                max=n[j];
                a++;
            }
            if(n[j]<=min){
                min=n[j];
                b++;
            }
        }
        if(b==10||a==10)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
