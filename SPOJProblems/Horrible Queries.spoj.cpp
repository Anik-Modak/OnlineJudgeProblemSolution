//Anik_Modak
#include<bits/stdc++.h>
#define INF INT_MAX
#define ll long long
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

struct info
{
    ll prop, sum;
} tree[mx * 3];

void update(int node, int b, int e, int i, int j, ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }

    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;

    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node].sum = tree[node].prop = 0;
        return;
    }

    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
    tree[node].prop = tree[Left].prop + tree[Right].prop;
}

ll query(int node, int b, int e, int i, int j, ll carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}

int main()
{
    //input();
    int t, ca;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n, q;
        scanf("%d %d",&n, &q);

        init(1, 1, n);
        while(q--)
        {
            int x, i, j;
            scanf("%d",&x);

            if(x==1)
            {
                scanf("%d %d",&i, &j);
                printf("%lld\n",query(1, 1, n, i, j));
            }
            else
            {
                ll v;
                scanf("%d %d %lld",&i, &j, &v);
                update(1, 1, n, i, j, v);
            }
        }
    }
    return 0;
}
