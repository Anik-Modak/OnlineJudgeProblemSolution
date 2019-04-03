#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,p=1;
    cin>>n;
    for(int i=0; i<811; i++)
    {
        for(int j=0; j<8101; j++)
        {
            m=i*1234567+j*123456;
            if(n>=m&&(n-m)%1234==0) p=0;
        }
    }
    if(p) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

