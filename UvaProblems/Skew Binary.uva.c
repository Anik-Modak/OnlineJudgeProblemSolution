#include<stdio.h>
#include<string.h>
int main()
{
    int power(long long a,long long n)
    {
        if(n==0)return 1;
        long long ret=power(a*a,n/2);
        if(n%2==1)ret=ret*a;
        return ret;
    }
    char c[10000];
    int i,j,n,m,s;
    while(1){
        scanf("%s",c);
        if(c[0]-'0'==0) break;
        n=strlen(c);
        s=0;
        for(i=0,j=n-1;i<n;j--,i++){
            m=c[j]-'0';
            s=s+m*(power(2,i+1)-1);
       }
       printf("%d\n",s);
    }
    return 0;
}
