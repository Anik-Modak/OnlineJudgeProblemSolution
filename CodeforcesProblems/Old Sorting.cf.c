#include<stdio.h>
int main()
{
    int t,i,a,n[105],b[105],tm,j,k,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&a);
        for(j=1;j<=a;j++){
            scanf("%d",&n[j]);
            b[j]=n[j];
        }
        for(k=1;k<=a;k++)
        {
            for(j=k+1;j<=a;j++)
            {
                if(n[k]<n[j]){
                    tm=n[j];
                    n[j]=n[k];
                    n[k]=tm;
                }
            }
        }
        c=0;
        for(j=1;j<=a;j++){
            if(b[j]==n[j]) c++;
        }
        printf("Case %d: %d\n",i,c/2);
    }
    return 0;
}
