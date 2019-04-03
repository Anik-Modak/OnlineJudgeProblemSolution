#include<stdio.h>
int main()
{
    int a[11][11],n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1)a[i][j]=1;
            if(j==1)a[i][j]=1;
            if(i!=1&&j!=1)a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    printf("%d\n",a[n][n]);
    return 0;
}
