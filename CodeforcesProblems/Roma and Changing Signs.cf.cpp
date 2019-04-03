//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;

    int p[n], sum = 0;
    for(int i=0; i<n; i++)
        cin>>p[i];

    sort(p, p+n);
    for(int i=0; i<n; i++)
        if(p[i]<0 && k>0) p[i] = -p[i], --k;

    int ter = 2;
    while(ter--)
    {
        sort(p, p+n);
        for(int i=0; i<n; i++)
        {
            if(k>0)
            {
                if(k%2) p[i] *= (-1), k-=3;
                else k -= 2;
            }
        }
    }
    for(int i=0; i<n; i++)
        sum += p[i];

    cout<<sum<<endl;
    return 0;
}
