#include<stdio.h>
int main()
{
    int i,n,max,c=0,min;
    scanf("%d",&n);
    int a[n+1];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i==0){
            max=a[i];
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
            c++;
        }
        else if(min>a[i]){
            min=a[i];
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
