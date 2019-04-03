//Anik_Modak
#include<bits/stdc++.h>
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define MX 100005
using namespace std;

int arr[MX], treeMAX[MX * 3], treeMIN[MX * 3];

void init(int node, int b, int e)
{
    if (b == e)
    {
        treeMIN[node]=treeMAX[node]=arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);
    treeMIN[node] = min(treeMIN[Left] , treeMIN[Right]);
    treeMAX[node] = max(treeMAX[Left] , treeMAX[Right]);
}

int queryMAX(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return -1;
    if (b >= i && e <= j)
        return treeMAX[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    int p1 = queryMAX(Left, b, mid, i, j);
    int p2 = queryMAX(Right, mid + 1, e, i, j);
    return max(p1, p2);
}

int queryMIN(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INF;
    if (b >= i && e <= j)
        return treeMIN[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    int p1 = queryMIN(Left, b, mid, i, j);
    int p2 = queryMIN(Right, mid + 1, e, i, j);
    return min(p1, p2);
}

int main()
{
    //input();
    int t, ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n, d;
        scanf("%d %d",&n, &d);

        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);
        init(1, 1, n);

        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            int mx = queryMAX(1, 1, n, i, i+d-1);
            int mn = queryMIN(1, 1, n, i, i+d-1);

            //cout<<mx<< " "<<mn<<endl;
            ans = max(ans, mx-mn);
        }
        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}
