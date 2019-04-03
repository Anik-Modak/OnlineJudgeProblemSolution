#include<stdio.h>
int main()
{
    int i,j,t,k,x,n[100],m,p,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        for(j=0;j<x;j++)
        {
            scanf("%d",&n[j]);
        }
        for(j=0;j<x;j++)
        {
            for(k=j;k<x;k++)
            {
                if(n[j]>n[k]){
                    m=n[k];
                    n[k]=n[j];
                    n[j]=m;
                }
            }
        }
        s=0;
        for(k=0,j=1;j<x;k++,j++)
        {
            p=n[j]-n[k];
            s=s+p;
        }
        printf("%d\n",2*s);
    }
    return 0;
}

