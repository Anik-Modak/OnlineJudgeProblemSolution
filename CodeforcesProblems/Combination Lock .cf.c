#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,a,b,x,y,min,s=0;
    char c[1005],c1[1005];
    scanf("%d",&n);
    scanf(" %s",c);
    scanf(" %s",c1);
    for(i=0;i<n;i++){
        a=c[i]-'0';
        b=c1[i]-'0';
        if(a>b){
            x=a-b;
            y=10+b-a;
        }
        else {
            x=b-a;
            y=10+a-b;
        }
        if(x<y) min=x;
        else min=y;
        s=s+min;
    }
    printf("%d\n",s);
    return 0;
}
