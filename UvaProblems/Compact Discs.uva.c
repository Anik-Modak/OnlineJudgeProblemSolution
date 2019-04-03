#include<stdio.h>
int main()
{
    long long i,b,a,c,n,j;
    while(1){
        scanf("%lld%lld",&a,&b);
        if(a==0&&b==0)break;
        long long m[a];
        for(i=0;i<a;i++){
            scanf("%lld",&m[i]);
        }
        c=0;
        j=0;
        for(i=0;i<b;i++){
           scanf("%lld",&n);
           while (j<a&&m[j]<n) j++;
              if(m[j]==n){
                 c++;
            }
        }
        printf("%lld\n",c);
    }
    return 0;
}
