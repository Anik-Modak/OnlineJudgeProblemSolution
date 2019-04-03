#include<stdio.h>
int main()
{
    int t,m,n,a;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&m);
        a=(n/3)*(m/3);
        printf("%d\n",a);
    }
    return 0;
}
