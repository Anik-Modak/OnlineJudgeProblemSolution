#include<stdio.h>
int main()
{
    int n,m,k,a,i,s=0,c=0;
    double p,q=0.5;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        s=s+a;
    }
    while(1){
        m=s/n;
        p=(double)s/n-m;
        if(p>=q) m=m+1;
        if(m==k) break;
        c++;
        n++;
        s=s+k;
    }
    printf("%d\n",c);
    return 0;
}
