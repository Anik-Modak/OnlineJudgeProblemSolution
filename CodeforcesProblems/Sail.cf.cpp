//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, sx, sy, ex, ey;
    cin>>t>>sx>>sy>>ex>>ey;

    string s;
    cin>>s;

    if(sx == ex && sy == ey)
    {
        cout<<0<<endl;
        return 0;
    }

    long long e, w, u, n;
    e = w = u = n = 0;

    if(sx < ex) e = abs(sx - ex);
    else w = abs(sx - ex);

    if(sy < ey) n = abs(sy - ey);
    else u = abs(sy - ey);

    //cout<<e<<w<<u<<n<<endl;
    for(int i=0; i<t; i++)
    {
        if(s[i]=='E')
            if(e) e--;
        if(s[i]=='S')
            if(u) u--;
        if(s[i]=='W')
            if(w) w--;
        if(s[i]=='N')
            if(n) n--;

        if(e==0 && u==0 && w==0 && n==0)
        {
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

