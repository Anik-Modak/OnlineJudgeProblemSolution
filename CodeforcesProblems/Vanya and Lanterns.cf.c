#include<stdio.h>
int main()
{
    long long i,j,a,n[10010],l,tm;
    double mx=0,m,d;
    scanf("%lld%lld",&a,&l);
    for(i=0;i<a;i++){
        scanf("%lld",&n[i]);
    }
    for(i=0;i<a;i++){
        for(j=i;j<a;j++){
            if(n[i]>n[j]){
                tm=n[j];
                n[j]=n[i];
                n[i]=tm;
            }
        }
    }
    if(n[0]>l-n[a-1]) m=n[0];
    else m=l-n[a-1];
    for(i=1;i<a;i++){
        d=(double)(n[i]-n[i-1])/2;
        if(mx<d) mx=d;
    }
    if(mx<m) mx=m;
    printf("%.10lf\n",mx);
    return 0;
}
