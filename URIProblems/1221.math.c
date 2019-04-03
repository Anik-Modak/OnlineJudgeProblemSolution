#include<stdio.h>
#include<math.h>
int Prime(int n)
{
    int i, p=1;
    for(i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            p=0;
            break;
        }
    }
    return p;
}
int main()
{
     int t,n;
     scanf("%d",&t);
     while(t--){
        scanf("%d",&n);
        if(Prime(n)) printf("Prime\n");
        else printf("Not Prime\n");
     }
     return 0;
}

