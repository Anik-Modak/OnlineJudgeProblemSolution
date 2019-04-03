#include<stdio.h>
int main()
{
int n[100],i,tm,a,k,j;
scanf("%d",&a);
for(i=0;i<a;i++)
{
    scanf("%d",&n[i]);
}
        for(k=0;k<a;k++)
        {
            for(j=k;j<a;j++)
            {
                if(n[k]>n[j]){
                    tm=n[j];
                    n[j]=n[k];
                    n[k]=tm;
                }
            }
            printf("%d ",n[k]);
        }
    return 0;
}

