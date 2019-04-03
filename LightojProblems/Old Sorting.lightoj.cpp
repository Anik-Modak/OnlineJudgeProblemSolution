#include<bits/stdc++.h>
#define mx 1000005
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        cin>>n;
        int i,a[n+5],c=0;
        vector<int>v;
        for(i=1; i<=n; i++){
            cin>>a[i];
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        for(i=1; i<=n; i++){
            if(a[i]==v[i-1]) continue;
            else{
                if(a[a[i]]==i) swap(a[i],a[a[i]]);
                else{
                    for(int j=i; j<=n; j++)
                        if(v[i-1]==a[j]) swap(a[i],a[j]);
                }
                c++;
            }
        }
        printf("Case %d: %d\n",ca,c);
    }
}




