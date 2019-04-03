#include<stdio.h>
#include<math.h>
int PrimeNumber(long long n)
{
    long long i, p=1;
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
    int i,n,a,b;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        for(i=2;i<n;i++){
            a=PrimeNumber(i);
            b=PrimeNumber(n-i);
            if(a==1&&b==1)break;
        }
        if(i==n) printf("Goldbach's conjecture is wrong\n");
        else printf("%d = %d + %d\n",n,i,n-i);
    }
    return 0;
}
