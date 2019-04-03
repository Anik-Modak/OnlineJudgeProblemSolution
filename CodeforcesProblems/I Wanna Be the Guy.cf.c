#include<stdio.h>
int main()
{
    int i,j,n,p,a[105],q,b[105],c=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=1;i<=p;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        scanf("%d",&b[i]);
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
           if(a[j]==i||b[j]==i){
                c++;
                break;
           }
    }

    if(n==c) printf("I become the guy.\n");
    else printf("Oh, my keyboard!\n");
    return 0;
}
