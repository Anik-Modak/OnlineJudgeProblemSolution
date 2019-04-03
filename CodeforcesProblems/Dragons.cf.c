#include<stdio.h>
int main()
{
    int s,n,m,i,j,tm,p=0;
    scanf("%d%d",&s,&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);
    for(i=0;i<n;i++){
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j]){
                tm=a[j];
                a[j]=a[i];
                a[i]=tm;
                tm=b[j];
                b[j]=b[i];
                b[i]=tm;
            }
        }
        if(s>a[i]) s=s+b[i];
        else p=1;
    }
    if(p==1) printf("NO\n");
    else printf("YES\n");
    return 0;
}
