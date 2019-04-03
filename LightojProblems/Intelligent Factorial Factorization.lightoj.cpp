//Anik_Modak
#include<bits/stdc++.h>
using namespace std;


bool a[55]={0};

vector<int>v;
void sive()
{
    int i,j,n=100;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
    v.push_back(2);
    for(i=3; i<n; i+=2) if(a[i/2]==0) v.push_back(i);
}

void solve(int n)
{
    for(int i=0; i<v.size(); i++)
    {
        int N=n,h = 0;
        while(N!=0)
        {
            h = h + N/v[i];
            N = N / v[i];
        }
        if(i==0) printf("%d (%d)",v[i],h);
        else if(h) printf(" * %d (%d)",v[i],h);
    }
    printf("\n");
}

int main()
{
    int t,ca,n,m;
    //freopen("input.txt","r",stdin);
    cin>>t;
    sive();

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        printf("Case %d: %d = ",ca,n);
        solve(n);
    }
    return 0;
}
