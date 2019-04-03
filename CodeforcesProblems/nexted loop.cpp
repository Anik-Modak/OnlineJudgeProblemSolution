//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0;
    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            for(int k=1; k<=n; k++)
                for(int l=1; l<=n; l++)
                    for(int m=1; m<=n; m++)
                    {
                        ans+=(abs(i-j)*abs(j-k)*abs(k-l)*abs(l-m)*abs(m-i));
                        cout<<ans<<endl;
                    }
    cout<<ans<<endl;
}
