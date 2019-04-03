#include<stdio.h>
#include<string.h>
int a[100]={0};
sum(int m){
    int i,s,n,r=0;
    for(i=1;i<=m;i++){
        n=r+a[i];
        s=n%10;
        r=n/10;
        if(i==m) a[i]=n;
        else a[i]=s;
    }
    for(i=m;i>0;i--){
        if(i==1)printf("%d\n",a[i]);
        else printf("%d",a[i]);
    }
}
int main()
{
    int i,j,m,n,max=0;
    char c[105];
    while(1){
        scanf(" %s",c);
        if(atoi(c)==0)break;
        m=strlen(c);
        if(max<m)max=m;
        for(i=m-1,j=1;i>=0;j++,i--){
            n=c[i]-'0';
            a[j]=a[j]+n;
        }
    }
    sum(max);
    return 0;
}

