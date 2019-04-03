//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long a, ans=0;
        string str[n], tmp="";

        int id=-1;
        while(n--)
        {
            cin>>a;
            str[++id] = bitset<32>(a).to_string();
        }

        for(int i=0; i<32; i++)
        {
            int cnt = 0;
            for(int j=0; j<=id; j++)
                if(str[j][i]=='1') cnt++;

            if(cnt%2) tmp+="1";
            else tmp+="0";
        }

        ans = bitset<32>(tmp).to_ulong();
        cout<<ans<<endl;
    }
    return 0;
}
