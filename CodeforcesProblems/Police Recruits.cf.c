#include<stdio.h>

int main()
{
    int i,n,c=0,a,mx=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==-1) c++;
        else  c=c-a;
        if(mx<c) mx=c;
    }
    printf("%d\n",mx);
    return 0;
}
