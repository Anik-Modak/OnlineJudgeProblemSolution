#include<stdio.h>
#include<string.h>
char c[1000000];

int main()
{
    int i,j,n,co=0;
    scanf("%s",c);
    int a[26]={0};
    for(i=0;i<strlen(c);i++){
        int indx=c[i]-97;
        a[indx]=1;
    }

    for(i=0; i<26; i++)
        if(a[i]==1) co++;

    printf("%d\n",co);
    return 0;
}

