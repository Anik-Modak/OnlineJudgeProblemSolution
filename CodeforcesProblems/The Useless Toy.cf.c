#include<stdio.h>
int main()
{
    char c[3];
    long long int r,n;
    scanf("%[^\n]s",c);
    scanf("%lld",&n);
    r=n%4;
    if((c[0]==118||c[0]==94)&&(c[2]==60||c[2]==62)) printf("cw\n");
    else if((c[2]==118||c[2]==94)&&(c[0]==60||c[0]==62)) printf("ccw\n");
    else printf("undefined\n");
    return 0;
}
