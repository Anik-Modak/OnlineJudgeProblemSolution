#include<stdio.h>
int main()
{
    int a,n,i,min;
    scanf("%d",&n);
    int j1=1,j2=1,j3=1,b[4]={0},a1[n],a2[n],a3[n];
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a==1){
            a1[j1++]=i;
            b[1]++;
        }
        if(a==2){
            b[2]++;
            a2[j2++]=i;
        }
        if(a==3){
            b[3]++;
            a3[j3++]=i;
        }
    }
    for(i=1;i<=3;i++){
        if(i==1) min=b[i];
        if(min>b[i]) min=b[i];
    }
    if(min==0) printf("%d\n",min);
    else{
        printf("%d\n",min);
        for(i=1;i<=min;i++)
            printf("%d %d %d\n",a1[i],a2[i],a3[i]);
    }
    return 0;
}
