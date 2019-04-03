#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,f[100],s,t,j,i,min=10000;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d",&f[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            if(f[i]>f[j])
            {
                t=f[j];
                f[j]=f[i];
                f[i]=t;
            }
        }
    }
    for(i=0;i<=m-n;i++){
        s=f[n-1+i]-f[i];
        if(s<min) min=s;
    }
    printf("%d\n",min);
    return 0;
}
