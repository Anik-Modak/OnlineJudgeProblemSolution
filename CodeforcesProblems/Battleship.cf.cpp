#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    char s[n+10][n+10];
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) cin>>s[i][j];

    int i,j,k,tem,mx=0,row=n, colom=n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            int u=0,d=0,r=0,l=0,x=i,y=j;

            if(n-y>=m){
                l=1;
                for(k=0; k<m; k++) if(s[x][y++]!='.') l=0;
            }

            x=i,y=j;
            if(n-x>=m){
                d=1;
                for(k=0; k<m; k++) if(s[x++][y]!='.') d=0;
            }

            x=i,y=j;
            if(y+1>=m){
                r=1;
                for(k=0; k<m; k++) if(s[x][y--]!='.') r=0;
            }

            x=i,y=j;
            if(x+1>=m){
                u=1;
                for(k=0; k<m; k++) if(s[x--][y]!='.') u=0;
            }

            tem=l+r+d+u;
            if(mx<tem){
                mx=tem;
                row=i+1;
                colom=j+1;
            }
        }
    }
    cout<<row<<" "<<colom<<endl;
}

