#include<stdio.h>
int main()
{
    int i,x1,y1,x2,y2,t,m,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        printf("Case %d:\n",i);
        while(m--){
            scanf("%d%d",&x,&y);
            if(x1<=x&&x2>=x&&y1<=y&&y2>=y)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
