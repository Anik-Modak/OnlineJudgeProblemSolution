#include<stdio.h>
int main()
{
    int a,b,t,i,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        scanf("%d%d",&a,&b);
        if(a%2==0)
            a=a+1;
        while(a<=b)
        {
           s=s+a;
           a=a+2;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
