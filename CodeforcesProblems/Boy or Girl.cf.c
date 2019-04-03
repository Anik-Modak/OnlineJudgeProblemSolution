#include<stdio.h>
#include<string.h>

int main()
{
    char c[105];
    int i,j,t,n,count=0;
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){
        for(j=i;j<strlen(c);j++){
            if(c[i]<c[j]){
                t=c[j];
                c[j]=c[i];
                c[i]=t;
            }

        }
    }
    for(i=0;i<strlen(c);i=i+n){
        n=0;
       for(j=i;j<strlen(c);j++){
            if(c[i]==c[j]) n++;

       }
        count++;
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
}
