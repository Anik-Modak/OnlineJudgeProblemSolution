//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6];
    for(int i=1; i<=5; i++)
        for(int j=1; j<=5; j++)
            cin>>a[i][j];

    vector<int> v = {1,2,3,4,5};
    long long ans = a[1][2]+a[2][1]+a[2][3]+a[3][2]+ 2*(a[3][4]+a[4][3])+2*(a[4][5]+a[5][4]);
    while(next_permutation(v.begin(), v.end()))
    {
        long long sum = a[v[0]][v[1]]+a[v[1]][v[0]]+a[v[1]][v[2]]+a[v[2]][v[1]]+ 2*(a[v[2]][v[3]]+a[v[3]][v[2]])+2*(a[v[3]][v[4]]+a[v[4]][v[3]]);
        ans = max(ans, sum);
    }

    cout<<ans<<endl;
    return 0;
}
