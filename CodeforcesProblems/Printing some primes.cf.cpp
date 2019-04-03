#include<bits/stdc++.h>
using namespace std;
vector<int> a(99999990);
int main(){
    int i,j,n;
    n=sqrt(99999990);
     for(i=23;i<=n;i+=2){
        if(a[i]==0&&i%2!=0){
        for(j=i+i;j<=99999990;j=j+i)
            if(j%i==0) a[j]=1;
        }
    }
    for(i=1;i<=99999990;i++){
        if(i%2==0&&i!=2) a[i]=1;
        if(i%3==0&&i!=3) a[i]=1;
        if(i%5==0&&i!=5) a[i]=1;
        if(i%7==0&&i!=7) a[i]=1;
        if(i%11==0&&i!=11) a[i]=1;
        if(i%13==0&&i!=13) a[i]=1;
        if(i%17==0&&i!=17) a[i]=1;
        if(i%19==0&&i!=19) a[i]=1;
        if(a[i]==0) printf("%d\n",i);
    }
    return 0;
}
