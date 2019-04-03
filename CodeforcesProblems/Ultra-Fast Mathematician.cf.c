#include<stdio.h>
#include<string.h>
int main()
{
    char c1[105],c2[105];
    int i;
    scanf("%s",c1);
    scanf("%s",c2);
    for(i=0;i<strlen(c1);i++){
        if(c1[i]==c2[i])
            printf("0");
        else
            printf("1");
    }
    printf("\n");
    return 0;
}
