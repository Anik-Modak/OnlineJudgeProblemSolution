#include<stdio.h>
int main()
{
    long long a[6],s=0,i,min,max;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
        if(i==0){
            max=a[i];
            min=a[i];
        }
        if(max<=a[i]) max=a[i];
        if(min>=a[i]) min=a[i];
        s=s+a[i];
    }
    printf("%lld %lld\n",s-max,s-min);
    return 0;
}
