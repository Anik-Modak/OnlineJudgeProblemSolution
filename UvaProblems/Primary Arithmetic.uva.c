#include<stdio.h>
int digit(long long n,long long m)
{
    int r1,r2,s=0,c=0;
    while(n!=0||m!=0){
        r1=n%10;
        r2=m%10;
        n=n/10;
        m=m/10;
        s=s+r1+r2;
        if(s>9){
            s=s/10;
            c++;
        }
        else s=0;
    }
    return c;
}
int main()
{
    long long n,m,s;
    while(scanf("%lld%lld",&n,&m)){
        if(n==0&&m==0) break;
        s=digit(n,m);
        if(s==0) printf("No carry operation.\n");
        else if(s==1) printf("%lld carry operation.\n",s);
        else printf("%lld carry operations.\n",s);
    }
    return 0;
}
