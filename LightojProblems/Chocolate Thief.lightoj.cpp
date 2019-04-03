#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,n;
    cin>>t;

    for(c=1;c<=t;c++)
    {
        cin>>n;
        string a[n];
        int i,l,w,h,s[n];

        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>l>>w>>h;
            s[i]=l*w*h;
            mp[s[i]]++;
        }
        if(mp.size()==1)printf("Case %d: no thief\n",c);
        else{
            int x,y,mx=0,mn=10000000;
            for(i=0;i<n;i++)
            {
                if(mp[s[i]]==1){
                    if(s[i]>mx){
                        x=i;
                        mx=s[i];
                    }
                    if(s[i]<mn){
                        y=i;
                        mn=s[i];
                    }
                }
            }
            cout<<"Case "<<c<<": "<<a[x]<<" took chocolate from "<<a[y]<<endl;
        }
    }
}


