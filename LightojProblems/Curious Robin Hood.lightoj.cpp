//Anik_Modak
#include<bits/stdc++.h>
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

int arr[mx];
int tree[mx * 3];

void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = tree[Left] + tree[Right];
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1 + p2;
}

void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
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

        for(int i=1; i<=n; i++)
            scanf("%d",&arr[i]);

        init(1, 1, n);
        printf("Case %d:\n",ca);

        while(q--)
        {
            int x, i, j;
            scanf("%d",&x);

            if(x==1)
            {
                scanf("%d",&i);
                printf("%d\n",arr[i+1]);
                update(1, 1, n, i+1, 0);
                arr[i+1]=0;
            }
            else if(x==2)
            {
               scanf("%d %d",&i, &j);
               update(1, 1, n, i+1, arr[i+1]+j);
               arr[i+1]+=j;
            }
            else
            {
                scanf("%d %d",&i, &j);
                printf("%d\n",query(1, 1, n, i+1, j+1));
            }
        }
    }
    return 0;
}
