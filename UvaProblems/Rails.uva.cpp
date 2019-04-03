#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cas=0;
    freopen("input.txt","r",stdin);

    while(cin>>n && n)
    {
        if(cas) cout<<endl;
        ++cas;

        int a[n];
        while(cin>>a[0] && a[0])
        {
            bool ck = 1;
            vector<int>v;
            v.push_back(a[0]);

            for(int i=1; i<n; i++)
            {
                cin>>a[i];
                v.push_back(a[i]);
            }

            sort(v.begin(),v.end());
            if(a[0]==1)
            {
                for(int i=0; i<n; i++)
                    if(v[i]!=a[i])
                        ck=0;
            }
            else
            {
                reverse(v.begin(),v.end());
                for(int i=0; i<n; i++)
                    if(v[i]!=a[i])
                        ck=0;
            }

            if(ck)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}

