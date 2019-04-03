#include<stdio.h>
int main()
{
    int t,x,y,z,s;
    double p;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&x,&y,&z);
        s=z*((x-y)+x)/(x+y);
        if(s<0) s=0;
        printf("%d\n",s);
    }
    return 0;
}
