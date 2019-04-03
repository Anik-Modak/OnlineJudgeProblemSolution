//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    //freopen("input.txt","r",stdin);
    while(cin>>n)
    {
        int d,a[n],ch=1;
        map<int,int>mp;

        cin>>a[0];
        for(int i=1; i<n; i++)
        {
            cin>>a[i];
            d=abs(a[i]-a[i-1]);
            mp[d]++;
        }

        for(int i=1; i<n; i++) if(mp[i]==0) ch=0;

        if(ch) cout<<"Jolly"<<endl;
        else cout<<"Not jolly"<<endl;
    }
}
