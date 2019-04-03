//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,coun=0,j;
    cin>>n>>m;

    int stu[n],mark[n]={0};
    for(i=0;i<n;i++) cin>>stu[i];

    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          //  printf("%d %d\n",stu[i],stu[j]);
            if(stu[i]==stu[j]){
                mark[j]=1;
            }
        }
    }

   // for(i=0;i<n;i++) cout<<mark[i]<<" ";
    for(i=0;i<n;i++)
        if(mark[i]==0) coun++;

    if(coun<m)
    {
        cout<<"NO\n";
        return 0;
    }
    else cout<<"YES\n";
    for(i=0,j=0;i<n;i++)
    {
        if(mark[i]==0){
            cout<<i+1<<" ";
            j++;
        }
        if(j==m) break;
    }
    cout<<endl;
}
