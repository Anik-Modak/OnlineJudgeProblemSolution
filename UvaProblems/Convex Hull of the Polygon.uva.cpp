//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define MX 100005
using namespace std;

struct Point
{
    int x, y;
} pnts[MX], Stk[MX];

int orientation(Point p, Point q, Point r)
{
    return (r.y-p.y)*(q.x-p.x)-(q.y-p.y)*(r.x-p.x);
}

bool cmp(Point a, Point b)
{
    if(a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

int convexHull(int n, Point p[], Point Stk[])
{
    sort(p, p+n, cmp);
    int m = 0, t;
    for(int i = 0; i < n; i++)
    {
        while(m >= 2 && orientation(Stk[m-2], Stk[m-1], p[i]) <= 0)
            m--;
        Stk[m++] = p[i];
    }

    t = m+1;
    for(int i = n-1; i >= 0; i--)
    {
        while(m >= t && orientation(Stk[m-2], Stk[m-1], p[i]) <= 0)
            m--;
        Stk[m++] = p[i];
    }
    return m - 1;
}

int main()
{
    int cas=-1;
    char s[2000];
    while(gets(s))
    {
        sscanf(s, "%d, %d", &pnts[0].x, &pnts[0].y);
        if(++cas) puts("");

        int n=1, mrk=-1;
        while(gets(s)&&s[0]!='\0')
        {
            sscanf(s, "%d, %d", &pnts[n].x, &pnts[n].y);
            n++;
        }

        int id = convexHull(n,pnts,Stk);
        for(int i=0; i<n && mrk==-1; i++)
        {
            for(int j=0; j<id; j++)
                if(Stk[j].x==pnts[i].x && Stk[j].y == pnts[i].y)
                {
                    mrk = j;
                    break;
                }
        }

        for(int i=mrk; i<id; i++)
            cout<<Stk[i].x<<", "<<Stk[i].y<<endl;

        for(int i=0; i<=mrk; i++)
            cout<<Stk[i].x<<", "<<Stk[i].y<<endl;
    }
    return 0;
}
