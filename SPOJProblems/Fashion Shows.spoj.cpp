//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n, sum = 0;
        scanf("%d",&n);

        int a[n], b[n];
        for(int i=0; i<n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);

        for(int i=0; i<n; i++)
            scanf("%d",&b[i]);
        sort(b,b+n);

        for(int i=0; i<n; i++)
        {
            sum += (a[i]*b[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
