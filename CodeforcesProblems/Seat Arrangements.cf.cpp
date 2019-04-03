#include<bits/stdc++.h>
using namespace std;

int a[2020][2020],c[2020][2020];

int main()
{
    int i,j,n,m,k,sum=0;
    cin>>n>>m>>k;
    string ch;

    for(i=0;i<n;i++){
       cin>>ch;
       for(j=0;j<ch.size();j++) {
            if(ch[j]=='.') sum++;
            a[i][j+1]=a[i-1][j+1]+1;
			c[i][j+1]=c[i][j]+1;
			if(a[i][j+1]>=k)sum++;
			if(c[i][j+1]>=k)sum++;
       }
    }
    if(k==1)sum/=2;
    cout<<sum<<endl;
}

