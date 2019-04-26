//Anik_Modak
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, l;
        vector<int>vc;
        scanf("%lld %lld", &n, &l);

        pair<long long, int>p[n];
        for(int i = 0; i < n; i++)
        {
            long long h, m, s;
            scanf("%lld:%lld:%lld", &h, &m, &s);
            long long tm = h * 60 * 60 + m * 60 + s;
            p[i].first = tm, p[i].second = i+1;
        }

        sort(p, p + n);
        long long prev;
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                vc.push_back(p[i].second);
                prev = p[i].first;
            }
            else if(prev + l <= p[i].first)
            {
                vc.push_back(p[i].second);
                prev = p[i].first;
            }
        }

        sort(vc.begin(), vc.end());
        cout << vc.size() << endl;
        for(int i = 0; i < vc.size(); i++)
        {
            if(i==vc.size()-1)
                cout<<vc[i]<<endl;
            else
                cout<<vc[i]<<" ";
        }
        vc.clear();
    }
    return 0;
}
