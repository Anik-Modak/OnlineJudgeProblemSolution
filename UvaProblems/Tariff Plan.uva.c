#include<stdio.h>
int mile(int x){
    int i,d=1;
    for(i=30;i<=x;i=i+30)
        d++;
    return d*10;
}
int juice(int x){
    int i,c=1;
    for(i=60;i<=x;i=i+60)
        c++;
    return c*15;
}
int main()
{
    int t,i,j,n,x,a,b;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d",&n);
        a=0,b=0;
        for(i=1;i<=n;i++){
            scanf("%d",&x);
            a=a+mile(x);
            b=b+juice(x);
        }
        if(b>a)
            printf("Case %d: Mile %d\n",j,a);
        else if(a>b)
            printf("Case %d: Juice %d\n",j,b);
        else
            printf("Case %d: Mile Juice %d\n",j,a);
    }
    return 0;
}
