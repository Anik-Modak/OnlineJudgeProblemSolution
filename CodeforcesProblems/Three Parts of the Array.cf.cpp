//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long a[n],mx=0;
    for(int i=0; i<n; i++) cin>>a[i];

    long long s1=a[0],s2=a[n-1],be=0,en=n-1;

    while(be<en)
    {
        if(s1==s2) mx=max(mx,s1);
        if(s1<s2) s1+=a[++be];
        else s2+=a[--en];
    }
    cout<<mx<<endl;
}


