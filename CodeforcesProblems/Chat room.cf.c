#include<stdio.h>
#include<string.h>
int main()
{
    int i,r=0,q=0;
    char c[105];
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){
        if(c[i]=='h'){
            for(;i<strlen(c);i++){
                if(c[i]=='e'){
                    for(;i<strlen(c);i++){
                        if(c[i]=='l')q++;
                        else if(c[i]=='o')r=1;
                    }
                }
            }
        }
    }
    if(q>1&&r==1)
         printf("YES\n");
    else
         printf("NO\n");
    return 0;
}
