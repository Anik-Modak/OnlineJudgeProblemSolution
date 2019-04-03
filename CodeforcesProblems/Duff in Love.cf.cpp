//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

vector<long long>d;
void divisor(long long n)
{
    long long i, m = sqrt(n+1);
    for(i=1; i<=m; i++)
    {
        if(i*i==n)
            d.push_back(i);
        else if(n%i==0)
        {
            d.push_back(i);
            d.push_back(n/i);
        }
    }
}

int primeFactors(long long n)
{
    int cnt = 0;
    while (n%2 == 0)
    {
        n=n/2;
        cnt ++;
    }
    if(cnt>1) return 0;

    for (int i=3; i<=sqrt(n); i=i+2)
    {
        cnt = 0;
        while(n%i==0)
        {
            n=n/i;
            cnt ++;
        }
        if(cnt>1) return 0;
    }
    return 1;
}

int main()
{
    long long n;
    cin>>n;

    divisor(n);
    sort(d.begin(),d.end());

    for(int i=d.size()-1; i>=0; i--)
    {
        //cout<<d[i]<<endl;
        if(primeFactors(d[i]))
        {
            cout<<d[i]<<endl;
            return 0;
        }
    }
    return 0;
}
