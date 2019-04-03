#include<stdio.h>
#include<math.h>
int main()
{
    int N,R,i;
    float dif,min;
    i=1;
    while(1){
        scanf("%d%d",&R,&N);
        if(R==0&&N==0)break;
        if(N>=R){
            printf("Case %d: 0\n",i);
            i++;
        }
        else{
            dif=R-N;
            min=dif/N;
            if(min<=26) printf("Case %d: %0.f\n",i,min);
            else printf("Case %d: impossible\n",i);
            i++;
        }
    }
    return 0;
}
