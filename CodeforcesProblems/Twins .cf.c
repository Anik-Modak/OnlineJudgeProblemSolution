#include<stdio.h>
int main()
{
    int i,j,a,t,n[100],s1=0,s2;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        scanf("%d",&n[i]);
    }
    for(i=1;i<=a;i++)
    {
        for(j=i;j<=a;j++)
        {
            if(n[i]<n[j]){
                t=n[j];
                n[j]=n[i];
                n[i]=t;
            }
        }
    }
    for(i=1;i<=a;i++){
        s1=s1+n[i];
        s2=0;
        for(j=i+1;j<=a;j++){
            s2=s2+n[j];
        }
        if(s1>s2) break;
    }
    printf("%d\n",i);
    return 0;
}
