#include<stdio.h>
#include<string.h>
int main()
{
    char c[100];
    while(scanf(" %[^\n]",c)!=EOF){
        printf("%s\n",c);
    }
    return 0;
}
