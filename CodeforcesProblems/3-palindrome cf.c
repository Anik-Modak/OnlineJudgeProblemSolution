#include<stdio.h>
#
int main()
{
    char c='a';
    int n,i,j;
    scanf("%d",&n);
    for(i=1,j=0;i<=n;i++){
       if(j==2)
            c='b';
       if(j==4){
            c='a';
            j=0;
       }
       printf("%c",c);
       j++;
    }
    printf("\n");
    return 0;
}
