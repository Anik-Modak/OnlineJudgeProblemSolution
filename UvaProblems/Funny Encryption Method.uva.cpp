#include<bits/stdc++.h>
using namespace std;

int binary(int n)
{
    int i,c=0;
    for(i = 0; i < sizeof(int)*8; i++ ) if ((n>> i) & 1) c++;
    return c;
}
int main()
{
    char a[50];
    int t,n1,n2,b1,b2;
    cin>>t;
    while(t--){
        cin>>a;
        sscanf(a,"%d",&n1);
        sscanf(a,"%x",&n2);
        b1=binary(n1);
        b2=binary(n2);
        cout<<b1<<" "<<b2<<endl;
    }
}
