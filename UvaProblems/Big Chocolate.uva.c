#include<stdio.h>
int main()
{
    int n,m,s;
    while(scanf("%d%d",&n,&m)!=EOF){
        s=(m*n)-1;
        printf("%d\n",s);
    }
    return 0;
}
