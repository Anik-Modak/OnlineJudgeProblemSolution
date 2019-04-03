#include<stdio.h>
int main()
{
    long long n,x,y;
    scanf("%lld",&n);
    if(n%2==0){
        x=4;
        y=n-4;
    }
    else{
        x=9;
        y=n-9;
    }
    printf("%lld %lld\n",x,y);
    return 0;
}
