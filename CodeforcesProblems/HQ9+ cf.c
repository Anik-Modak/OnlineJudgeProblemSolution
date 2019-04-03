#include<stdio.h>
#include<string.h>
int main()
{
    int i,p=0;
    char c[105];
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){
        if(c[i]=='H') p=1;
        if(c[i]=='Q') p=1;
        if(c[i]=='9') p=1;
        if(c[i]=='+'&&(c[i-1]==('0'-'9')||c[i+1]==('0'-'9'))) p=1;
        if(p==1) break;
    }
    if(p==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
