//Anik_Modak
#include<bits/stdc++.h>
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

int arr[mx], tree[mx * 3];

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = min(tree[Left] , tree[Right]);
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return INF;
    if (b >= i && e <= j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);

    return min(p1, p2);
}

int main()
{
    int t, ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n, q;
        scanf("%d %d",&n, &q);

        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);

        init(1, 1, n);
        printf("Case %d:\n",ca);

        while(q--)
        {
            int i, j;
            scanf("%d %d",&i, &j);
            printf("%d\n",query(1, 1, n, i, j));
        }
    }
    return 0;
}
