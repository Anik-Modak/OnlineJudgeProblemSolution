//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int Prime(long long n)
{
    long long i;
    if(n!=2&&n%2==0) return 0;
    for(i=3; i<=sqrt(n+1); i=i+2) if(n%i==0) return 0;
    return 1;
}

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        long long a, b;
        cin>> a >> b;

        if(b>a) swap(a,b);

        long long ans = a - b ;

        if(ans==1 && Prime(a+b)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}


