#include<stdio.h>
#include<string.h>
int main()
{
    char c[105];
    int n,i,j=0;
    scanf("%s",c);
    n=strlen(c);
    for(i=1;i<n;i++)
    {
        if(c[i]>='a'){
            j=1;
            break;
        }
    }
    if(j!=1){
        for(i=0;i<n;i++){
            if (c[i]>='a')
                c[i]=c[i]-('a'-'A');
            else
                c[i]=c[i]+('a'-'A');
        }
    }
    printf("%s\n",c);
    return 0;
}
