#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a[7];
    for(i=1;i<=6;i++)  cin>>a[i];

    int j,k=0,b[3],d,c,mx=0;

    for(i=1;i<=6;i++)
    {
        c=0;
        for(j=1;j<=6;j++) if(a[i]==a[j]) c++;
        if(mx<=c){
            mx=c;
            d=a[i];
        }
    }
    if(mx<4) printf("Alien\n");
    else{
        for(j=1,c=0;j<=6;j++){
            if(d!=a[j]) b[++k]=a[j];
            else c++;
            if(c>4) b[++k]=a[j];
        }
        if(b[1]!=b[2]) printf("Bear\n");
        else printf("Elephant\n");
    }
}
