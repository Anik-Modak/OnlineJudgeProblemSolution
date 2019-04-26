//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define Mod 100000007
using namespace std;

ll numberOfSolutions(int total, int arr[], int len)
{
    ll temp[total+2] = {0};
    temp[0] = 1;

    for(int i=0; i < len; i++)
    {
        for(int j=1; j <= total ; j++)
        {
            if(j >= arr[i])
            {
                temp[j] = (temp[j] + temp[j-arr[i]])%Mod;
            }
        }
    }
    return temp[total];
}

int main()
{
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, k;
        scanf("%d%d",&n,&k);

        int a[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);

        long long ans = numberOfSolutions(k,a,n);
        printf("Case %d: %lld\n",++cas,ans);
    }
    return 0;
}
