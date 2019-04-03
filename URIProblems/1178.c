#include<stdio.h>
int main()
{
    int i,j,n[15],a[5],b[5],e=0,o=0;
    for(i=0;i<15;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<15;i++)
    {
        if(n[i]%2==0){
            a[e]=n[i];
            e++;
            if(e==5)
            {
            for(j=0;j<5;j++){
                printf("par[%d] = %d\n",j,a[j]);
                e=0;
                }
            }
        }
        else{
            b[o]=n[i];
            o++;
            if(o==5)
            {
            for(j=0;j<5;j++){
                printf("impar[%d] = %d\n",j,b[j]);
                o=0;
                }
            }
        }
}
    for(i=0;i<o;i++)
    {
        printf("impar[%d] = %d\n",i,b[i]);
    }
      for(i=0;i<e;i++)
    {
        printf("par[%d] = %d\n",i,a[i]);
    }
return 0;
}
