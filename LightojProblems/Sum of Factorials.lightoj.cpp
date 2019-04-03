#include<bits/stdc++.h>
using namespace std;

long double fact(int n)
{
    if(n<=1) return 1;
    else return n*fact(n-1);
}

int main()
{
    int ca,t;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long a[25],n,i;
        vector<int>v;
        cin>>n;
        for(i=0;i<=20;i++) a[i]=fact(i);

        for(i=20; i>=0; i--)
        {
            if(a[i]<=n){
                n-=a[i];
                v.push_back(i);
            }
        }
        if(n) printf("Case %d: impossible\n",ca);
        else{
            sort(v.begin(),v.end());
            printf("Case %d: ",ca);
            for(i=0;i<v.size();i++)
            {
                if(i==v.size()-1) printf("%d!\n",v[i]);
                else printf("%d!+",v[i]);
            }
        }
    }
    return 0;
}


