//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
#define MX 10
using namespace std;

int grundy[MX];
bool used[MX];

void grundyNumber()
{
    grundy[0] = 0;
    for(int i = 1; i <= MX; ++i)
    {
        mem(used,0);
        int mex = 0;
        for(int j = 1; j <= i; ++j)
            used[grundy[i - j]] = true;

        while(used[mex]) ++mex;

        grundy[i] = mex;
        for(int j = i + 1; j <= 51; ++j)
            grundy[j] = grundy[i];
       // cout<<i<<" "<< grundy[i]<<endl;
    }
}
int main()
{
    int ca,t;
    //freopen("input.txt","r",stdin);
    cin>>t;

    grundyNumber();
    int n,m;

    for(ca=1; ca<=t; ca++)
    {

    }

}
