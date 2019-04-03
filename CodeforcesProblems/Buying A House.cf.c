#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k,i,a,min=1000,t;
    scanf("%d%d%d",&n,&m,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        if(a<=k&&a!=0){
            t=abs(m-i);
            if(min>t)
                min=t;
        }
    }
    min=min*10;
    printf("%d\n",min);
    return 0;
}
