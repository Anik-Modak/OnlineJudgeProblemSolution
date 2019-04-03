#include<stdio.h>
int main()
{
    long long a,b,c,i=1,x;
    while(1){
    scanf("%lld%lld",&a,&b);
    if(a<0&&b<0) break;
    x=a;
    c=0;
    while(a<=b){
        c++;
        if(a==1) break;
        else if(a%2==0) a=a/2;
        else a=3*a+1;
    }
    printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,x,b,c);
    i++;
    }
    return 0;
}
