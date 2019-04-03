#include<stdio.h>
int main()
{
    long long n,a,b,i,j,s;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        int c[1000];
        s=0;
        i=0;
        a=1;
        while(a!=0){
            a=n/2;
            b=n%2;
            c[i++]=b;
            n=a;
            s=s+b;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
            printf("%d",c[j]);
        printf(" is %d (mod 2).\n",s);
    }
    return 0;
}
