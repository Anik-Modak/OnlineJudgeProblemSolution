//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,id,p=0;
    cin>>n;

    long long i,a[n],b[n];
    for(i=0; i<n; i++)
        cin>>a[i]>>b[i];

    long long *mx= max_element(b,b+n);
    long long *mn= min_element(a,a+n);

    for(i=0; i<n; i++)
    {
        if(a[i] == *mn&&b[i] == *mx)
        {
            p=1;
            id=i+1;
        }
    }

    if(p)
        cout<<id<<endl;
    else
        cout<<-1<<endl;
    return 0;
}
