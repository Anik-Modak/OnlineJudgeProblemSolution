#include<stdio.h>
#include<string.h>
int a[28],m=1;
fn(char c[])
{
    int n,i,j;
    n=strlen(c);
    for(i=0;i<26;i++){
        if(m==1) a[i]=0;
        for(j=0;j<n;j++){
            if(c[j]==('A'+i)) a[i]++;
        }
    }
}
int main()
{
    int i,j,n=0,b[28];
    char c[105],c1[105],c2[105];
    scanf("%s",c1);
    scanf(" %s",c2);
    scanf(" %s",c);
    fn(c1);
    m=2;
    fn(c2);
    for(i=0;i<26;i++){
        b[i]=0;
        for(j=0;j<strlen(c);j++){
            if(c[j]==('A'+i)) b[i]++;
        }
        if(a[i]!=b[i]){
            n=1;break;
        }
    }
    if(n==1) printf("NO\n");
    else printf("YES\n");
    return 0;
}

