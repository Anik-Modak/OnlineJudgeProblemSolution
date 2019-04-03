#include<iostream>
using namespace std;

int main()
{
    int i,j,n,m,x,y,c=0;
    cin>>n>>m;
    for(i=0;i<=100;i++)
    {
        for(j=0;j<=100;j++)
        {
            x=i*i+j;
            y=j*j+i;
            if(x==n&&y==m) c++;
        }
    }
    cout<<c<<endl;
}
