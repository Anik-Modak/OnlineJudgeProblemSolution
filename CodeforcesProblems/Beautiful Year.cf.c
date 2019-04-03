#include<stdio.h>
int digit(int y){
    int a,b,c,d,p,q;
    l:a=y/1000;
    p=y%1000;
    b=p/100;
    q=p%100;
    c=q/10;
    d=q%10;
    if(a==b||a==c||a==d||b==c||b==d||c==d){
        y++; goto l;
    }
    else return y;
}
int main()
{
    int x,y;
    scanf("%d",&y);
    y=y+1;
    x=digit(y);
    printf("%d\n",x);
    return 0;
}
