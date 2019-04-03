#include<stdio.h>
int digit(int n){
    int s=0,r,i=0;
    while(n>0){
        r=n%10;
        n=n/10;
        i++;
        if(r==4||r==7)
            s++;
    }
    if(i==s)
        return 1;
    else return 0;
}
int main()
{
    int l,n;
    scanf("%d",&n);
    l=digit(n);
    if(n%4==0||n%7==0||n%47==0)
        printf("YES\n");
    else if(l==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
