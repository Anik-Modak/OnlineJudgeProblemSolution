//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    string s[n];
    for(int i=0; i<n; i++)
        cin>>s[i];

    int ans = 0, a[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            a[i][j] = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='W')
            {
                if(i>0 && s[i-1][j]=='P')
                    a[i][j] += 1;
                if(j>0 && s[i][j-1]=='P')
                    a[i][j] += 1;
                if(i<n-1 && s[i+1][j]=='P')
                    a[i][j] += 1;
                if(j<m-1 && s[i][j+1]=='P')
                    a[i][j] += 1;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(s[i][j]=='P')
            {
                int mn = 100, x=0, y=0;
                if(i>0 && s[i-1][j]=='W')
                {
                    if(mn>a[i-1][j])
                    {
                        mn=a[i-1][j];
                        x=i-1, y=j;
                    }
                }
                if(j>0 && s[i][j-1]=='W')
                {
                    if(mn>a[i][j-1])
                    {
                        mn=a[i][j-1];
                        x=i, y=j-1;
                    }
                }
                if(i<n-1 && s[i+1][j]=='W')
                {
                    if(mn>a[i+1][j])
                    {
                        mn=a[i+1][j];
                        x=i+1, y=j;
                    }
                }
                if(j<m-1 && s[i][j+1]=='W')
                {
                    if(mn>a[i][j+1])
                    {
                        mn=a[i][j+1];
                        x=i, y=j+1;
                    }
                }

                //cout<<x<<" "<<y<<" "<<a[x][y]<<endl;
                if(a[x][y]>0)
                {
                    a[x][y] = 0;
                    ans ++;
                }
            }
        }
    }
    cout<<ans<<endl;
}
