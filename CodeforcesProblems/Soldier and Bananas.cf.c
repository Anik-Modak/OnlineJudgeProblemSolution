#include<stdio.h>
int main()
{
    int k,w,n,m,p,i,s=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        p=k*i;
        s=s+p;
    }
    m=s-n;
    if(m<=0)
        printf("0\n");
    else
        printf("%d\n",m);
return 0;
}

