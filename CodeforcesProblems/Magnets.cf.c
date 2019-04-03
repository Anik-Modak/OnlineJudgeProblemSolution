#include<stdio.h>
int main()
{
    int n,i,p,q,cou=1;
    char c[5];
    scanf("%d",&n);
    getchar();
    for(i=1;i<=n;i++){
        scanf("%s",c);
        if(c[0]=='1')p=1;
        else p=0;
        if(i==1)q=p;
        if(q!=p){
            cou++;
            q=p;
        }
    }
    printf("%d\n",cou);
    return 0;
}
