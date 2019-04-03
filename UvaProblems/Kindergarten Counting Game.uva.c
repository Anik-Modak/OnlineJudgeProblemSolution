#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,s;
    char c[10000];
    while(gets(c)){
        n=strlen(c);
        s=0;
        for(i=0;i<n;i++){
            if((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')){
                if((c[i+1]<65)||(c[i+1]>91&&c[i+1]<97)) s++;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
