#include<bits/stdc++.h>
using namespace std;
int a[1000000]={0},b[1000000];
int main(){
    int i,j,t,n;
    for(i=2;i*i<=1000000;i++){
        for(j=i+i;j<=1000000;j=j+i){
            if(j%i==0) a[j]=1;
        }
    }
    for(i=2,j=0;i<=1000000;i++)
        if(a[i]==0) b[++j]=i;
    cin>>t;
    while(t--){
        scanf("%d",&n);
        printf("%d\n",b[n]);
    }
    return 0;
}

