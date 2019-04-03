#include<stdio.h>
int main()
{
    int n,i,t,a,b,c,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&a,&b,&c);
        if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
            count=count+1;
    }
    printf("%d\n",count);
    return 0;
}
