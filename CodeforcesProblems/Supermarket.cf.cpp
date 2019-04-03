#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    double a,b,mn=100000000;
    while(n--) {
        cin>>a>>b;
        if(a/b<mn) mn=a/b;

    }
    printf("%.8lf\n",m*mn);
    return 0;
}

