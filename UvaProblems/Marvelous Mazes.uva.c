#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,s;
    char c[200];
    while(gets(c)){
        n=strlen(c);
        s=0;
        if(n==1&&strcmp(c,"\n")) printf("\n");
        for(i=0;i<n;i++){
            if(c[i]>='0'&&c[i]<='9') s=s+(c[i]-'0');
            else{
                if(c[i]=='!') printf("\n");
                else{
                    for(j=0;j<s;j++){
                        if(c[i]>='A'&&c[i]<='Z') printf("%c",c[i]);
                        if(c[i]=='b') printf(" ");
                        if(c[i]=='*') printf("*");
                    }
                }
                s=0;
            }
        }
        printf("\n");
    }
    return 0;
}
