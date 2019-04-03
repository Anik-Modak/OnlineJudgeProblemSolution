#include<stdio.h>
int main()
{
    int i,n,c,a[1000],min=1000000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<min)
        {
            min=a[i];
            c=i;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",c);
    return 0;
}
