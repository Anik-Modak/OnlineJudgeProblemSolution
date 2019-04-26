#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    vector<long long>b;
    while(cin>>n){
        b.push_back(n);
    }
    for(int i=b.size()-1;i>=0;i--)
    {
        printf("%.4lf\n",sqrt(b[i]));
    }
}
