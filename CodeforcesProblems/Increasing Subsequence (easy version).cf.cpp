//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n;

    int a[n], l=0, r = n-1;
    for(int i=0; i<n; i++)
        cin>>a[i];

    int prel = -1, prer = -1;
    string s = "";
    while(l<=r)
    {
        if(prel > a[l])
        {
            if(prer < a[r])
            {
                prer = a[r];
                s.push_back('R');
                r--;
                continue;
            }
            else
                break;
        }

        if(prer > a[r])
        {
            if(a[l] > prel)
            {
                prel = a[l];
                s.push_back('L');
                l++;
                continue;
            }
            else
                break;
        }

        if(a[l] < a[r])
        {
            prel = a[l];
            s.push_back('L');
            l++;
        }
        else
        {
            prer = a[r];
            s.push_back('R');
            r--;
        }
    }

    cout<<s.size()<<endl;
    cout<<s<<endl;

    return 0;
}
