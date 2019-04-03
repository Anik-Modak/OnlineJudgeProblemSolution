#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int i,a[n+1]={0},d,cnt=0;
    for(i=1;i<=n;i++){
        int p,q,c=0;
        scanf("%d",&p);
        while(p--){
            scanf("%d",&q);
            if(q<m) c=1;
        }
        if(c==1){
            a[i]=c;
            cnt++;
            d=i;
        }
    }
    cout<<cnt<<endl;
    for(i=1;i<=n;i++)
    {
        if(i==d&&a[i]==1) printf("%d\n",i);
        else if(a[i]==1) printf("%d ",i);
    }
}


