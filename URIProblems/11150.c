#include<stdio.h>
int main()
{
    int x,z,c=0,s;
    scanf("%d",&x);
    for(;;)
    {
        scanf("%d",&z);
        if(z>x)
                break;
    }
    for(s=0;s<=z;)
    {
        s=s+x;
        x++;
        c=c+1;
    }
    printf("%d\n",c);
return;
}
