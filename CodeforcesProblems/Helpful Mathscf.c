#include<stdio.h>
#include<string.h>
int main()
{
    char c[105];
    int n,i,j,t,c1[105];
    scanf("%s",c);
    n=strlen(c);
    for(i=0;i<n;i++){
        if(c[i]!='+'){
            c1[i]=c[i]-'0';
        }
    }
    for(i=0;i<n;i=i+2)
    {
        for(j=i;j<n;j=j+2)
        {
            if(c1[i]>c1[j])
            {
                t=c1[j];
                c1[j]=c1[i];
                c1[i]=t;
            }
        }
        c[i]=c1[i]+'0';
    }
    printf("%s\n",c);
    return 0;
}



