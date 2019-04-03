//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;

    int a[n],stop;
    double s=0,avg;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    sort(a,a+n);

    avg=s/n;
    stop=avg;
    if(!(avg-stop<0.5)) stop++;

    while(stop<5&&ans<n)
    {
        s+=(5-a[ans]);
        ans++;
        avg=s/n;
        stop=avg;
        if(!(avg-stop<0.5)) stop++;
    }
    cout<<ans<<endl;
}
