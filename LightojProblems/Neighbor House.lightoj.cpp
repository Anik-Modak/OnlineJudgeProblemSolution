//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100000000
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int arr[n][3];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
                scanf("%d",&arr[i][j]);
        }
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<3; j++)
            {
                int mn=MAX;

                for(int k=0; k<3; k++)
                    if(j!=k) mn=min(mn,arr[i-1][k]);

                arr[i][j]+=mn;
            }
        }
        int ans=MAX;
        for(int i=0; i<3; i++)
            ans=min(ans,arr[n-1][i]);

        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}

