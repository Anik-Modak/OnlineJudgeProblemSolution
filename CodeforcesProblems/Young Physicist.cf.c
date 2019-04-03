#include<stdio.h>
int main()
{
    int i,n,x,y,z,s1=0,s2=0,s3=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d%d",&x,&y,&z);
        s1=s1+x;
        s2=s2+y;
        s3=s3+z;
    }
    if(s1==0&&s2==0&&s3==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
