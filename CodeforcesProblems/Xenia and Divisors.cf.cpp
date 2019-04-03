//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a, ck = 0;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a==5||a==7)
            ck = 1;
        mp[a]++;
    }

    int c = mp[2]+mp[3], b = mp[4]+mp[6];
    if(mp[3]>mp[6]) ck = 1;

    if(!(mp[1]==c && mp[1]==b)||ck==1)
        cout<<-1<<endl;
    else
    {
        int m = n/3;
        while(m--)
        {
            cout<<1<<" ";
            if(mp[2])
            {
                if(mp[4])
                {
                    cout<<2<<" "<<4<<" ";
                    mp[4]--;
                }
                else
                    cout<<2<<" "<<6<<" ";
                mp[2]--;
            }
            else
                cout<<3<<" "<<6<<" ";
            cout<<endl;
        }
    }
    return 0;
}

