//Anik_Modak
#include<bits/stdc++.h>
#define PI 3.14159265358979323846
#define IN freopen("input.txt","r",stdin);
#define MX 100005
#define ll long long
using namespace std;

struct point
{
    ll x,y;
} pnts[MX],ara[MX];;

point pivot;
ll dist(point p1,point p2)
{
    return ((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}

int orientation(point p,point q,point r)
{
    ll val = ((q.y-p.y)*(r.x-q.x) - (r.y-q.y)*(q.x-p.x));
    if(val==0)
        return 0;
    if(val>0)
        return 1;
    return 2;
}

bool cmp(point p1,point p2)
{
    ll o = orientation(pivot,p1,p2);
    if(o==0)
        return dist(pivot,p1) < dist(pivot,p2);
    return (o==2);
}

inline point nextToTop(stack<point>&st)
{
    point p,res;
    p = st.top();
    st.pop();
    res = st.top();
    st.push(p);
    return res;
}

int total;
bool convexHull(int n)
{
    stack<point>st;
    int mn=0, in=0;

    for(int i=1; i<n; i++)
    {
        if(ara[i].y < ara[mn].y) mn = i;
        else if(ara[i].y==ara[mn].y && ara[i].x < ara[mn].x) mn=i;
    }

    swap(ara[0],ara[mn]);
    pivot = ara[0];
    sort(ara+1,ara+n,cmp);

    for(int i=1; i<n; i++)
    {
        while(i<n-1&&orientation(pivot,ara[i],ara[i+1])==0)
            i++;
        ara[++in] = ara[i];
    }

    if(in<2)
        return 0;

    st.push(ara[0]);
    st.push(ara[1]);
    st.push(ara[2]);

    for(int i=3; i<=in; i++)
    {
        while(orientation(nextToTop(st),st.top(),ara[i])!=2)
            st.pop();
        st.push(ara[i]);
    }

    in = total = st.size();
    point tmp;
    while(!st.empty())
    {
        tmp = st.top();
        st.pop();
        pnts[--in] = tmp;
    }
    return 1;
}

double angle(point p1,point p2,point p3)
{
    double a,b,c,ang;
    a = dist(p1,p2);
    b = dist(p2,p3);
    c = dist(p3,p1);

    ang = acos((a+b-c)/(2.0*sqrt(a)*sqrt(b)));
    return (ang*180.0)/PI;
}

int main()
{
    //IN
    int t, n, cas=0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            scanf("%lld %lld",&ara[i].x,&ara[i].y);
        }

        if(convexHull(n))
        {
            double ans = 180.0;
            for(int i=0; i<total; i++)
            {
               int j = (i+1) %total;
               int k = (i+2) %total;
               ans = min(ans,angle(pnts[i],pnts[j],pnts[k]));
            }
            printf("Case %d: %.6f\n",++cas,ans);
        }
        else
            printf("Case %d: 0\n",++cas);
    }
    return 0;
}
