#include<stdio.h>
int main()
{
    int n,i,s=1;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        s=s+i;
        if(s>n) s=s-n;
        if(i==n-1) printf("%d\n",s);
        else printf("%d ",s);
    }
    return 0;
}
