#include<stdio.h>
#include<string.h>
int main()
{
    char c1[105],c2[105],c3[105];
    int i,n,j;
    scanf("%s",c1);
    scanf(" %s",c2);
    n=strlen(c1);
    for(i=n-1,j=0;i>=0;i--,j++){
        c3[j]=c1[i];
    }
    c3[j]='\0';
    if((strcmp(c3,c2)==0))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
