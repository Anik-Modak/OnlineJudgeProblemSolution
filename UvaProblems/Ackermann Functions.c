#include<stdio.h>
int ack(int m, int n)
{
    if (m == 0){
        return n+1;
    }
    else if(m > 0){
        ack(m-1, 1);
    }
    else if((m > 0) && (n > 0)){
        ack(m-1, ack(m, n-1));
    }
    printf("%d ",n);
}
int main()
{
    int m,n,x;
    scanf("%d%d",&m,&n);
    x=ack(m,n);
    printf("%d\n",x);
    return 0;
}

