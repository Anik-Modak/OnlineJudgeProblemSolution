#include<stdio.h>
int main()
{
    int t,i,n,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        if(n%2==0) a=n/2;
        else
            a=(n/2)+1;
        printf("%d %d\n",a,n-a);
    }
    return 0;
}
