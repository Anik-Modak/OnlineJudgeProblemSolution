#include<stdio.h>
#include<math.h>
int PrimeNumber(int n)
{
    int i, p=1;
    for(i=2; i<=sqrt(n); i++)
    {
        if(n%i == 0){
            p=0;
            break;
        }
    }
    return p;
}
int main()
{
    int i,n,a,b,c;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        c=0;
        for(i=2;i<=n/2;i++)
        {
            a=PrimeNumber(i);
            b=PrimeNumber(n-i);
            if(a==1&&b==1) c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
