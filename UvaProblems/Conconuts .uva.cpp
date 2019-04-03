#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        if(n==-1) break;
        int i,a,j;
        for(i=sqrt(n)+1; i>=2 ;i--)
        {
            a=n;
            for(j=1; j<=i; j++){
                if(a%i!=1) break;
                a=a-a/i-1;
            }
            if(j==i+1&&a%i==0) break;
        }
        if(i==1) printf("%d coconuts, no solution\n",n);
        else printf("%d coconuts, %d people and 1 monkey\n",n,i);
    }

}




