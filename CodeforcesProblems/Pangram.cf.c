#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,p,j;
    char c[105];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        scanf("%c",&c[i]);
    }
    if(n<26) printf("NO\n");
    else{
        for(i=0;i<26;i++){
            p=0;
            for(j=0;j<n;j++){
                if(c[j]==('A'+i)||c[j]==('a'+i)) p=1;
            }
            if(p==0)break;
        }
        if(p==0) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
