#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,x,len;
    char c[5];
    scanf("%d",&t);
    x=0;
    for(i=1;i<=t;i++){
        scanf("%s",c);
        len=strlen(c);
        if(c[0]=='+')
           ++x;
        else if (c[len-1]=='+')
            x++;
        else if(c[0]=='-')
           --x;
        else
           x--;
    }
    printf("%d\n",x);
    return 0;
}
