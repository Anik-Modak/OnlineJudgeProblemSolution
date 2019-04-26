//Anik_Modak
#include<bits/stdc++.h>
#define INF INT_MAX
#define ll long long
#define input() freopen("input.txt","r",stdin)
#define mx 50005
using namespace std;

int arr[mx];
struct data
{
    ll sum, pref, suff, ans;
} tree[mx * 3];

data make_data (ll val)
{
    data res;
    res.sum = val;
    res.pref = res.suff = res.ans = val;
    return res;
}

data combine (data l, data r)
{
    data res;
    res.sum = l.sum + r.sum;
    res.pref = max (l.pref, l.sum + r.pref);
    res.suff = max (r.suff, r.sum + l.suff);
    res.ans = max (max (l.ans, r.ans), l.suff + r.pref);
    return res;
}

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = make_data(arr[b]);
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] =  combine (tree[Left],tree[Right]);
}

data query(int node, int b, int e, int i, int j)
{
    if (b == i && e == j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    if (j <= mid)
        return query(Left, b, mid, i, j);
    if (i > mid)
        return query(Right, mid + 1, e, i, j);

    return combine (
               query (Left, b, mid, i, mid),
               query (Right, mid+1, e, mid+1, j)
           );
}

int main()
{
    int n, q;
    scanf("%d ",&n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }

    init(1, 1, n);
    scanf("%d", &q);

    while(q--)
    {
        int x, i, j;
        scanf("%d %d",&i, &j);

        ll result = query(1, 1, n, i, j).ans;
        printf("%lld\n",result);
    }
    return 0;
}

