#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca,n;
    cin>>t;
    char a[10];
    for(ca=1;ca<=t;ca++)
    {
        scanf("%d%s",&n,a);
        printf("Case %d: ",ca);
        n=n%3;
        if(strcmp(a,"Alice")==0){
            if(n==1) puts("Bob");
            else puts("Alice");
        }
        else{
            if(n) puts("Bob");
            else puts("Alice");
        }
    }
}


