//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a[15], b[15], mx=0;

    for(int i=0; i<14; i++) cin>>a[i];

    for(int i=0; i<14; i++)
    {
        long long tmp = a[i], sum=0;

        for(int j=0; j<14; j++)
        {
            b[j]=tmp/14;
            b[j]=tmp%14;
            tmp-=b[j];
        }
        int k=0;
        while(k<14)
        {
            if(k%2==0) sum+=b[k];
            k++;
        }
        mx=max(mx,sum);
    }
    cout<<mx<<endl;
}
