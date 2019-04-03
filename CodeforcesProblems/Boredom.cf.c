 #include<stdio.h>
 int main()
 {
     int i,n,a,d,s=0,max;
     scanf("%d",&n);
     for(i=1;i<=n;i++){
        scanf("%d",&a);
        s=s+a;
     }
     d=s/n;
     max=d*n;
     printf("%d\n",max);
     return 0;
 }
