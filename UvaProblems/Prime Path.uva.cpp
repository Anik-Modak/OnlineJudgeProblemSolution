//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

bool a[10000]={0};

void sive()
{
    int i,j,n=10000;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
}

int main()
{
    int t;
    //freopen("input.txt","r",stdin);
    sive();
    cin>>t;
    while(t--)
    {
        int n,m,ans=10000,p=0;
        cin>>n>>m;

        for(int i=n; i<=m; i++)
        {
            if(i%2==0) continue;

            if(a[i/2]==0&&p==0) p=i;
            else if(a[i/2]==0)
            {
                ans=min(ans,i-p);
                p=i;
            }
        }
        cout<<ans<<endl;
    }

}

