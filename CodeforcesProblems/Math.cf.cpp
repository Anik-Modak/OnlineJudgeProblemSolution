//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

vector<int>v;
void fn()
{
    for(int i=1; i<=10000000; i++)
    {
        int m=sqrt(i);
        double d =sqrt(i);
        if(m==d) v.push_back(i);
    }
}

int main()
{
    fn();
    int n, ans=0, ck=1, nn, m=0;
    cin>>n;
    nn=n;

    while(ck)
    {
        ck=0;
        for(int i=0; i<v.size(); i++)
        {
            if(m==v[i]) ans=1;
            if(v[i]%n==0 && v[i]/n<n && )
            {
                m=sqrt(v[i]);
                ans=2;
            }
        }
        n=m;
        ans++;
    }
    if(n==nn) ans=0;
    cout<<n<<" "<<ans<<endl;
}
