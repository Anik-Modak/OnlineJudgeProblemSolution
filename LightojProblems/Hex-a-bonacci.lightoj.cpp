#include<bits/stdc++.h>
using namespace std;

int a1, b, c, d, e, f;
long long a[100005];

long long fn(int n) {
    a[0]=a1;
    a[1]=b;
    a[2]=c;
    a[3]=d;
    a[4]=e;
    a[5]=f;
    for(int i=6;i<=n;i++){
        a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%10000007;
    }
    if(n<6) a[n]=a[n]%10000007;
    return a[n];
}
int main() {
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        scanf("%d %d %d %d %d %d %d", &a1, &b, &c, &d, &e, &f, &n);
        printf("Case %d: %lld\n", ++caseno,fn(n));
    }
    return 0;
}
