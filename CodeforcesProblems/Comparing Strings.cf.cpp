//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;

    vector<int> v;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] != b[i])
            v.push_back(i);
    }

    if(v.size()==2) swap(a[v[0]],a[v[1]]);
    if(a==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
