//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int a[1000000];
vector<int>v;

void sive()
{
    int i,j,n=1000000;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
    v.push_back(2);
    for(i=3; i<n; i+=2) if(a[i/2]==0) v.push_back(i);
}

int Prime(long long n)
{
    long long i;
    if(n!=2&&n%2==0) return 0;
    for(i=3; i<=sqrt(n); i=i+2) if(n%i==0) return 0;
    return 1;
}

int main()
{
    long long n;
    cin>>n;
    sive();

    if(n%2==0) cout<<n/2<<endl;
    else if(Prime(n)) cout<<1<<endl;
    else
    {
        long long ans;
        for(int i=0; i<v.size(); i++)
        {
            if(n%v[i]==0)
            {
                ans=(n-v[i])/2;
                break;
            }
        }
        cout<<ans+1<<endl;
    }
}
