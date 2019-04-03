//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int cnt = 0;
    for(int i=1; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            int tmp = i*i+j*j;
            int srt = sqrt(tmp);
            if(sqrt(tmp)==srt && srt<=n)
                cnt++;
        }
    }

    cout<<cnt<<endl;
    return 0;
}

