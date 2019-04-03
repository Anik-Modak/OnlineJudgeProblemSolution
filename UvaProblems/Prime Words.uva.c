#include<stdio.h>
#include<string.h>
int Prime(int n)
{
    int i;
    for(i=2; i*i<=n; i++)
        if(n%i == 0) return 0;
    return 1;
}
int main()
{
    int s,n,i,m,p;
    char c[50];
    while(scanf(" %s",c)!=EOF){
        s=0;
        m=strlen(c);
        for(i=0; i<m; i++){
            if(c[i]>='a') n=c[i]-96;
            else n=c[i]-38;
            s=s+n;
        }
        p=Prime(s);
        if(p==1) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
