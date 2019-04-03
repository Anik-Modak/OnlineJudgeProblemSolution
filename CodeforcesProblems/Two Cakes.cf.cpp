//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    map<int, int> mp1, mp2;
    for(int i=1; i<=2*n; i++)
    {
        cin>>a;
        if(mp1[a]) mp2[a] = i;
        else mp1[a] = i;
    }

    long long sum1 = mp1[1]-1, sum2 = mp2[1]-1;
    for(int i=2; i<=n; i++)
    {
        //cout<<mp2[i]<<" "<<mp2[i-1]<<endl;
        sum1 += abs(mp1[i-1]-mp1[i]);
        sum2 += abs(mp2[i-1]-mp2[i]);
    }
    cout<<sum1+sum2<<endl;
    return 0;
}
