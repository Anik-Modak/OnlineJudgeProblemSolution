#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,a=0;
    char c[205];
    scanf("%s",c);
    for(i=0;i<strlen(c);i++)
    {
        if(c[i]=='W'&&c[i+1]=='U'&&c[i+2]=='B'){
            i=i+2;
            if(a==1) printf(" ");
            a=0;
        }
        else{
            printf("%c",c[i]);
            a=1;
        }
    }
    return 0;
}
