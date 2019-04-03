#include<stdio.h>
#include<math.h>

int main()
{
    long long n,m;
    while(1){
        scanf("%lld",&n);
        if(n==0) break;
        m=sqrt(n);
        if(sqrt(n)-m==0) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
