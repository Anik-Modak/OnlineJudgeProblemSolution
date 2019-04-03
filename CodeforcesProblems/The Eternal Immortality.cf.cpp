//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int LastDigit(long long  A, long long  B)
{
    int var = 1;
    if (A == B)
        return 1;

    else if ((B - A) >= 5)
        return 0;

    else
    {
        for (long long  i = A + 1; i <= B; i++)
            var = (var * (i % 10)) % 10;
        return var % 10;
    }
}

int main()
{
    long long a, b;
    cin>>a>>b;

    int ans = LastDigit(a,b);
    cout<<ans<<endl;
}

