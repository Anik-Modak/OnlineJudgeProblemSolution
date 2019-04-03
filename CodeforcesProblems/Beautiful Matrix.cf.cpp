//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, y;
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            cin>>n;
            if(n==1)
            {
                x = i;
                y = j;
            }
        }
    }

    int cnt = abs(x-3)+abs(y-3);
    cout<<cnt<<endl;
}

