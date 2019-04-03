#include<stdio.h>
#include<string.h>
int main()
{
    char c[20];
    int i=1;
    while(1)
    {
        scanf("%s",&c);
        if(c[0]=='*')
            break;
        else if(c[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",i);
        else
            printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
return 0;
}

