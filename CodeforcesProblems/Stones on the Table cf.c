#include<stdio.h>
int main()
{
    char c[100];
    int n,i,a;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        scanf("%c",&c[i]);
    }
    a=0;
    for(i=0;i<n;i++){
       if(c[i]==c[i+1]){
           a++;
       }
    }
    printf("%d\n",a);
    return 0;
}
