#include<stdio.h>
int main()
{
    int i,j,t,a,b,s;
    double c,d,n,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        scanf("%lf%lf",&c,&d);
        s=0;
        while(b>=a)
        {
            n=a+(a*c)/100;
            m=b+(b*d)/100;
            a=n;
            b=m;
            s=s+1;
            if(s>100)
                break;
        }
        if(s>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",s);
    }
    return 0;
}
