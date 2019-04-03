#include<bits/stdc++.h>
using namespace std;

int a[1000000];
int main()
{
    long long x,n=4,m=7;
    cin>>x;
    int i=1,j=3;
    a[1]=n;
    a[2]=m;
    while(a[j-1]<1000000000){
       a[j++]=a[i]*10+4;
       a[j++]=a[i]*10+7;
       i++;
    }
    for(i=1;i<=10000000;i++)
    {
        if(a[i]==x){
            cout<<i<<endl;
            break;
        }
    }
}
