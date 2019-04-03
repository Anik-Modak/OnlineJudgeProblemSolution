#include<stdio.h>
int main()
{
    int n;
    char s[100];
    while(1){
        scanf("%s",s);
        if(s[1]=='x'){}
        else{
            n=atoi(s);
            if(n<0) break;
            printf("0x%x\n",n);
        }
    }
    return 0;
}
