#include<stdio.h>
#include<string.h>
int main()
{
    char c[500];
    int t,i,m,f,j;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
        gets(c);
        f=0; m=0;
        for(j=0;j<strlen(c);j++){
            if(c[j]=='M')
                m++;
            if(c[j]=='F')
                f++;
        }
        if((f!=1&&m!=1)&&(f==m||f==(m+1)||m==(f+1)))
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}
