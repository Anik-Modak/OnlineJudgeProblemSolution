#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,c,i,j;
    char s[10000],t[10000];
    while(scanf("%s %s",s,t)!=EOF)
    {
        m=0;
        c=0;
        n=strlen(s);
        for(i=0;i<n;i++){
            for(j=m;j<strlen(t);j++){
                if(s[i]==t[j]){
                    c++;
                    m=j+1; break;
                }
            }
        }
        if(c==n) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
