#include<stdio.h>
int main()
{
    int a=0,d=0,n;
    char c;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        scanf("%c",&c);
        if(c=='D') d++;
        if(c=='A') a++;
    }
    if(a>d) printf("Anton\n");
    else if(a<d) printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}
