#include<stdio.h>
int main()
{
    int n,p,q,c=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d",&p,&q);
        if((p+1)<q) c++;
    }
    printf("%d\n",c);
    return 0;
}
