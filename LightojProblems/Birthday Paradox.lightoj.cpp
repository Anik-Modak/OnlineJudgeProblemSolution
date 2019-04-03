//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca,n;
    freopen("input.txt","r",stdin);
    cin>>t;
    //cout<<log(2)<<endl;

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        int ans=sqrt(2.0*n*log(1/(1-0.5073)));
        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}

