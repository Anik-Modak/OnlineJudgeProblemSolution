//Anik_Modak
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, a, ns = 0, ms = 0;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            ns += a;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> a;
            ms += a;
        }

        if (ns > ms)
            cout << "Calem\n";
        else if (ns == ms)
            cout << "Draw\n";
        else
            cout << "Serena\n";
    }
    return 0;
}
