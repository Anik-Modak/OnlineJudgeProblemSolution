#include<stdio.h>
int main()
{
    int n[10],t,i,j,m;
    char c[100][105];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
        m=0;
        for(j=0;j<10;j++){
            scanf("%s%d",&c[j],&n[j]);
            if(m<n[j]) m=n[j];
        }
        printf("Case #%d:\n",i);
        for(j=0;j<10;j++){
            if(m==n[j])
               printf("%s\n",c[j]);
        }
    }
    return 0;
}

