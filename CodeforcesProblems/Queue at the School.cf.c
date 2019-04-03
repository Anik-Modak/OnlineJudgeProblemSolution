#include<stdio.h>
int main()
{
    long long i,n,t;
    scanf("%lld%lld",&n,&t);
    getchar();
    char c[n];
    for(i=0;i<n;i++){
        scanf("%c",&c[i]);
    }
    c[n]='\0';
    while(t--){
        for(i=0;i<n;i++){
            if(c[i]=='B'&&c[i+1]=='G'){
                c[i]='G';
                c[++i]='B';
            }
        }
    }
    printf("%s\n",c);
    return  0;
}
