#include<stdio.h>
int main()
{
    int i,n,h,a,c=0;
    scanf("%d%d",&n,&h);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a<=h) c++;
        else c=c+2;
    }
    printf("%d\n",c);
    return 0;
}
