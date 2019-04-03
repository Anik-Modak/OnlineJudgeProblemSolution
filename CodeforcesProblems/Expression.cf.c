#include<stdio.h>
int main()
{
    long long i,a,b,c,m[10],max=0;
    scanf("%lld%lld%lld",&a,&b,&c);
    m[1]=a*b*c;
    m[2]=a+b*c;
    m[3]=a*(b+c);
    m[4]=(a+b)*c;
    m[5]=a*b+c;
    m[6]=a+b+c;
    for(i=1;i<=6;i++){
        if(m[i]>=max) max=m[i];
    }
    printf("%lld\n",max);
    return 0;
}
