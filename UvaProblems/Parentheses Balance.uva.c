#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        char a[1000];
        int m=0,i,c=0,d=0;
        gets(a);
        m=strlen(a);
        if(m>0){
            for(i=0;i<m;i++){
                if(a[i]=='(') c++;
                else if(a[i]==')') c--;
                else if(a[i]=='[') d++;
                else if(a[i]==']') d--;
            }
        }
        if(c==0&&d==0) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}


