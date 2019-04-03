#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p=1;
    cin>>n;

    int ar[n],i;
    for(i=0; i<n; i++) cin>>ar[i];
    getchar();

    string a;
    for(i=0; i<n; i++)
    {
        int c=0;
        getline(cin,a);
        for(int j=0; j<a.size(); j++)
            if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='y') c++;
        if(ar[i]!=c) p=0;
    }
    if(p) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}


