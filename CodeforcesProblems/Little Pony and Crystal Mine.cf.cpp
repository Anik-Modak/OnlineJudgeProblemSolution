#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i,j,r=n/2,l=n/2;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n/2+1;j++)
        {
            if(j<=r) printf("*");
            else printf("D");
        }
        if(i<=n/2) r--;
        else r++;
        for(j=n/2;j>0;j--)
        {
            if(j<=l) printf("*");
            else printf("D");
        }
        if(i<=n/2) l--;
        else l++;
        printf("\n");
    }
}
