#include<stdio.h>
int gcd(int a,int b){
    int gcd,t;
    if (a == 0) gcd = a;
    else if (b == 0) gcd = b;
    else {
        while (b != 0) {
            t = b;
            b = a % b;
            a = t;
        }
     gcd = a;
    }
    return gcd;
}
int main()
{
    int a,b,c=1,d,n;
    scanf("%d%d%d",&a,&b,&n);
    while(n>0){
        if(c%2==0)
            d=gcd(b,n);
        else d=gcd(a,n);
        n=n-d;
        c++;
    }
    if(c%2==0) printf("0\n");
    else printf("1\n");
}
