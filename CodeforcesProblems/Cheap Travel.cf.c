#include<stdio.h>
int main()
{
    int a,b,n,m,s,r;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    if(m*a>b){
        r=(n%m)*a;
        if(r>b) s=n/m*b+b;
        else s=n/m*b+r;
    }
    else s=n*a;
    printf("%d\n",s);
    return 0;
}
