#include<stdio.h>
int main()
{
    int i,j,n[20],a[20],t;
    for(i=0,j=19;i<=19;i++)
    {
        scanf("%d",&n[i]);
        a[j]=n[i];
        j--;
    }
    for(i=0;i<=19;i++)
    {
       printf("N[%d] = %d\n",i,a[i]);
    }
return 0;
}
