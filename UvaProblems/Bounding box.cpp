//AnikModak
#include<bits/stdc++.h>
#define pi acos(-1)
using namespace std;

int main()
{
    int n,cas= 0;
    int i, j, k;

    while(1)
    {
        scanf("%d", &n);

        if(n==0) break;

        double ax,ay,bx,by,cx,cy;

        scanf("%lf %lf", &ax, &ay);
        scanf("%lf %lf", &bx, &by);
        scanf("%lf %lf", &cx, &cy);

        double a,b,c,d,e,f;

        a = ax - bx;
        b = ay - by;
        c = a*((ax+bx)/2) + b*((ay+by)/2);

        d = bx - cx;
        e = by - cy;
        f = d*((bx+cx)/2) + e*((by+cy)/2);

        double temx,temy,tem;

        tem = a*e - b*d;
        temx = c*e - b*f;
        temy = a*f - d*c;

        double x = temx/tem;
        double y = temy/tem;

        double th = 2*pi/n;
        double l,r,u,dn;

        l = dn = 1e+30;
        r = u = -1e+30;

        double sinth = sin(th);
        double costh = cos(th);
        double px=ax, py=ay, nx, ny;

        for(i = 0; i < n; i++)
        {
            double vx, vy;
            vx = px - x;
            vy = py - y;

            nx = x + vx*costh - vy*sinth;
            ny = y + vx*sinth + vy*costh;

            l = min(l, nx);
            r = max(r, nx);

            dn = min(dn, ny);
            u = max(u, ny);

            px=nx;
            py=ny;
        }

        double ans=(r-l)*(u-dn);
        printf("Polygon %d: %.3lf\n", ++cas,ans);
    }
    return 0;
}
