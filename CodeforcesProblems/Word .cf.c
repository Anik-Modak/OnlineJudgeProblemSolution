#include<stdio.h>
#include<string.h>
int main()
{
    int i,u=0,l=0,n;
    char c[105];
    scanf("%s",c);
    n=strlen(c);
    c[n]='\0';
    for(i=0;i<n;i++){
        if(c[i]<'a') u++;
        else l++;
    }
    if(u>l){
        for(i=0;i<n;i++){
            if(c[i]>='a')
                c[i]=c[i]-('a'-'A');
            printf("%c",c[i]);
        }
    }
    else{
        for(i=0;i<n;i++){
            if(c[i]<'a')
                c[i]=c[i]+('a'-'A');
          printf("%c",c[i]);
        }
    }
    printf("\n");
    return 0;
}
