#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    long long a[n],s=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    if(s%2==0) cout<<s<<endl;
    else{
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0){
                s=s-a[i];
                break;
            }
        }
        cout<<s<<endl;
    }
}

