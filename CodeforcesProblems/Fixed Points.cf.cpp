//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    int arr[n], cnt = 0;
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

    int ck = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==i) cnt ++;
        else if(arr[arr[i]]==i && ck)
            cnt += 2, ck  = 0;
    }

    if(cnt<n && ck) cnt++;
    printf("%d\n",cnt);
    return 0;
}
