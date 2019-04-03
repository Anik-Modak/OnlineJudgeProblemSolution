#include<stdio.h>
int main()
{
int n[20],i,t=0,j;
for(i=0;i<=19;i++)
{
    scanf("%d",&n[i]);
}
for(i=0;i<=19;i++)
{
    for(j=i;j<=19;j++)
    {
         if(n[i]<n[j])
        {   t=n[j];
            n[j]=n[i];
            n[i]=t;
         }
    }
    printf("N[%d] = %d\n",i,n[i]);
}
return 0;
}
