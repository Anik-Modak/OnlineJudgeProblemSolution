//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,a[1000];
    cin>>n>>m;
    for(i= 0; i<m; ++i) cin>>a[i];

    sort(a,a+m);
    int min=0,num=a[0],k=0;

    for(i=0; i<n; ++i)
    {
        min+=num;
        num-= 1;
        if(num==0) num=a[++k];
    }

    int max=0;
    for(i=0; i<n; i++)
    {
        sort(a,a+m);
        max+=a[m-1];
        a[m-1]--;
    }
    cout<<max<<" "<<min<<endl;
    return 0;
}
