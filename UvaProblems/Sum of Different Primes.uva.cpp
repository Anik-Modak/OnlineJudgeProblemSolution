//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

bool a[2005], vis[2005];
vector<int>p;

void sive()
{
    int i, j, n=10000;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
    p.push_back(2);
    for(i=3; i<n; i+=2) if(a[i/2]==0) p.push_back(i);
}

int MX, N, ans;
void subset(int i,int sum)
{
    if(sum >= MX) return;

    if(i==N)
    {
        if(sum == MX) ans++;
        return;
    }

    subset(i+1, sum);
    subset(i+1, sum+p[i]);
}

int main()
{
    sive();
    while(cin>>MX>>N && MX|N)
    {
        ans = 0;
        memset(vis,0,sizeof(vis));
        subset(0,0);
        cout<<ans<<endl;
    }
}
