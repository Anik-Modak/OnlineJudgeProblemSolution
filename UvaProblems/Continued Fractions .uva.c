#include<stdio.h>

int main()
{
    long long i,j,m,n,r[100000],p;

    while(scanf("%lld %lld",&m,&n)!=EOF)
    {
        i=1;
        while(1){
            r[i]=m/n;
            p=m%n;
            m=n;
            n=p;
            if(p==0) break;
            i++;
        }
        for(j=1;j<=i;j++){
            if(j==1)
                printf("[%lld;",r[j]);
            else if(j==i)
                printf("%lld]\n",r[j]);
            else
                printf("%lld,",r[j]);
        }
    }
    return 0;
}
