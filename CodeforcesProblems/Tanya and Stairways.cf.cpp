//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int cnt=0;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(a[i]==1&&cnt){
            v.push_back(cnt);
            cnt=0;
        }
        cnt++;
    }
    if(cnt) v.push_back(cnt);

    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        if(i==v.size()-1) cout<<v[i]<<endl;
        else cout<<v[i]<< " ";
    }
}
