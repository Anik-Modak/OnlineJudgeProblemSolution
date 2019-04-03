#include<stdio.h>
int main()
{
    int i,j,m,n[105],k,c,t;
    scanf("%d%d",&m,&k);
    for(i=1;i<=m;i++){
        scanf("%d",&n[i]);
    }
    for(i=1;i<=m;i++)
    {
        for(j=i;j<=m;j++)
       {
           if(n[i]<n[j])
          {
              t=n[j];
              n[j]=n[i];
              n[i]=t;
          }
       }
    }
    c=0;
    for(i=1;i<=m;i++){
        if(n[k]<=n[i]&&n[i]>0)c++;
    }
    printf("%d\n",c);
    return 0;
}
