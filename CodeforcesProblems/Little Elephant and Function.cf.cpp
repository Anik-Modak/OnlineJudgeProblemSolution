//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int a[1005];
void fn(int x)
{
    if(x==1) return;

    swap(a[x],a[x-1]);
    fn(x-1);
}

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
        a[i] = i;

    fn(n);
    for(int i=1; i<=n; i++)
        cout<<a[i]<<" ";
    cout<<endl;

    return 0;
}

