#include <stdio.h>
#include <math.h>

int main()
    {
    int T,x,i,j,m;
    long int w;
    scanf("%d",&T);
    for(x =0; x<T; x++) {

            scanf("%ld",&w);
            if(w%2!=0)
                printf("Case %d: Impossible\n",x+1);
            else {
                    m = 1;
                    while(w%2==0) {
                            m*=2;
                            w/=2;

                            }
                            printf("Case %d: %ld %d\n",x+1,w,m);
                    }

            }
    return 0;
    }
