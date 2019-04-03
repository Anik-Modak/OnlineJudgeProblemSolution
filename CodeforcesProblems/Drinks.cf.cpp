//Anik_Modak
#include<bits/stdc++.h>

int main()
{
    int i,n,p,s=0;
    double d;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&p);
        s=s+p;
    }
    d = ((double)s/(n*100))*100;;
    printf("%.12lf\n",d);
    return 0;
}
